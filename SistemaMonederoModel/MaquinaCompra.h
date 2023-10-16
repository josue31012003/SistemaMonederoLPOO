#pragma once
#include "Maquina.h"
#include "Plato.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaMonederoModel {
	public ref class MaquinaCompra : Maquina {

	private:
		
		String^ fechaCompra;
		List<Plato^> listaPlatos;
		int cantPlatos;
		
	public:
		MaquinaCompra();
		MaquinaCompra(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina, String^ fechaCompra, int cantPlatos);
		
	};

}