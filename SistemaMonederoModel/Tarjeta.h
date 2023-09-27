#pragma once

using namespace System;

namespace SistemaMonederoModel {
	public ref class Tarjeta {

	private:
		int Codigo;
		String^ FechaAlta;
		String^ FechaBaja;
		int Estado;

	public:
		Tarjeta();
		Tarjeta(int Codigo, String^ FechaAlta, String^ FechaBaja, int Estado);
	};
}