#include "MaquinaController.h"
#include "UbicacionController.h"

using namespace SistemaMonederoController;
using namespace SistemaMonederoModel;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/

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
		int codigoUbicacion = safe_cast<int>(objData[1]);
		String^ tipoMaquina = safe_cast<String^>(objData[2]);
		Maquina^ objMaquina = gcnew Maquina(codigo, codigoUbicacion, tipoMaquina);
		listaMaquinas->Add(objMaquina);
	}

	cerrarConexionBD();

	return listaMaquinas;
}

void MaquinaController::registrarMaquinaBD(String^ UbicacionMaquina, String^ tipoMaquina) {

	UbicacionController^ objUbicacionController = gcnew UbicacionController();
	Ubicacion^ objUbicacion = objUbicacionController->buscarUbicacionxNombreBD(UbicacionMaquina);

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "INSERT INTO Maquinas (codigoUbicacion, tipoMaquina) VALUES(@codigoUbicacion, '" + tipoMaquina + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->Parameters->AddWithValue("@codigoUbicacion", objUbicacion->getCodigo());
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
		int codigoUbicacion = safe_cast<int>(objData[1]);
		String^ tipoMaquina = safe_cast<String^>(objData[2]);
		objMaquina = gcnew Maquina(codigo, codigoUbicacion, tipoMaquina);
	}
	cerrarConexionBD();
	return objMaquina;

}
void MaquinaController::ActualizarMaquinaBD(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina) {
	abrirConexionBD();

	UbicacionController^ objUbicacionController = gcnew UbicacionController();
	Ubicacion^ objUbicacion = objUbicacionController->buscarUbicacionxNombreBD(UbicacionMaquina);

	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Maquinas SET codigoUbicacion=" + objUbicacion->getCodigo() + ",tipoMaquina='" + tipoMaquina + "' WHERE codigo =" + Codigo;
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
		int codigo = safe_cast<int>(objData["codigo"]);
		int codigoUbicacion = safe_cast<int>(objData["codigoUbicacion"]);
		String^ tipoMaquina = safe_cast<String^>(objData["tipoMaquina"]);
		Maquina^ objMaquina = gcnew Maquina(codigo, codigoUbicacion, tipoMaquina);
		listaMaquinas->Add(objMaquina);
	}

	cerrarConexionBD();

	return listaMaquinas;
}

List<String^>^ MaquinaController::ObtenerUbicacionesBD() {

	// Crear lista para almacenar ubicaciones
	List<String^>^ ubicaciones = gcnew List<String^>();

	// Abrir conexión BD
	abrirConexionBD();

		// Crear comando
		SqlCommand^ objSentencia = gcnew SqlCommand();
		objSentencia->CommandText = "SELECT nombre FROM Ubicacion";
		objSentencia->Connection = this->objConexion;
		// Ejecutar y obtener reader
		SqlDataReader^ reader = objSentencia->ExecuteReader();

		// Leer filas
		while (reader->Read()) {

			String^ ubi = reader->GetString(0);

			int existe = 0;
			for (int i = 0; i < ubicaciones->Count; i++) {
				if (ubi == ubicaciones[i]) {
					existe = 1;
					break;
				}
			}
			// Solo agregar si no existe
			if (!existe) {
				ubicaciones->Add(ubi);
			}

		}

		// Cerrar reader
		reader->Close();

		// Cerrar conexión BD
		cerrarConexionBD();

		// Devolver lista de ubicaciones
		return ubicaciones;

}

List<String^>^ MaquinaController::ObtenerTiposBD() {

	// Crear lista para almacenar ubicaciones
	List<String^>^ tipos = gcnew List<String^>();

	// Abrir conexión BD
	abrirConexionBD();

	// Crear comando
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "SELECT tipoMaquina FROM Maquinas";
	objSentencia->Connection = this->objConexion;
	// Ejecutar y obtener reader
	SqlDataReader^ reader = objSentencia->ExecuteReader();

	// Leer filas
	while (reader->Read()) {

		String^ tipo = reader->GetString(0);

		int existe = 0;
		for (int i = 0; i < tipos->Count; i++) {
			if (tipo == tipos[i]) {
				existe = 1;
				break;
			}
		}
		// Solo agregar si no existe
		if (!existe) {
			tipos->Add(tipo);
		}

	}

	// Cerrar reader
	reader->Close();

	// Cerrar conexión BD
	cerrarConexionBD();

	// Devolver lista de ubicaciones
	return tipos;

}










