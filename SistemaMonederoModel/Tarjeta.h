#pragma once
#include "Usuario.h"

namespace SistemaMonederoModel {

	using namespace System;

	public ref class Tarjeta {

	private:
		int codigo;
		String^ fechaAlta;
		String^ fechaBaja;
		String^ Estado;
		String^ codigoUsuario;

	public:
		Tarjeta();
		Tarjeta(int codigo, String^ fechaAlta, String^ fechaBaja, String^ Estado);
		int getcodigo();
		void setcodigo(int codigo);
		String^ getfechaAlta();
		void setfechaAlta(String^ fechaAlta);
		String^ getfechaBaja();
		void setfechaBaja(String^ fechaBaja);
		String^ getEstado();
		void setEstado(String^ Estado);
	};
}
