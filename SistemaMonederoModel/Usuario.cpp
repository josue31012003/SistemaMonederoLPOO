#include "Usuario.h"

using namespace SistemaMonederoModel;

Usuario::Usuario() {

}
Usuario::Usuario(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario) {
	
	this->Codigo = Codigo; 
	this->Nombre = Nombre;
	this->ApPaterno = ApPaterno;
	this->ApMaterno = ApMaterno;
	this->FechaNacimiento = FechaNacimiento;
	this->DNI = DNI;
	this->IdentificacionRFID = IdentificacionRFID;
	this->TipoUsuario = TipoUsuario;

}

/*Propiedades :: get() set() para las grillas*/

		int Usuario::getCodigo() {
			return this->Codigo;
		}
		void Usuario::setCodigo(int Codigo) {
			this->Codigo = Codigo;
		}


		String^ Usuario::getNombre() {
			return this->Nombre;
		}
		void Usuario::setNombre(String^ Nombre) {
			this->Nombre = Nombre;
		}


		String^ Usuario::getApPaterno() {
			return this->ApPaterno;
		}
		void Usuario::setApPaterno(String^ ApPaterno) {
			this->ApPaterno = ApPaterno;
		}


		String^ Usuario::getApMaterno() {
			return this->ApMaterno;
		}
		void Usuario::setApMaterno(String^ ApMaterno) {
			this->ApMaterno = ApMaterno;
		}



		String^ Usuario::getFechaNacimiento() {
			return this->FechaNacimiento;
		}
		void Usuario::setFechaNacimiento(String^ FechaNacimiento) {
			this->FechaNacimiento = FechaNacimiento;
		}



		String^ Usuario::getDNI() {
			return this->DNI;
		}
		void Usuario::setDNI(String^ DNI) {
			this->DNI = DNI;
		}


		String^ Usuario::getIdentificacionRFID() {
			return this->IdentificacionRFID;
		}
		void Usuario::setIdentificacionRFID(String^ IdentificacionRFID) {
			this->IdentificacionRFID = IdentificacionRFID;
		}


		String^ Usuario::getTipoUsuario() {
			return this->TipoUsuario;
		}
		void Usuario::setTipoUsuario(String^ TipoUsuario) {
			this->TipoUsuario = TipoUsuario;
		}

		/*List<Transaccion^>^ Usuario::getHistorialTransacciones() {
			return this->historialTransacciones;
		}
		void Usuario::setHistorialTransacciones(List<Transaccion^>^ historialTransacciones) {
			this->historialTransacciones = historialTransacciones;
		}*/