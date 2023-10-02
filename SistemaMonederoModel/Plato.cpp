#include "Plato.h"

using namespace SistemaMonederoModel;

Plato::Plato() {

}

Plato::Plato(int codigo, String^ Precio, String^ Origen, String^ Nombre) {
	this->codigo = codigo;
	this->Precio = Precio;
	this->Origen = Origen;
	this->Nombre = Nombre;
}

/*Las propiedades son metodos que nos permiten acceder y modificar
			  un atributo. Son los famosos GET y SET y se hace uno por cada atributo*/
int Plato::getCodigo() {
	return this->codigo;
}
void Plato::setCodigo(int codigo) {
	this->codigo = codigo;
}


String^ Plato::getPrecio() {
	return this->Precio;
}
void Plato::setPrecio(String^ Precio) {
	this->Precio = Precio;
}


String^ Plato::getOrigen() {
	return this->Origen;
}
void Plato::setOrigen(String^ Origen) {
	this->Origen = Origen;
}


String^ Plato::getNombre() {
	return this->Nombre;
}

void Plato::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}