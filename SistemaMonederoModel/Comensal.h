#pragma once

#include "Usuario.h"
using namespace System;

namespace SistemaMonederoModel {

	public ref class Comensal :Usuario {
	private:
		String^ UsuarioComensal;
		String^ PasswordComensal;

	public:
		Comensal();
		Comensal(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ UsuarioComensal, String^ PasswordComensal);

	};
}