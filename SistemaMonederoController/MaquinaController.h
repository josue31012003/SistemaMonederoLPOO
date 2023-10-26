#pragma once
using namespace System;
using namespace SistemaMonederoModel;
using namespace System::Collections::Generic;


namespace SistemaMonederoController {

	public ref class MaquinaController {

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

	};

}
