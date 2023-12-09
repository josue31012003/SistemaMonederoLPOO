#pragma once

namespace SistemaMonederoController {

	using namespace System;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace SistemaMonederoModel;

	public ref class PlatoVendidoController {
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/

	public:
		PlatoVendidoController();
		/*Son los metodos propios del manejo de BD*/
		void abrirConexionBD();
		void cerrarConexionBD();

		List<PlatoVendido^>^ buscarAll();

		List<PlatoVendido^>^ buscarPlatosVendidosxTransaccion(int codigoTransaccion);
		void agregarPlatoVendido(PlatoVendido^ objPlatoVendido);

	};
}
