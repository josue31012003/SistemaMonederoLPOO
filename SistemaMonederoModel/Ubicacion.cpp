#include "Ubicacion.h"

using namespace SistemaMonederoModel;

Ubicacion::Ubicacion() {

}
Ubicacion::Ubicacion(int Codigo, String^ Nombre) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
}

int Ubicacion::getCodigo(){
	return this->Codigo;
}
void Ubicacion::setCodigo(int Codigo) {
	this->Codigo = Codigo;
}

String^ Ubicacion::getNombre() {
	return this->Nombre;
}
void Ubicacion::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}