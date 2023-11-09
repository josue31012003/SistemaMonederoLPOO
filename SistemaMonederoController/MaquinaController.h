#pragma once
using namespace System;
using namespace SistemaMonederoModel;
using namespace System::Collections::Generic;


namespace SistemaMonederoController {

	using namespace System::Data::SqlClient;
	using namespace System;

	public ref class MaquinaController {


	private:
		SqlConnection^ objConexion;  //Se agrega para trabajar con Base de Datos

	public:
		MaquinaController();
		List<Maquina^>^ buscarMaquinas(String^ tipoMaquina);
		/*Estos métodos ayudan mucho siempre */
		List < Maquina^>^ buscarAll();
		void escribirArchivo(List<Maquina^>^ ListaMaquinas);
		void eliminarMaquinaFisico(int Codigo);
		void agregarMaquina(Maquina^ ObjMaquina);
		Maquina^ buscarMaquinaxCodigo(int Codigo);
		void actualizarMaquina(Maquina^ ObjMaquina);
		List<String^>^ obtenerTipos();
		List<String^>^ obtenerUbicaciones();

		//Métodos de base de datos 
		void abrirConexionBD();
		void cerrarConexionBD();
		List<Maquina^>^ buscarMaquinaxtipoBD(String^ TipodeMaquina);
		void registrarMaquinaBD(String^ UbicacionMaquina, String^ tipoMaquina);
		void eliminarMaquinaBD(int codigo);
		Maquina^ buscarMaquinaxCodigoBD(int codigo);
		void ActualizarMaquinaBD(int Codigo, String^ UbicacionMaquina, String^ tipoMaquina);
		List<Maquina^>^ buscarAllBD();
		List<String^>^ MaquinaController::ObtenerUbicacionesBD();

	};

}
