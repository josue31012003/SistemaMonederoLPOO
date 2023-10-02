#include <iostream>
#include "TarjetaController.h"

using namespace SistemaMonederoController;
using namespace System::IO;

TarjetaController::TarjetaController() {

}
List<Tarjeta^>^ TarjetaController::buscarTarjetas(String^ Estado) {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<Tarjeta^>^ listaTarjetasEncontradas = gcnew List<Tarjeta^>();

	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaTarjeta in lineas) {

		array<String^>^ datos = lineaTarjeta->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);

		String^ fechaAlta = datos[1];

		String^ fechaBaja = datos[2];

		String^ EstadoTarjeta = datos[3];

		if (EstadoTarjeta->Contains(Estado)) {

			int codigoTarjeta = Convert::ToInt32(datos[0]);
			Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, fechaAlta, fechaBaja, EstadoTarjeta);

			listaTarjetasEncontradas->Add(objTarjeta);

		}

	}
	return listaTarjetasEncontradas;
}
List<Tarjeta^>^ TarjetaController::buscarAll() {
	/*En esta lista vamos a colocar la información de las tarjetas que encontremos en el archivo de texto*/

	List<Tarjeta^>^ listaTarjetasEncontradas = gcnew List<Tarjeta^>();

	array<String^>^ lineas = File::ReadAllLines("Tarjetas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaTarjeta in lineas) {

		array<String^>^ datos = lineaTarjeta->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);

		String^ fechaAlta = datos[1];

		String^ fechaBaja = datos[2];

		String^ EstadoTarjeta = datos[3];

		Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, fechaAlta, fechaBaja, EstadoTarjeta);

		listaTarjetasEncontradas->Add(objTarjeta);
	}
	return listaTarjetasEncontradas;

}
void TarjetaController::escribirArchivo(List<Tarjeta^>^ listaTarjetas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaTarjetas->Count);
	for (int i = 0; i < listaTarjetas->Count; i++) {
		Tarjeta^ objTarjeta = listaTarjetas[i];
		lineasArchivo[i] = objTarjeta->getcodigo() + ";" + objTarjeta->getfechaAlta() + ";" + objTarjeta->getfechaBaja() + ";" + objTarjeta->getEstado();
	}
	File::WriteAllLines("Tarjetas.txt", lineasArchivo);

}
void TarjetaController::eliminarTarjetaFisica(int codigo) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == codigo) {
			listaTarjetas->RemoveAt(i);
		}

	}
	escribirArchivo(listaTarjetas);

}
void TarjetaController::agregarTarjeta(Tarjeta^ ObjTarjeta) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	listaTarjetas->Add(ObjTarjeta);
	escribirArchivo(listaTarjetas);



}
Tarjeta^ TarjetaController::buscarTarjetaxCodigo(int codigo) {

	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == codigo) {
			return listaTarjetas[i];
		}

	}

}
void TarjetaController::actualizarTarjeta(Tarjeta^ ObjTarjeta) {
	List<Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getcodigo() == ObjTarjeta->getcodigo()) {
			listaTarjetas[i]->setfechaAlta(ObjTarjeta->getfechaAlta());
			listaTarjetas[i]->setfechaBaja(ObjTarjeta->getfechaBaja());
			listaTarjetas[i]->setEstado(ObjTarjeta->getEstado());
			break;
		}
	}
	escribirArchivo(listaTarjetas);
}