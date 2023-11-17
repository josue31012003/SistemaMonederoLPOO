#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class nombrePlatoController {

	private:
		SqlConnection^ objConexion;

	public:
		nombrePlatoController();

		void abrirConexionBD();
		void cerrarConexionBD();

		List<nombrePlato^>^ buscarAllBD();
		bool nombreExiste(String^ nombre);
		void agregarNombre(String^ nombre);
	};
}