#include "nombrePlato.h"

using namespace SistemaMonederoModel;

nombrePlato::nombrePlato() {

}
nombrePlato::nombrePlato(int codigo, String^ nombre) {

	this->codigo = codigo;
	this->nombre = nombre;

}