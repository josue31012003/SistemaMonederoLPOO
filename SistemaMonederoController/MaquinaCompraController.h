#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SistemaMonederoModel;

namespace SistemaMonederoController {
	public ref class MaquinaCompraController {
	public:
		MaquinaCompraController();
		List<MaquinaCompra^>^ buscarMaquinaCompra(String^ UbicacionMaquinaCompra);
		List<MaquinaCompra^>^ buscarAll();
		void escribirArchivo(List<MaquinaCompra^>^ listaMaquinasCompras);
		void eliminarMaquinaCompra(int Codigo);
		void agregarMaquinaCompra(MaquinaCompra^ ObjMaquinaCompra);
		MaquinaCompra^ buscarMaquinaCompraxCodigo(int Codigo);
		void actualizarMaquinaCompra(MaquinaCompra^ ObjMaquinaCompra);
	};
}