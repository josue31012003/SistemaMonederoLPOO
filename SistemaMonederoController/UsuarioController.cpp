#include "UsuarioController.h"
using namespace SistemaMonederoController;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/

UsuarioController::UsuarioController() {

}

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

Usuario^ UsuarioController::buscarUsuarioxNombre(int nombre) {
	Usuario^ objUsuario = gcnew Usuario();
	return objUsuario;
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