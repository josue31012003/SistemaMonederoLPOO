#pragma once

#include "MaquinaRecarga.h"
#include "MaquinaCompra.h"
#include "PlatoVendido.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaMonederoModel {
	public ref class Transaccion {

	private:

		int Codigo;
		String^ Fecha;
		String^ tipo;
		double Monto;
		int codigoUsuario;
		int codigoUbicacion;
		List<PlatoVendido^>^ listaPlatosVendidos;

	public:
		Transaccion();
		Transaccion(int Codigo, String^ Fecha, String^ tipo, double Monto, int codigoUsuario, int codigoUbicacion);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getFecha();
		void setFecha(String^ Fecha);

		String^ getTipo();
		void setTipo(String^ tipo);

		double getMonto();
		void setMonto(double Monto);

		void setCodigoUbicacion(int codigoUbicacion);
		int getCodigoUbicacion();

		int getCodigoUsuario();
		void setCodigoUsuario(int codigoUsuario);

		List<PlatoVendido^>^ getListaPlatosVendidos();
		void setListaPlatosVendidos(List<PlatoVendido^>^ listaPlatosVendidos);

	};
}