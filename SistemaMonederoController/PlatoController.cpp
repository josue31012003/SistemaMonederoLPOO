#include <iostream>
#include "PlatoController.h"

using namespace SistemaMonederoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/

PlatoController::PlatoController() {

}

List<Plato^>^ PlatoController::buscarPlatosxOrigen(String^ OrigenBuscado) {

    /*En esta lista vamos a colocar la informaci�n de los Platos que encontremos en el archivo de texto*/

    List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
    array<String^>^ lineas = File::ReadAllLines("Platos.txt");
    String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

    /*Esta instruccion for each nos permite ir elemento por elemento de un array*/

    for each (String ^ lineaPlato in lineas) {

        /*Voy a separar cada elemento del String por ; con el split*/

        array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());

        int codigo = Convert::ToInt32(datos[0]);
        String^ Nombre = datos[1];
        String^ Origen = datos[2];
        String^ Precio = datos[3];

        if (Origen->Contains(OrigenBuscado)) {
            Plato^ objPlato = gcnew Plato(codigo, Nombre, Origen, Precio);
            listaPlatosEncontrados->Add(objPlato);
        }
    }

    return listaPlatosEncontrados;

}

List<Plato^>^ PlatoController::buscarAll() {
    /*En esta lista vamos a colocar la informaci�n de los Platos que encontremos en el archivo de texto*/

    List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
    array<String^>^ lineas = File::ReadAllLines("Platos.txt");
    String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

    /*Esta instruccion for each nos permite ir elemento por elemento de un array*/

    for each (String ^ lineaPlato in lineas) {

        /*Voy a separar cada elemento del String por ; con el split*/

        array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());

        int codigoPlato = Convert::ToInt32(datos[0]);
        String^ Nombre = datos[1];
        String^ Origen = datos[2];
        String^ Precio = datos[3];
        Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio);
        listaPlatosEncontrados->Add(objPlato);
    }

    return listaPlatosEncontrados;
}

void PlatoController::escribirArchivo(List<Plato^>^ lista) {

    array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

    for (int i = 0; i < lista->Count; i++) {

        Plato^ objPlato = lista[i];

        lineasArchivo[i] = objPlato->getCodigo() + ";" + objPlato->getNombre() + ";" + objPlato->getOrigen() + ";" + objPlato->getPrecio();

    }

    File::WriteAllLines("Platos.txt", lineasArchivo);

}

void PlatoController::eliminarPlatoFisico(int codigo) {

    List<Plato^>^ listaPlatos = buscarAll();

    for (int i = 0; i < listaPlatos->Count; i++) {

        if (listaPlatos[i] -> getCodigo() == codigo) {

            listaPlatos->RemoveAt(i);

        }

        escribirArchivo(listaPlatos);

    }

}

void PlatoController::agregarPlato(Plato^ objPlato) {

    List<Plato^>^ listaPlatos = buscarAll();

    listaPlatos->Add(objPlato);

    escribirArchivo(listaPlatos);

}

Plato^ PlatoController::buscarPlatoxCodigo(int codigo) {

    List<Plato^>^ listaPlatos = buscarAll();

    for (int i = 0; i < listaPlatos->Count; i++) {

        if (listaPlatos[i]->getCodigo() == codigo) {

            return listaPlatos[i];

        }

    }

}

void PlatoController::editarPlato(Plato^ objPlato) {

    List<Plato^>^ listaPlatos = buscarAll();

    for (int i = 0; i < listaPlatos->Count; i++) {

        if (listaPlatos[i]->getCodigo() == objPlato->getCodigo()) {

            listaPlatos[i]->setCodigo(objPlato->getCodigo());
            listaPlatos[i]->setNombre(objPlato->getNombre());
            listaPlatos[i]->setOrigen(objPlato->getOrigen());
            listaPlatos[i]->setPrecio(objPlato->getPrecio());

            break;

        }
    }

    escribirArchivo(listaPlatos);
}

List<String^>^ PlatoController::obtenerOrigenes() {

    List<Plato^>^ listaPlatos = buscarAll();
    List<String^>^ listaOrigenes = gcnew List<String^>();

    for (int i = 0; i < listaPlatos->Count; i++){

        String^ Origen = listaPlatos[i]->getOrigen();

        int existe = 0;
        for (int j = 0; j < listaOrigenes->Count; j++) {
            
            if (listaOrigenes[j]==Origen) {
                existe = 1;
            }
        }
        if (existe==0) {
            listaOrigenes->Add(Origen);
        }

    }

    return listaOrigenes;

}