#include "UsuarioController.h"
using namespace SistemaMonederoController; 
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/

UsuarioController::UsuarioController() {

}

List<Usuario^>^ UsuarioController::buscarUsuarios(String^ TipodeUsuario) {

	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/

	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int CodigoUsuario = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		String^ ApPaterno = datos[2];
		String^ ApMaterno = datos[3];
		String^ FechaNacimiento = datos[4];
		String^ DNI = datos[5];
		String^ IdentificacionRFID = datos[6];
		String^ TipoUsuario = datos[7];

		if (TipoUsuario->Contains(TipodeUsuario)) {
			Usuario^ objUsuario = gcnew Usuario( CodigoUsuario, Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario);
			listaUsuariosEncontrados->Add(objUsuario);
		}

	}

	return listaUsuariosEncontrados;


}