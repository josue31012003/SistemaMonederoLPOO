#pragma once

using namespace System;

namespace SistemaMonederoModel {
	public ref class MaquinaCompra {
	private:
		int Codigo;
		//double PrecioProducto;
		//String^ FechaCompra;
		//String^ ListaProductos;
		//int CantProductos;
		String^ UbicacionMaquinaCompra;

	public:
		MaquinaCompra();
		MaquinaCompra(int Codigo/*, double PrecioProducto, String^ FechaCompra, String^ ListaProductos, int CantProductos*/, String^ UbicacionMaquinaCompra);
		int getCodigo();
		void setCodigo(int Codigo);
		String^ getUbicacionMaquinaCompra();
		void setUbicacionMaquinaCompra(String^ UbicacionMaquinaCompra);

	};

}