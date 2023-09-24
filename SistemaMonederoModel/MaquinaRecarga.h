#pragma once

using namespace System;

namespace SistemaMonederoModel {

	public ref class MaquinaRecarga {

	private:
		int Codigo;
		String^ UbicacionMaquinaRecarga;
		double MontoAbono;
		String^ FechaRecarga;

	public:
		MaquinaRecarga();
		MaquinaRecarga(int Codigo, String^ UbicacionMaquinaRecarga, double MontoAbono, String^ FechaRecarga);

	};
}