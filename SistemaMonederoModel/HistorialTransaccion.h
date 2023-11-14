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
		double Monto;
		int codigoPlato;
		int codigoUsuario;
		int codigoMaquina;
	public:
		HistorialTransaccion();
		HistorialTransaccion(int Codigo, String^ Fecha, double Monto, int codigoPlato, int codigoUsuario, int codigoMaquina);

	};
}