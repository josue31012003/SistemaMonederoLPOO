#include "Tarjeta.h"
using namespace SistemaMonederoModel;
Tarjeta::Tarjeta() {

}
Tarjeta::Tarjeta(int codigo, String^ fechaAlta, String^ fechaBaja, String^ Estado) {

	this->codigo = codigo;
	this->fechaAlta = fechaAlta;
	this->fechaBaja = fechaBaja;
	this->Estado = Estado;
}
int Tarjeta::getcodigo() {
	return this->codigo;
}
void Tarjeta::setcodigo(int codigo) {
	this->codigo = codigo;
}
String^ Tarjeta::getfechaAlta() {
	return this->fechaAlta;
}
void Tarjeta::setfechaAlta(String^ fechaAlta) {
	this->fechaAlta = fechaAlta;
}
String^ Tarjeta::getfechaBaja() {
	return this->fechaBaja;
}
void Tarjeta::setfechaBaja(String^ fechaBaja) {
	this->fechaBaja = fechaBaja;
}
String^ Tarjeta::getEstado() {
	return this->Estado;
}
void Tarjeta::setEstado(String^ Estado) {
	this->Estado = Estado;

}