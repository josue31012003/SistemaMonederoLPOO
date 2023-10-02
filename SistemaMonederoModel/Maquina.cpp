#include "Maquina.h"

using namespace SistemaMonederoModel;

Maquina::Maquina() {

}
Maquina::Maquina(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina) {

	this->Codigo = Codigo;
	this->UbicacionMaquina = UbicacionMaquina;
	this->tipoMaquina = tipoMaquina;
}

/*Propiedades :: get() set() para las grillas*/

int Maquina::getCodigo() {
	return this->Codigo;
}
void Maquina::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}


String^ Maquina::getUbicacionMaquina() {
	return this->UbicacionMaquina;
}
void Maquina::setUbicacionMaquina(String^ UbicacionMaquina) {
	this->UbicacionMaquina = UbicacionMaquina;
}


String^ Maquina::gettipoMaquina() {
	return this->tipoMaquina;
}
void Maquina::settipoMaquina(String^ tipoMaquina) {
	this->tipoMaquina = tipoMaquina;
}
