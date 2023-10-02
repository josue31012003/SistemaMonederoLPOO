#include "MaquinaRecarga.h"

using namespace SistemaMonederoModel;

MaquinaRecarga::MaquinaRecarga() {

}
MaquinaRecarga::MaquinaRecarga(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina, double MontoAbonado, String^ FechaRecarga) {

	this->MontoAbonado = MontoAbonado;
	this->FechaRecarga = FechaRecarga;
}
