#include "MaquinaCompra.h"

using namespace SistemaMonederoModel;

MaquinaCompra::MaquinaCompra() {

}
MaquinaCompra::MaquinaCompra(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina, String^ fechaCompra, int cantPlatos) :Maquina(Codigo, codigoUbicacion, tipoMaquina) {
	
	this->fechaCompra = fechaCompra;
	this->cantPlatos = cantPlatos;

}

