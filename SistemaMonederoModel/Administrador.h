#pragma once
#include "Usuario.h"
using namespace System;


namespace SistemaMonederoModel {
	public ref class Administrador : Usuario {

	private:
		String^ UsuarioAdministrador;
		String^ PasswordAdministrador;
	public:
		Administrador();
		Administrador(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ UsuarioAdministrador, String^ PasswordAdministrador);

	};

}






