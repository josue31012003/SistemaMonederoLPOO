#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {
	public ref class TarjetaController {
	public:
		TarjetaController();
		List<Tarjeta^>^ buscarTarjetas(String^ Estado);
		List<Tarjeta^>^ buscarAll();
		void escribirArchivo(List<Tarjeta^>^ listaTarjetas);
		void eliminarTarjetaFisica(int codigo);
		void agregarTarjeta(Tarjeta^ ObjTarjeta);
		Tarjeta^ buscarTarjetaxCodigo(int codigo);
		void actualizarTarjeta(Tarjeta^ ObjTarjeta);
	};
}