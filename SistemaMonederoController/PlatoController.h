#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	public ref class PlatoController {
	public:
		PlatoController();
		List<Plato^>^ buscarPlatosxOrigen(String^ Origen);
	};

}
