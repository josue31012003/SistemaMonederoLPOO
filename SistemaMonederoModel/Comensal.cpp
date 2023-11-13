#include "Comensal.h"
#include "Usuario.h"

using namespace SistemaMonederoModel;

Comensal::Comensal() {

}
Comensal::Comensal(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ UsuarioComensal, String^ PasswordComensal) {

	this->UsuarioComensal = UsuarioComensal;
	this->PasswordComensal = PasswordComensal;

}
