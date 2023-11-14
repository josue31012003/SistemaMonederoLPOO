#pragma once

using namespace System;

namespace SistemaMonederoModel {
	public ref class Maquina {

	protected: //Esto es por la herencia
		int Codigo;
		int codigoUbicacion;
		String^ tipoMaquina;

	public:
		Maquina();
		Maquina(int Codigo, int codigoUbicacion, String^ tipoMaquina);

		int getCodigo();
		void setCodigo(int Codigo);

		int getCodigoUbicacion();
		void setCodigoUbicacion(int codigoUbicacion);

		String^ gettipoMaquina();
		void settipoMaquina(String^ tipoMaquina);
	};
}