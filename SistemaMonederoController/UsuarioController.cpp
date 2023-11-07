#include "UsuarioController.h"
using namespace SistemaMonederoController;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/



List<Usuario^>^ UsuarioController::buscarUsuarios(String^ TipodeUsuario) {

	/*En esta lista vamos a colocar la información de los usuarios que encontremos en el archivo de texto*/

	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaUsuarios in lineas) {
		array<String^>^ datos = lineaUsuarios->Split(separadores->ToCharArray());

		int CodigoUsuario = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		String^ ApPaterno = datos[2];
		String^ ApMaterno = datos[3];
		String^ FechaNacimiento = datos[4];
		String^ DNI = datos[5];
		String^ IdentificacionRFID = datos[6];
		String^ TipoUsuario = datos[7];

		if (TipoUsuario->Contains(TipodeUsuario)) {
			int CodigoUsuario = Convert::ToInt32(datos[0]);
			Usuario^ objUsuario = gcnew Usuario(CodigoUsuario, Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario);
			listaUsuariosEncontrados->Add(objUsuario);
		}

	}

	return listaUsuariosEncontrados; 

}


//MÉTODO QUE SE ENCARGA DE BUSCAR A TODOS LOS USUARIOS DE UN TXT Y LOS PONE EN UN ARREGLO 

List < Usuario^>^ UsuarioController::buscarAll() {
	 
	/*En esta lista vamos a colocar la información de lo que queremos que encontremos en el archivo de texto*/

	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());

		int CodigoUsuario = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		String^ ApPaterno = datos[2];
		String^ ApMaterno = datos[3];
		String^ FechaNacimiento = datos[4];
		String^ DNI = datos[5];
		String^ IdentificacionRFID = datos[6];
		String^ TipoUsuario = datos[7];
		Usuario^ objUsuario = gcnew Usuario(CodigoUsuario, Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario);
		listaUsuariosEncontrados->Add(objUsuario);
	}
	return listaUsuariosEncontrados; 


}
void UsuarioController::escribirArchivo(List<Usuario^>^ Lista) {

	array<String^>^ lineasArchivo = gcnew array<String^>(Lista->Count);
	for (int i = 0; i < Lista->Count; i++) {
		Usuario^ objeto = Lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getNombre() + ";" + objeto->getApPaterno() + ";" + objeto->getApMaterno() + ";" + objeto->getFechaNacimiento() + ";" + objeto->getDNI() + ";" + objeto->getIdentificacionRFID() + ";" + objeto->getTipoUsuario();
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);

}


void UsuarioController::eliminarUsuarioFisico(int codigo) {
	List <Usuario^>^ listaUsuarios = buscarAll();

	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			listaUsuarios->RemoveAt(i);
		}
	}
	escribirArchivo(listaUsuarios); 
}

void UsuarioController::agregarUsuario(Usuario^ ObjUsuario) {
	List <Usuario^>^ listaUsuarios = buscarAll();
	listaUsuarios->Add(ObjUsuario);
	escribirArchivo(listaUsuarios);
}

Usuario^ UsuarioController :: buscarUsuarioxCodigo(int Codigo) {
	List <Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == Codigo) {
			return listaUsuarios[i]; 
		}
	}
}

Usuario^ UsuarioController::buscarUsuarioxNombre(String^ nombre) {
	List <Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getNombre() == nombre) {
			return listaUsuarios[i];
		}
	}
	if (listaUsuarios->Count == 0) {
		return nullptr;
	}
}


void UsuarioController :: actualizarUsuario(Usuario^ ObjUsuario) {
	List <Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {

		if (listaUsuarios[i]->getCodigo() == ObjUsuario -> getCodigo()) {
			//Voy a actualizar 
			listaUsuarios[i]->setNombre(ObjUsuario -> getNombre());
			listaUsuarios[i]->setApPaterno(ObjUsuario->getApPaterno());
			listaUsuarios[i]->setApMaterno(ObjUsuario->getApMaterno());
			listaUsuarios[i]->setFechaNacimiento(ObjUsuario->getFechaNacimiento());
			listaUsuarios[i]->setDNI(ObjUsuario->getDNI()); 
			listaUsuarios[i]->setIdentificacionRFID(ObjUsuario->getIdentificacionRFID());
			listaUsuarios[i]->setTipoUsuario(ObjUsuario->getTipoUsuario());
			break; 
		}	
	}
	escribirArchivo(listaUsuarios); 
}

List<String^>^ UsuarioController::obtenerTiposdeUsuario() {
	List<Usuario^>^ listaUsuarios = buscarAll();
	List<String^>^ listaTiposUsuario = gcnew List<String^>();

	for (int i = 0; i < listaUsuarios->Count; i++) {

		String^ TipoUsuario = listaUsuarios[i]->getTipoUsuario();

		int existe = 0;
		for (int j = 0; j < listaTiposUsuario->Count; j++) {

			if (listaTiposUsuario[j]->Contains(TipoUsuario)) {
				existe = 1;
			}
		}

		if (existe == 0) {
			listaTiposUsuario->Add(TipoUsuario);
		}

	}
	return listaTiposUsuario;

}




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
