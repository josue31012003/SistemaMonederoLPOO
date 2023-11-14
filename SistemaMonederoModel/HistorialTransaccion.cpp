#include "HistorialTransaccion.h"

using namespace SistemaMonederoModel;

HistorialTransaccion::HistorialTransaccion() {


}
HistorialTransaccion::HistorialTransaccion(int Codigo, String^ Fecha, double Monto, int codigoPlato, int codigoUsuario, int codigoMaquina) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->Monto = Monto;
	this->codigoPlato = codigoPlato;
	this->codigoUsuario = codigoUsuario;
	this->codigoMaquina = codigoMaquina;
}