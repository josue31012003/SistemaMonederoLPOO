#include "Plato.h"

using namespace SistemaMonederoModel;

Plato::Plato() {

}

Plato::Plato(int codigo, String^ Nombre, String^ Origen, double Precio, double cantPlatosVendidos, int codigoUbicacion) {
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->Origen = Origen;
	this->Precio = Precio;
	this->cantPlatosVendidos = cantPlatosVendidos;
	this->codigoUbicacion = codigoUbicacion;
}

/*Las propiedades son metodos que nos permiten acceder y modificar
			  un atributo. Son los famosos GET y SET y se hace uno por cada atributo*/
int Plato::getCodigo() {
	return this->codigo;
}
void Plato::setCodigo(int codigo) {
	this->codigo = codigo;
}


String^ Plato::getNombre() {
	return this->Nombre;
}

void Plato::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}


String^ Plato::getOrigen() {
	return this->Origen;
}
void Plato::setOrigen(String^ Origen) {
	this->Origen = Origen;
}


double Plato::getPrecio() {
	return this->Precio;
}
void Plato::setPrecio(double Precio) {
	this->Precio = Precio;
}

double Plato::getCantPlatosVendidos() {
	return this->cantPlatosVendidos;
}
void Plato::setCantPlatosVendidos(double cantPlatosVendidos) {
	this->cantPlatosVendidos = cantPlatosVendidos;
}

int Plato::getCodUbicacion() {
	return this->codigoUbicacion;
}
void Plato::setCodUbicacion(int codigoUbicacion) {
	this->codigoUbicacion = codigoUbicacion;
}
