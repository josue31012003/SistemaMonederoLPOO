#include <iostream>
#include "PlatoController.h"

using namespace SistemaMonederoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/

PlatoController::PlatoController() {

}

List<Plato^>^ PlatoController::buscarPlatosxOrigen(String^ OrigenBuscado) {

    /*En esta lista vamos a colocar la información de los Platos que encontremos en el archivo de texto*/

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

        if (Origen->Contains(OrigenBuscado)) {
            Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio);
            listaPlatosEncontrados->Add(objPlato);
        }
    }

    return listaPlatosEncontrados;

}