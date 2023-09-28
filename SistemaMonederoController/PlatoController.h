#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoController;

namespace SistemaMonederoController {

	public ref class PlatoController {
	public:
		PlatoController();
		List<Plato^>^ buscarPlatos(String^ Origen);
	};

}
