#include "PlatoVendido.h"

using namespace SistemaMonederoModel;

PlatoVendido::PlatoVendido() {

}
PlatoVendido::PlatoVendido(int codigo, String^ nombre, int cantidad, int codigoTransaccion) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->cantidad = cantidad;
	this->codigoTransaccion = codigoTransaccion;
}

int PlatoVendido::getCodigo() {
	return this->codigo;
}
void PlatoVendido::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ PlatoVendido::getNombre() {
	return this->nombre;
}
void PlatoVendido::setNombre(String^ nombre) {
	this->nombre = nombre;
}

int PlatoVendido::getCantidad() {
	return this->cantidad;
}
void PlatoVendido::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}

int PlatoVendido::getCodigoTransaccion() {
	return this->codigoTransaccion;
}
void PlatoVendido::setCodigoTransaccion(int codigoTransaccion) {
	this->codigoTransaccion = codigoTransaccion;
}