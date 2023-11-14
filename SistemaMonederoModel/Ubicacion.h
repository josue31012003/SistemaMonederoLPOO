#pragma once

namespace SistemaMonederoModel {

	using namespace System;

	public ref class Ubicacion {

	private:
		int Codigo;
		String^ Nombre;

	public:
		Ubicacion();
		Ubicacion(int Codigo, String^ Nombre);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombre();
		void setNombre(String^ Nombre);
	};
}