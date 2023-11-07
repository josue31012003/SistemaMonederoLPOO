#include <iostream>
#include "TarjetaController.h"

using namespace SistemaMonederoController;
using namespace System::IO;

List<Tarjeta^>^ TarjetaController::buscarTarjetas(String^ Estado) {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<Tarjeta^>^ listaTarjetasEncontradas = gcnew List<Tarjeta^>();

	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaTarjeta in lineas) {

		array<String^>^ datos = lineaTarjeta->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);

		String^ fechaAlta = datos[1];

		String^ fechaBaja = datos[2];

		String^ EstadoTarjeta = datos[3];

		if (EstadoTarjeta->Contains(Estado)) {

			int codigoTarjeta = Convert::ToInt32(datos[0]);
			Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, fechaAlta, fechaBaja, EstadoTarjeta);

			listaTarjetasEncontradas->Add(objTarjeta);

		}

	}
	return listaTarjetasEncontradas;
}
List<Tarjeta^>^ TarjetaController::buscarAll() {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<Tarjeta^>^ listaTarjetasEncontradas = gcnew List<Tarjeta^>();

	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaTarjeta in lineas) {

		array<String^>^ datos = lineaTarjeta->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);

		String^ fechaAlta = datos[1];

		String^ fechaBaja = datos[2];

		String^ EstadoTarjeta = datos[3];

		Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, fechaAlta, fechaBaja, EstadoTarjeta);

		listaTarjetasEncontradas->Add(objTarjeta);
	}
	return listaTarjetasEncontradas;

}
void TarjetaController::escribirArchivo(List<Tarjeta^>^ listaTarjetas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaTarjetas->Count);
	for (int i = 0; i < listaTarjetas->Count; i++) {
		Tarjeta^ objTarjeta = listaTarjetas[i];
		lineasArchivo[i] = objTarjeta->getcodigo() + ";" + objTarjeta->getfechaAlta() + ";" + objTarjeta->getfechaBaja() + ";" + objTarjeta->getEstado();
	}
	File::WriteAllLines("Tarjetas.txt", lineasArchivo);

}
void TarjetaController::eliminarTarjetaFisica(int codigo) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == codigo) {
			listaTarjetas->RemoveAt(i);
		}

	}
	escribirArchivo(listaTarjetas);

}
void TarjetaController::agregarTarjeta(Tarjeta^ ObjTarjeta) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	listaTarjetas->Add(ObjTarjeta);
	escribirArchivo(listaTarjetas);



}
Tarjeta^ TarjetaController::buscarTarjetaxCodigo(int codigo) {

	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == codigo) {
			return listaTarjetas[i];
		}

	}

}
void TarjetaController::actualizarTarjeta(Tarjeta^ ObjTarjeta) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == ObjTarjeta->getcodigo()) {
			listaTarjetas[i]->setfechaAlta(ObjTarjeta->getfechaAlta());
			listaTarjetas[i]->setfechaBaja(ObjTarjeta->getfechaBaja());
			listaTarjetas[i]->setEstado(ObjTarjeta->getEstado());
			break;
		}
	}
	escribirArchivo(listaTarjetas);
}






//IMPLEMENTACIÓN DE MÉTODOS DE BASE DE DATOS 
TarjetaController::TarjetaController() {
	this->objConexion = gcnew SqlConnection();
}

void TarjetaController::abrirConexionBD() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/

}
void TarjetaController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Tarjeta^>^ TarjetaController::buscarTarjetaxEstadoBD(String^ estado) {

	List<Tarjeta^>^ listaTarjetas = gcnew List<Tarjeta^>(); 

	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	if (estado == "Todos") {
		objSentencia->CommandText = "SELECT * from Tarjeta ";
	}
	else {
		objSentencia->CommandText = "SELECT * from Tarjeta WHERE estado like '" + estado + "'";
	}
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
//		String^ codigoRFID = safe_cast<String^>(objData[1]);
		String^ fechaAlta = safe_cast<String^>(objData[1]);
		String^ fechaBaja = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo, fechaAlta, fechaBaja, estado);
		listaTarjetas->Add(objTarjeta);
	}

	cerrarConexionBD();

	return listaTarjetas;
}

void TarjetaController::registrarTarjetaBD(String^ fechaAlta, String^ fechaBaja, String^ Estado) {

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand(); 
	objSentencia->CommandText = "INSERT INTO Tarjeta (fechaAlta, fechaBaja, estado) VALUES('" + fechaAlta + "', '" + fechaBaja + "', '" + Estado + "')";
	objSentencia->Connection = this->objConexion; 
	objSentencia->ExecuteNonQuery(); 
	cerrarConexionBD(); 

}


void TarjetaController::eliminarTarjetaBD(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE Tarjeta	 WHERE codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

Tarjeta^ TarjetaController::buscarTarjetaxCodigoBD(int codigo) {

	Tarjeta^ objTarjeta; 

	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Tarjeta WHERE codigo =" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		//		String^ codigoRFID = safe_cast<String^>(objData[1]);
		String^ fechaAlta = safe_cast<String^>(objData[1]);
		String^ fechaBaja = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		objTarjeta = gcnew Tarjeta(codigo, fechaAlta, fechaBaja, estado);
	}
	cerrarConexionBD();
	return objTarjeta; 


}
void TarjetaController::ActualizarTarjetaBD(int codigo, String^ fechaAlta, String^ fechaBaja, String^ Estado) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Tarjeta SET fechaAlta='" + fechaAlta + "',fechaBaja='" + fechaBaja + "',estado='" + Estado + "' WHERE codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}


List<Tarjeta^>^ TarjetaController::buscarAllBD() {


	List<Tarjeta^>^ listaTarjetas = gcnew List<Tarjeta^>();

	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Tarjeta";
	
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		//		String^ codigoRFID = safe_cast<String^>(objData[1]);
		String^ fechaAlta = safe_cast<String^>(objData[1]);
		String^ fechaBaja = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo, fechaAlta, fechaBaja, estado);
		listaTarjetas->Add(objTarjeta);
	}

	cerrarConexionBD();

	return listaTarjetas;


}





