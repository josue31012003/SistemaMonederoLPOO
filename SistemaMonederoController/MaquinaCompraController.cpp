#include <iostream>
#include "MaquinaCompraController.h"

using namespace SistemaMonederoController;
using namespace System::IO;

MaquinaCompraController::MaquinaCompraController() {

}
List<MaquinaCompra^>^ MaquinaCompraController::buscarMaquinaCompra(String^ UbicacionMaquinaCompra) {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<MaquinaCompra^>^ listaMaquinasCompraEncontradas = gcnew List<MaquinaCompra^>();

	array<String^>^ lineas = File::ReadAllLines("MaquinasCompra.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaMaquinaCompra in lineas) {

		array<String^>^ datos = lineaMaquinaCompra->Split(separadores->ToCharArray());

		int CodigoMaquinaCompra = Convert::ToInt32(datos[0]);

		String^ UbicacionMaquina = datos[1];


		if (UbicacionMaquina->Contains(UbicacionMaquinaCompra)) {

			int CodigoTarjeta = Convert::ToInt32(datos[0]);
			MaquinaCompra^ objMaquinaCompra = gcnew MaquinaCompra(CodigoMaquinaCompra, UbicacionMaquina);

			listaMaquinasCompraEncontradas->Add(objMaquinaCompra);

		}

	}
	return listaMaquinasCompraEncontradas;
}
List<MaquinaCompra^>^ MaquinaCompraController::buscarAll() {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<MaquinaCompra^>^ listaMaquinasCompraEncontradas = gcnew List<MaquinaCompra^>();

	array<String^>^ lineas = File::ReadAllLines("MaquinasCompra.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaMaquinaCompra in lineas) {

		array<String^>^ datos = lineaMaquinaCompra->Split(separadores->ToCharArray());

		int CodigoMaquinaCompra = Convert::ToInt32(datos[0]);

		String^ UbicacionMaquina = datos[1];

		MaquinaCompra^ objMaquinaCompra = gcnew MaquinaCompra(CodigoMaquinaCompra, UbicacionMaquina);

		listaMaquinasCompraEncontradas->Add(objMaquinaCompra);
	}
	return listaMaquinasCompraEncontradas;

}
void MaquinaCompraController::escribirArchivo(List<MaquinaCompra^>^ listaMaquinasCompra) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaMaquinasCompra->Count);
	for (int i = 0; i < listaMaquinasCompra->Count; i++) {
		MaquinaCompra^ objMaquinaCompra = listaMaquinasCompra[i];
		lineasArchivo[i] = objMaquinaCompra->getCodigo() + ";" + objMaquinaCompra->getUbicacionMaquinaCompra();
	}
	File::WriteAllLines("MaquinasCompra.txt", lineasArchivo);

}
void MaquinaCompraController::eliminarMaquinaCompra(int Codigo) {
	List<MaquinaCompra^>^ listaMaquinasCompra = buscarAll();
	for (int i = 0; i < listaMaquinasCompra->Count; i++) {
		if (listaMaquinasCompra[i]->getCodigo() == Codigo) {
			listaMaquinasCompra->RemoveAt(i);
		}

	}
	escribirArchivo(listaMaquinasCompra);

}
void MaquinaCompraController::agregarMaquinaCompra(MaquinaCompra^ ObjMaquinaCompra) {
	List<MaquinaCompra^>^ listaMaquinasCompra = buscarAll();
	listaMaquinasCompra->Add(ObjMaquinaCompra);
	escribirArchivo(listaMaquinasCompra);



}
MaquinaCompra^ MaquinaCompraController::buscarMaquinaCompraxCodigo(int Codigo) {

	List<MaquinaCompra^>^ listaMaquinasCompra = buscarAll();
	for (int i = 0; i < listaMaquinasCompra->Count; i++) {
		if (listaMaquinasCompra[i]->getCodigo() == Codigo) {
			return listaMaquinasCompra[i];
		}

	}

}
void MaquinaCompraController::actualizarMaquinaCompra(MaquinaCompra^ ObjMaquinaCompra) {
	List<MaquinaCompra^>^ listaMaquinasCompra = buscarAll();
	for (int i = 0; i < listaMaquinasCompra->Count; i++) {
		if (listaMaquinasCompra[i]->getCodigo() == ObjMaquinaCompra->getCodigo()) {
			listaMaquinasCompra[i]->setUbicacionMaquinaCompra(ObjMaquinaCompra->getUbicacionMaquinaCompra());
			break;
		}
	}
	escribirArchivo(listaMaquinasCompra);
}