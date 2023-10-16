#include "MaquinaRecarga.h"

using namespace SistemaMonederoModel;

MaquinaRecarga::MaquinaRecarga() {

}
MaquinaRecarga::MaquinaRecarga(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina, double MontoAbonado, String^ FechaRecarga) :Maquina(Codigo, UbicacionMaquina, tipoMaquina) {

	this->MontoAbonado = MontoAbonado;
	this->FechaRecarga = FechaRecarga;

}
