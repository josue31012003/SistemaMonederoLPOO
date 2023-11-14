#include "Plato.h"

using namespace SistemaMonederoModel;

Plato::Plato() {

}

Plato::Plato(int codigo, String^ Nombre, String^ Origen, double Precio, double cantPlatosVendidos, double cantPlatosDisponible, int codigoUbicacion) {
    this->codigo = codigo;
    this->Nombre = Nombre;
    this->Origen = Origen;
    this->Precio = Precio;
    this->cantPlatosVendidos = cantPlatosVendidos;
    this->cantPlatosDisponible = cantPlatosDisponible;
    this->codigoUbicacion = codigoUbicacion;
}

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
double Plato::getCantPlatosDisponible() {
    return this->cantPlatosDisponible;
}

void Plato::setCantPlatosDisponible(double cantPlatosDisponible) {
    this->cantPlatosDisponible = cantPlatosDisponible;
}

int Plato::getCodUbicacion() {
	return this->codigoUbicacion;
}
void Plato::setCodUbicacion(int codigoUbicacion) {
	this->codigoUbicacion = codigoUbicacion;
}
