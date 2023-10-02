#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	public ref class PlatoController {

	public:
		PlatoController();

		List<Plato^>^ buscarPlatosxOrigen(String^ Origen);

		List<Plato^>^ buscarAll();

		void escribirArchivo(List<Plato^>^ listaPlatos);

		void eliminarPlatoFisico(int codigo);

		void agregarPlato(Plato^ objPlato);

		Plato^ buscarPlatoxCodigo(int codigo);

		void editarPlato(Plato^ objPlato);

	};

}
