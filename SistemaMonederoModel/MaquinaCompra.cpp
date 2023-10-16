#include "MaquinaCompra.h"

using namespace SistemaMonederoModel;

MaquinaCompra::MaquinaCompra() {

}
MaquinaCompra::MaquinaCompra(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina, String^ fechaCompra, int cantPlatos) :Maquina(Codigo, UbicacionMaquina, tipoMaquina) {
	
	this->fechaCompra = fechaCompra;
	this->cantPlatos = cantPlatos;

}

