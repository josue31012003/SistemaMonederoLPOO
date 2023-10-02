#include "MaquinaController.h"
using namespace SistemaMonederoController;
using namespace System::IO;  /*Espacio de nombres que sirve para manejar archivos de texto*/

MaquinaController::MaquinaController() {

}

List<Maquina^>^ MaquinaController::buscarMaquinas(String^ tipoMaquina) {

	/*En esta lista vamos a colocar la informaci�n de los usuarios que encontremos en el archivo de texto*/

	List<Maquina^>^ listaMaquinasEncontradas = gcnew List<Maquina^>();
	array<String^>^ lineas = File::ReadAllLines("Maquinas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaMaquinas in lineas) {
		array<String^>^ datos = lineaMaquinas->Split(separadores->ToCharArray());

		int CodigoMaquina = Convert::ToInt32(datos[0]);
		String^ UbicacionMaquina = datos[1];
		String^ TipoMaquina = datos[2];
		

		if (TipoMaquina->Contains(tipoMaquina)) {
			int CodigoMaquina = Convert::ToInt32(datos[0]);
			Maquina^ objMaquina = gcnew Maquina(CodigoMaquina, UbicacionMaquina, TipoMaquina);
			listaMaquinasEncontradas->Add(objMaquina);
		}

	}

	return listaMaquinasEncontradas;

}


//M�TODO QUE SE ENCARGA DE BUSCAR A TODOS LOS USUARIOS DE UN TXT Y LOS PONE EN UN ARREGLO 

List < Maquina^>^ MaquinaController::buscarAll() {

	/*En esta lista vamos a colocar la informaci�n de lo que queremos que encontremos en el archivo de texto*/

	List<Maquina^>^ listaMaquinasEncontradas = gcnew List<Maquina^>();
	array<String^>^ lineas = File::ReadAllLines("Maquinas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/


	for each (String ^ lineaMaquina in lineas) {
		array<String^>^ datos = lineaMaquina->Split(separadores->ToCharArray());

		int CodigoMaquina = Convert::ToInt32(datos[0]);
		String^ UbicacionMaquina = datos[1];
		String^ TipoMaquina = datos[2];
		Maquina^ objMaquina = gcnew Maquina(CodigoMaquina, UbicacionMaquina, TipoMaquina);
		listaMaquinasEncontradas->Add(objMaquina);
	}
	return listaMaquinasEncontradas;


}
void MaquinaController::escribirArchivo(List<Maquina^>^ Lista) {

	array<String^>^ lineasArchivo = gcnew array<String^>(Lista->Count);
	for (int i = 0; i < Lista->Count; i++) {
		Maquina^ objeto = Lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getUbicacionMaquina() + ";" + objeto->gettipoMaquina();
	}
	File::WriteAllLines("Maquinas.txt", lineasArchivo);

}


void MaquinaController::eliminarMaquinaFisico(int Codigo) {
	List <Maquina^>^ listaMaquinas = buscarAll();

	for (int i = 0; i < listaMaquinas->Count; i++) {
		if (listaMaquinas[i]->getCodigo() == Codigo) {
			listaMaquinas->RemoveAt(i);
		}
	}
	escribirArchivo(listaMaquinas);
}

void MaquinaController::agregarMaquina(Maquina^ ObjMaquina) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	listaMaquinas->Add(ObjMaquina);
	escribirArchivo(listaMaquinas);
}
Maquina^ MaquinaController::buscarMaquinaxCodigo(int Codigo) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	for (int i = 0; i < listaMaquinas->Count; i++) {
		if (listaMaquinas[i]->getCodigo() == Codigo) {
			return listaMaquinas[i];
		}
	}
}

void MaquinaController::actualizarMaquina(Maquina^ ObjMaquina) {
	List <Maquina^>^ listaMaquinas = buscarAll();
	for (int i = 0; i < listaMaquinas->Count; i++) {

		if (listaMaquinas[i]->getCodigo() == ObjMaquina->getCodigo()) {
			//Voy a actualizar 
			listaMaquinas[i]->setUbicacionMaquina(ObjMaquina->getUbicacionMaquina());
			listaMaquinas[i]->settipoMaquina(ObjMaquina->gettipoMaquina());

			break;
		}
	}
	escribirArchivo(listaMaquinas);
}