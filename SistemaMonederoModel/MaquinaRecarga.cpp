#include "MaquinaRecarga.h"

using namespace SistemaMonederoModel;

MaquinaRecarga::MaquinaRecarga() {

}
MaquinaRecarga::MaquinaRecarga(int Codigo, String^ UbicacionMaquinaRecarga, double MontoAbono, String^ FechaRecarga) {
	this->Codigo = Codigo;
	this->UbicacionMaquinaRecarga = UbicacionMaquinaRecarga;
	this->MontoAbono = MontoAbono;
	this->FechaRecarga = FechaRecarga;
}