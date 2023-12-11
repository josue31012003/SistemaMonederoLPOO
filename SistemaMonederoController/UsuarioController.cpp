#include "UsuarioController.h"
using namespace SistemaMonederoController;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/

//IMPLEMENTACIÓN DE MÉTODOS DE BASE DE DATOS 

UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection(); 
}

void UsuarioController::abrirConexionBD() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
	
}
void UsuarioController::cerrarConexionBD() {
	this->objConexion->Close(); 
}

List<Usuario^>^ UsuarioController::buscarUsuarioxtipoBD(String^ TipodeUsuario) {

	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); 
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand(); 
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion; 
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	if (TipodeUsuario == "Todos") {
		objSentencia->CommandText = "SELECT * from Usuario WHERE tipoUsuario like '%%'";
	}
	else { 
		objSentencia->CommandText = "SELECT * from Usuario WHERE tipoUsuario like '%" + TipodeUsuario + "%'";
	}
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader(); 

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apPaterno = safe_cast<String^>(objData[2]); 
		String^ apMaterno = safe_cast<String^>(objData[3]); 
		String^ fechaNacimiento = safe_cast<String^>(objData[4]); 
		String^ DNI = safe_cast<String^>(objData[5]);
		String^ RFID = safe_cast<String^>(objData[6]);
		String^ tipoUsuario = safe_cast<String^>(objData[7]);
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apPaterno, apMaterno, fechaNacimiento, DNI, RFID, tipoUsuario);		
		listaUsuarios->Add(objUsuario); 
	}

	cerrarConexionBD();

	return listaUsuarios; 
}

void UsuarioController::registrarUsuarioBD(String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario) {
	abrirConexionBD();  
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "INSERT INTO Usuario (nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento, DNI, RFID, tipoUsuario) VALUES('"+Nombre+"', '"+ ApPaterno +"', '"+ApMaterno+"','"+FechaNacimiento+"','"+DNI+"','"+IdentificacionRFID+"','"+TipoUsuario+"')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery(); 
	cerrarConexionBD();  
}


void UsuarioController::eliminarUsuarioBD(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE Usuario WHERE codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

Usuario^ UsuarioController::buscarUsuarioxCodigoBD(int codigo) {

	Usuario^ objUsuario; 
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Usuario WHERE codigo = " + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apPaterno = safe_cast<String^>(objData[2]);
		String^ apMaterno = safe_cast<String^>(objData[3]);
		String^ fechaNacimiento = safe_cast<String^>(objData[4]);
		String^ DNI = safe_cast<String^>(objData[5]);
		String^ RFID = safe_cast<String^>(objData[6]);
		String^ tipoUsuario = safe_cast<String^>(objData[7]);
		objUsuario = gcnew Usuario(codigo, nombre, apPaterno, apMaterno, fechaNacimiento, DNI, RFID, tipoUsuario);
	}

	cerrarConexionBD();

	return objUsuario;
}


Usuario^ UsuarioController::buscarUsuarioxRFIDBD(String^ codigoRFID) { 

	List<Usuario^>^ listaUsuarios = buscarAllBD();
	abrirConexionBD();

	for (int i = 0; i < listaUsuarios->Count; i++) {

		if (listaUsuarios[i]->getIdentificacionRFID()->Replace(" ","")->Replace("\r","") == codigoRFID) {
			return listaUsuarios[i];
		}
	}
	cerrarConexionBD();
}



void UsuarioController::ActualizarUsuarioBD(int codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Usuario SET nombre='"+Nombre+"',apellidoPaterno='"+ApPaterno+"',apellidoMaterno='"+ApMaterno+"', fechaNacimiento='"+FechaNacimiento+"', DNI='"+DNI+"', RFID='"+IdentificacionRFID+"', tipoUsuario='"+TipoUsuario+"' WHERE codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}


List<Usuario^>^ UsuarioController::buscarAllBD() {

	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Usuario";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apPaterno = safe_cast<String^>(objData[2]);
		String^ apMaterno = safe_cast<String^>(objData[3]);
		String^ fechaNacimiento = safe_cast<String^>(objData[4]);
		String^ DNI = safe_cast<String^>(objData[5]);
		String^ RFID = safe_cast<String^>(objData[6]);
		String^ tipoUsuario = safe_cast<String^>(objData[7]);
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apPaterno, apMaterno, fechaNacimiento, DNI, RFID, tipoUsuario);
		listaUsuarios->Add(objUsuario);
	}

	cerrarConexionBD();

	return listaUsuarios;
}

Usuario^ UsuarioController::buscarUsuarioxNombre(String^ nombre)
{
	Usuario^ objUsuario;
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * from Usuario WHERE nombre = @nombre";
	objSentencia->Parameters->AddWithValue("@nombre", nombre);
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apPaterno = safe_cast<String^>(objData[2]);
		String^ apMaterno = safe_cast<String^>(objData[3]);
		String^ fechaNacimiento = safe_cast<String^>(objData[4]);
		String^ DNI = safe_cast<String^>(objData[5]);
		String^ RFID = safe_cast<String^>(objData[6]);
		String^ tipoUsuario = safe_cast<String^>(objData[7]);
		objUsuario = gcnew Usuario(codigo, nombre, apPaterno, apMaterno, fechaNacimiento, DNI, RFID, tipoUsuario);
	}

	cerrarConexionBD();

	return objUsuario;
}
String^ UsuarioController::obtenerSaldo(String^ codigoRFID) {
	double saldo;

	abrirConexionBD(); // Abrir la conexión a la base de datos

	SqlCommand^ cmd = gcnew SqlCommand();
	cmd->Connection = objConexion;
	cmd->CommandText = "SELECT t.saldo "
		"FROM Usuario u "
		"INNER JOIN Tarjeta t ON u.rfid = t.codigoUsuario "
		"WHERE u.rfid LIKE '%' + @RFID + '%'";
	cmd->Parameters->AddWithValue("@RFID", codigoRFID);

	try {
		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			saldo = Convert::ToDouble(reader["saldo"]);
		}

		reader->Close();
	}
	catch (SqlException^ e) {
		// Manejo de excepciones
		Console::WriteLine("Error al obtener saldo: " + e->Message);
	}
	finally {
		cerrarConexionBD(); // Cerrar la conexión a la base de datos
	}

	return saldo.ToString();
}


