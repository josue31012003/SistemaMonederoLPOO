#pragma once
using namespace System;

namespace SistemaMonederoModel {
	[Serializable]
		public ref class nombrePlato {
		public:
			property int codigo;
			property String^ nombre;
			nombrePlato();
			nombrePlato(int codigo, String^ nombre);
	};
}