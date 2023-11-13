#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class PlatoController {

	private:
		SqlConnection^ objConexion;

	public:
		PlatoController();

		List<Plato^>^ buscarPlatosxOrigen(String^ Origen);

		List<Plato^>^ buscarPlatosxUbicacion(String^ UbicacionBuscada);

		List<Plato^>^ buscarAll();

		void escribirPlatos(List<Plato^>^ listaPlatos);

		void escribirPlatosxUbicacion(List<Plato^>^ lista, String^ Ubicacion);

		void eliminarPlatoFisico(int codigo);

		void agregarPlato(Plato^ objPlato);

		Plato^ buscarPlatoxCodigo(int codigo);

		void editarPlato(Plato^ objPlato);

		List<String^>^ obtenerOrigenes();


		//FUNCIONES DE BASE DE DATOS
		void abrirConexionBD();
		void cerrarConexionBD();
		void ModificarCantidad(int codigo, double cantPlatosVendidos);
		double ObtenerCantidadPorCodigoBD(int codigo);

		Plato^ buscarPlatoxCodigoBD(int codigo);
		List<Plato^>^ buscarPlatosxUbicacionBD(String^ ubicacion);
		List<Plato^>^ buscarAllBD();
		void registrarPlatoBD(int codigo, String^ Nombre, String^ Origen, double Precio, double cantPlatosVendidos);
		void eliminarPlatoBD(int codigo);
		void ActualizarPlatoBD(int codigo, String^ Nombre, String^ Origen, double Precio);
	};
}
