#pragma once

#include "Maquina.h"
using namespace System;

namespace SistemaMonederoModel {

	public ref class MaquinaRecarga :Maquina {

	private:
		double MontoAbonado;
		String^ FechaRecarga;

	public:
		MaquinaRecarga();
		MaquinaRecarga(int Codigo,String^UbicacionMaquina, String^tipoMaquina, double MontoAbonado, String^FechaRecarga);

	};
}