#pragma once
#include "Maquina.h"
using namespace System;


namespace SistemaMonederoModel {
	public ref class MaquinaCompra : Maquina {

	private:
		
	public:
		MaquinaCompra();
		MaquinaCompra(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina);

	};

}