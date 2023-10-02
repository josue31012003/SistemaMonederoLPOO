#pragma once

using namespace System;

namespace SistemaMonederoModel {
	public ref class Maquina {

	protected: //Esto es por la herencia
		int Codigo;
		String^ UbicacionMaquina;
		String^ tipoMaquina;

	public:
		Maquina();
		Maquina(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina);

		int getCodigo();
		void setCodigo(int Codigo);

		String^ getUbicacionMaquina();
		void setUbicacionMaquina(String^ UbicacionMaquina);

		String^ gettipoMaquina();
		void settipoMaquina(String^ tipoMaquina);
	};
}