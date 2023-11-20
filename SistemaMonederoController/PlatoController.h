#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class PlatoController {

		static Dictionary<String^, int>^ conteoPlatos = gcnew Dictionary<String^, int>();

	private:
		SqlConnection^ objConexion;

	public:
		PlatoController();

		//FUNCIONES DE BASE DE DATOS
		void abrirConexionBD();
		void cerrarConexionBD();
		void ModificarCantidad(int codigo, double cantidadSeleccionada, double cantPlatosVendidos, double cantidadPlatosDisponible);
		double ObtenerCantidadPorCodigoBD(int codigo);
		double ObtenerCantidadDisponiblePorCodigoBD(int codigo);

		Plato^ buscarPlatoxCodigoBD(int codigo);
		List<Plato^>^ buscarPlatosxUbicacionBD(String^ ubicacion);
		List<Plato^>^ buscarAllBD();
		void registrarPlatoBD(String^ Nombre, String^ Origen, double Precio, double cantPlatosDisponible, int codigoUbicacion);
		void eliminarPlatoBD(int codigo);
		void ActualizarPlatoBD(int codigo, String^ Origen, double Precio, double cantPlatosDisponible);
		static void incrementarConteoPlatosSeleccionados(String^ codigoPlato);
		static int ConteoPlatosSeleccionados(String^ codigoPlato);
		void restarConteoPlatosSeleccionados(String^ codigoPlato, int cantidad);
		void reiniciarConteoPlatos();

	};

}
