#include "Administrador.h"

using namespace SistemaMonederoModel;

Administrador::Administrador() :Usuario() {

}
Administrador::Administrador(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ UsuarioAdministrador, String^ PasswordAdministrador) :Usuario(Codigo, Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario) {
	this->UsuarioAdministrador = UsuarioAdministrador;
	this->PasswordAdministrador = PasswordAdministrador;
}