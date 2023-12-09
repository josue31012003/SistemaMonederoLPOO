#pragma once

namespace SistemaMonederoController {

	using namespace System;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace SistemaMonederoModel;

	public ref class TransaccionController {
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/

	public:
		TransaccionController();
		/*Son los metodos propios del manejo de BD*/
		void abrirConexionBD();
		void cerrarConexionBD();

		List<Transaccion^>^ buscarAll();

		List<Transaccion^>^ buscarTransaccionesxUsuario(int codigoUsuario);
		int agregarTransaccion(Transaccion^ objTransaccion);

	};
}
