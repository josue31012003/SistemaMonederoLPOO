#include "HistorialTransaccion.h"

using namespace SistemaMonederoModel;

HistorialTransaccion::HistorialTransaccion() {


}
HistorialTransaccion::HistorialTransaccion(int Codigo, String^ Fecha, double Valor, String^ UsuarioAsociado, String^ IDMaquina, Usuario^ ObjUsuario, MaquinaCompra^ ObjMaquinaCompra, MaquinaRecarga^ ObjMaquinaRecarga) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->Valor = Valor;
	this->UsuarioAsociado = UsuarioAsociado;
	this->IDMaquina = IDMaquina;
	this->ObjUsuario = ObjUsuario;
	this->ObjMaquinaCompra = ObjMaquinaCompra;
	this->ObjMaquinaRecarga = ObjMaquinaRecarga;
}