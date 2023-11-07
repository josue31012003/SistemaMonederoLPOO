#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class TarjetaController {

	private:
		SqlConnection^ objConexion;  //Se agrega para trabajar con Base de Datos 
	public:
		TarjetaController();
		List<Tarjeta^>^ buscarTarjetas(String^ Estado);
		List<Tarjeta^>^ buscarAll();
		void escribirArchivo(List<Tarjeta^>^ listaTarjetas);
		void eliminarTarjetaFisica(int Codigo);
		void agregarTarjeta(Tarjeta^ ObjTarjeta);
		Tarjeta^ buscarTarjetaxCodigo(int codigo);
		void actualizarTarjeta(Tarjeta^ ObjTarjeta);



		//Métodos de base de datos 

		void abrirConexionBD();
		void cerrarConexionBD();
		List<Tarjeta^>^ buscarTarjetaxEstadoBD(String^ estado);
		void registrarTarjetaBD(String^ fechaAlta, String^ fechaBaja, String^ Estado);
		void eliminarTarjetaBD(int codigo);
		Tarjeta^ buscarTarjetaxCodigoBD(int codigo);
		void ActualizarTarjetaBD(int codigo, String^ fechaAlta, String^ fechaBaja, String^ Estado);
		List<Tarjeta^>^ buscarAllBD();
	};
}