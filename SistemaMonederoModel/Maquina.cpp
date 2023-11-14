#include "Maquina.h"

using namespace SistemaMonederoModel;

Maquina::Maquina() {

}
Maquina::Maquina(int Codigo, int codigoUbicacion, String^ tipoMaquina) {

	this->Codigo = Codigo;
	this->codigoUbicacion = codigoUbicacion;
	this->tipoMaquina = tipoMaquina;
}

/*Propiedades :: get() set() para las grillas*/

int Maquina::getCodigo() {
	return this->Codigo;
}
void Maquina::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}


int Maquina::getCodigoUbicacion() {
	return this->codigoUbicacion;
}
void Maquina::setCodigoUbicacion(int codigoUbicacion) {
	this->codigoUbicacion = codigoUbicacion;
}


String^ Maquina::gettipoMaquina() {
	return this->tipoMaquina;
}
void Maquina::settipoMaquina(String^ tipoMaquina) {
	this->tipoMaquina = tipoMaquina;
}
