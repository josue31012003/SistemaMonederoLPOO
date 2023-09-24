#pragma once
#include "Usuario.h"
#include "MaquinaRecarga.h"
#include "MaquinaCompra.h"

using namespace System;

namespace SistemaMonederoModel {
	public ref class HistorialTransaccion {

	private:
		int Codigo;
		String^ Fecha;
		double Valor;
		String^ UsuarioAsociado;
		String^ IDMaquina;
		Usuario^ ObjUsuario;
		MaquinaCompra^ ObjMaquinaCompra;
		MaquinaRecarga^ ObjMaquinaRecarga;
	public:
		HistorialTransaccion();
		HistorialTransaccion(int Codigo, String^ Fecha, double Valor, String^ UsuarioAsociado, String^ IDMaquina, Usuario^ ObjUsuario, MaquinaCompra^ ObjMaquinaCompra, MaquinaRecarga^ ObjMaquinaRecarga);

	};
}