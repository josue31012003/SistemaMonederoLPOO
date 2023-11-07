#include "MaquinaController.h"

using namespace SistemaMonederoController;
using namespace SistemaMonederoModel;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/


List<Maquina^>^ MaquinaController::buscarMaquinas(String^ tipoMaquina) {

	/*En esta lista vamos a colocar la información de los usuarios que encontremos en el archivo de texto*/

	List<Maquina^>^ listaMaquinasEncontradas = gcnew List<Maquina^>();
	array<String^>^ lineas = File::ReadAllLines("Maquinas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaMaquinas in lineas) {
		array<String^>^ datos = lineaMaquinas->Split(separadores->ToCharArray());

		int CodigoMaquina = Convert::ToInt32(datos[0]);
		String^ UbicacionMaquina = datos[1];
		String^ TipoMaquina = datos[2];
		

		if (TipoMaquina->Contains(tipoMaquina)) {
			int CodigoMaquina = Convert::ToInt32(datos[0]);
			Maquina^ objMaquina = gcnew Maquina(CodigoMaquina, UbicacionMaquina, TipoMaquina);
			listaMaquinasEncontradas->Add(objMaquina);
		}

	}

	return listaMaquinasEncontradas;

}

//MÉTODO QUE SE ENCARGA DE BUSCAR A TODOS LOS USUARIOS DE UN TXT Y LOS PONE EN UN ARREGLO 

List < Maquina^>^ MaquinaController::buscarAll() {

	/*En esta lista vamos a colocar la información de lo que queremos que encontremos en el archivo de texto*/

	List<Maquina^>^ listaMaquinasEncontradas = gcnew List<Maquina^>();
	array<String^>^ lineas = File::ReadAllLines("Maquinas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaMaquina in lineas) {
		array<String^>^ datos = lineaMaquina->Split(separadores->ToCharArray());

		int CodigoMaquina = Convert::ToInt32(datos[0]);
		String^ UbicacionMaquina = datos[1];
		String^ TipoMaquina = datos[2];
		Maquina^ objMaquina = gcnew Maquina(CodigoMaquina, UbicacionMaquina, TipoMaquina);
		listaMaquinasEncontradas->Add(objMaquina);
	}
	return listaMaquinasEncontradas;


}

void MaquinaController::escribirArchivo(List<Maquina^>^ Lista) {

	array<String^>^ lineasArchivo = gcnew array<String^>(Lista->Count);
	for (int i = 0; i < Lista->Count; i++) {
		Maquina^ objeto = Lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getUbicacionMaquina() + ";" + objeto->gettipoMaquina();
	}
	File::WriteAllLines("Maquinas.txt", lineasArchivo);

}

void MaquinaController::eliminarMaquinaFisico(int Codigo) {
	List <Maquina^>^ listaMaquinas = buscarAll();

	for (int i = 0; i < listaMaquinas->Count; i++) {
		if (listaMaquinas[i]->getCodigo() == Codigo) {
			listaMaquinas->RemoveAt(i);
		}
	}
	escribirArchivo(listaMaquinas);
}

void MaquinaController::agregarMaquina(Maquina^ ObjMaquina) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	listaMaquinas->Add(ObjMaquina);
	escribirArchivo(listaMaquinas);
}

Maquina^ MaquinaController::buscarMaquinaxCodigo(int Codigo) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	for (int i = 0; i < listaMaquinas->Count; i++) {
		if (listaMaquinas[i]->getCodigo() == Codigo) {
			return listaMaquinas[i];
		}
	}
}

void MaquinaController::actualizarMaquina(Maquina^ ObjMaquina) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	for (int i = 0; i < listaMaquinas->Count; i++) {

		if (listaMaquinas[i]->getCodigo() == ObjMaquina->getCodigo()) {
			//Voy a actualizar 
			listaMaquinas[i]->setUbicacionMaquina(ObjMaquina->getUbicacionMaquina());
			listaMaquinas[i]->settipoMaquina(ObjMaquina->gettipoMaquina());

			break;
		}
	}
	escribirArchivo(listaMaquinas);
}

List<String^>^ MaquinaController::obtenerTipos() {

	List<Maquina^>^ listaMaquinas = buscarAll();
	List<String^>^ listaTipos = gcnew List<String^>();

	for (int i = 0; i < listaMaquinas->Count; i++) {

		String^ TipoMaquina = listaMaquinas[i]->gettipoMaquina();

		int existe = 0;
		for (int j = 0; j < listaTipos->Count; j++) {

			if (listaTipos[j] == TipoMaquina) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaTipos->Add(TipoMaquina);
		}

	}

	return listaTipos;
}

List<String^>^ MaquinaController::obtenerUbicaciones() {
	List<Maquina^>^ listaMaquinas = buscarAll();
	List<String^>^ listaUbicaciones = gcnew List<String^>();

	for (int i = 0; i < listaMaquinas->Count; i++) {

		String^ UbicacionMaquina = listaMaquinas[i]->getUbicacionMaquina();

		int existe = 0;
		for (int j = 0; j < listaUbicaciones->Count; j++) {

			if (listaUbicaciones[j] == UbicacionMaquina) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaUbicaciones->Add(UbicacionMaquina);
		}

	}
	listaUbicaciones->Add("Todos");

	return listaUbicaciones;
}


//IMPLEMENTACIÓN DE MÉTODOS DE BASE DE DATOS 
MaquinaController::MaquinaController() {
	this->objConexion = gcnew SqlConnection();
}

void MaquinaController::abrirConexionBD() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/

}
void MaquinaController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Maquina^>^ MaquinaController::buscarMaquinaxtipoBD(String^ TipodeMaquina) {

	List<Maquina^>^ listaMaquinas = gcnew List<Maquina^>();

	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	if (TipodeMaquina == "Todos") {
		objSentencia->CommandText = "SELECT * from Maquinas";
	}
	else {
		objSentencia->CommandText = "SELECT * from Maquinas WHERE tipoMaquina like '%" + TipodeMaquina + "%'";
	}
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		String^ tipoMaquina = safe_cast<String^>(objData[2]);
		Maquina^ objMaquina = gcnew Maquina(codigo, ubicacion, tipoMaquina);
		listaMaquinas->Add(objMaquina);
	}

	cerrarConexionBD();

	return listaMaquinas;
}

void MaquinaController::registrarMaquinaBD(String^ UbicacionMaquina, String^ tipoMaquina) {

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "INSERT INTO Maquinas (ubicacion, tipoMaquina) VALUES('" + UbicacionMaquina + "', '" + tipoMaquina + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
		
}

void MaquinaController::eliminarMaquinaBD(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE Maquinas WHERE codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD(); 

}

Maquina^ MaquinaController::buscarMaquinaxCodigoBD(int codigo) {
	Maquina^ objMaquina; 
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Maquinas WHERE codigo =" + codigo; 

	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		String^ tipoMaquina = safe_cast<String^>(objData[2]);
		objMaquina = gcnew Maquina(codigo, ubicacion, tipoMaquina);
	}
	cerrarConexionBD();
	return objMaquina;

}
void MaquinaController::ActualizarMaquinaBD(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Maquinas SET ubicacion='" + UbicacionMaquina + "',tipoMaquina='" + tipoMaquina +"' WHERE codigo =" + Codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<Maquina^>^ MaquinaController::buscarAllBD() {

	List<Maquina^>^ listaMaquinas = gcnew List<Maquina^>();

	abrirConexionBD(); 

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Maquinas ";
	
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		String^ tipoMaquina = safe_cast<String^>(objData[2]);
		Maquina^ objMaquina = gcnew Maquina(codigo, ubicacion, tipoMaquina);
		listaMaquinas->Add(objMaquina);
	}

	cerrarConexionBD();

	return listaMaquinas;


}















