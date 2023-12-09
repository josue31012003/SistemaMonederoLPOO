#include "Transaccion.h"

using namespace SistemaMonederoModel;

Transaccion::Transaccion() {

}
Transaccion::Transaccion(int Codigo, String^ Fecha, String^ tipo, double Monto, int codigoUsuario, int codigoUbicacion) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->tipo = tipo;
	this->Monto = Monto;
	this->codigoUsuario = codigoUsuario;
	this->codigoUbicacion = codigoUbicacion;
}

int Transaccion::getCodigo() {
	return this->Codigo;
}
void Transaccion::setCodigo(int codigo) {
	this->Codigo = codigo;
}

String^ Transaccion::getFecha() {
	return this->Fecha;
}
void Transaccion::setFecha(String^ Fecha) {
	this->Fecha = Fecha;
}

String^ Transaccion::getTipo() {
	return this->tipo;
}
void Transaccion::setTipo(String^ tipo) {
	this->tipo = tipo;
}

double Transaccion::getMonto() {
	return this->Monto;
}
void Transaccion::setMonto(double Monto) {
	this->Monto = Monto;
}

int Transaccion::getCodigoUbicacion() {
	return this->codigoUbicacion;
}
void Transaccion::setCodigoUbicacion(int codigoUbicacion) {
	this->codigoUbicacion = codigoUbicacion;
}

int Transaccion::getCodigoUsuario() {
	return this->codigoUsuario;
}
void Transaccion::setCodigoUsuario(int codigoUsuario) {
	this->codigoUsuario = codigoUsuario;
}

List<PlatoVendido^>^ Transaccion::getListaPlatosVendidos() {
	return this->listaPlatosVendidos;
}
void Transaccion::setListaPlatosVendidos(List<PlatoVendido^>^ listaPlatosVendidos) {
	this->listaPlatosVendidos = listaPlatosVendidos;
}