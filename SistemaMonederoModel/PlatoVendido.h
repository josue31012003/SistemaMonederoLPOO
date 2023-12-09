#pragma once
#include "MaquinaRecarga.h"
#include "MaquinaCompra.h"

using namespace System;

namespace SistemaMonederoModel {
	public ref class PlatoVendido {

	private:

		int codigo;
		String^ nombre;
		int cantidad;
		int codigoTransaccion;

	public:
		PlatoVendido();
		PlatoVendido(int codigo, String^ nombre, int cantidad, int codigoTransaccion);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getNombre();
		void setNombre(String^ nombre);

		int getCantidad();
		void setCantidad(int cantidad);

		int getCodigoTransaccion();
		void setCodigoTransaccion(int codigoTransaccion);

	};
}