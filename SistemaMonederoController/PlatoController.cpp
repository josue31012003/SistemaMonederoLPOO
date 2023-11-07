#include <iostream>
#include "PlatoController.h"

using namespace SistemaMonederoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/

List<Plato^>^ PlatoController::buscarPlatosxOrigen(String^ OrigenBuscado) {

    List<Plato^>^ listaPlatosBuscados = gcnew List<Plato^>();
    List<Plato^>^ listaPlatos = buscarAll();
    for (int i = 0; i < listaPlatos->Count; i++) {
        if ((listaPlatos[i]->getOrigen() == OrigenBuscado) || (OrigenBuscado == "Todos")) {
            listaPlatosBuscados->Add(listaPlatos[i]);
        }
    }
    return listaPlatosBuscados;
}

List<Plato^>^ PlatoController::buscarPlatosxUbicacion(String^ UbicacionBuscada) {

    List<Plato^>^ listaPlatos = gcnew List<Plato^>();

    array<String^>^ lineas = File::ReadAllLines("PlatosxUbicacion.txt");
    String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

    /*Esta instruccion for each nos permite ir elemento por elemento de un array*/

    for each (String ^ lineaPlato in lineas) {

        /*Voy a separar cada elemento del String por ; con el split*/

        array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());

        int codigoPlato = Convert::ToInt32(datos[0]);
        String^ ubicacion = datos[1];

        PlatoController^ objPlatoController = gcnew PlatoController();
        
        Plato^ objPlato = buscarPlatoxCodigo(codigoPlato);

        if ((ubicacion == UbicacionBuscada) || (UbicacionBuscada == "Todos")) {
            listaPlatos->Add(objPlato);
        }
    }

    return listaPlatos;
}

List<Plato^>^ PlatoController::buscarAll() {
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
        double Precio = Convert::ToDouble(datos[3]);
        double cantPlatosVendidos = Convert::ToDouble(datos[4]);
        Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio, cantPlatosVendidos);
        listaPlatosEncontrados->Add(objPlato);
    }

    return listaPlatosEncontrados;
}

void PlatoController::escribirPlatos(List<Plato^>^ lista) {

    array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

    for (int i = 0; i < lista->Count; i++) {

        Plato^ objPlato = lista[i];

        lineasArchivo[i] = objPlato->getCodigo() + ";" + objPlato->getNombre() + ";" + objPlato->getOrigen() + ";" + objPlato->getPrecio();

    }

    File::WriteAllLines("Platos.txt", lineasArchivo);

}

void PlatoController::escribirPlatosxUbicacion(List<Plato^>^ lista, String^ Ubicacion) {

    array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

    for (int i = 0; i < lista->Count; i++) {

        Plato^ objPlato = lista[i];

        lineasArchivo[i] = objPlato->getCodigo() + ";" + Ubicacion;

    }

    File::WriteAllLines("PlatosxUbicacion.txt", lineasArchivo);

}

void PlatoController::eliminarPlatoFisico(int codigo) {

    List<Plato^>^ listaPlatos = buscarAll();

    for (int i = 0; i < listaPlatos->Count; i++) {

        if (listaPlatos[i] -> getCodigo() == codigo) {

            listaPlatos->RemoveAt(i);

        }

        escribirPlatos(listaPlatos);

    }

}

void PlatoController::agregarPlato(Plato^ objPlato) {

    List<Plato^>^ listaPlatos = buscarAll();

    listaPlatos->Add(objPlato);

    escribirPlatos(listaPlatos);

}

Plato^ PlatoController::buscarPlatoxCodigo(int codigo) {

    List<Plato^>^ listaPlatos = buscarAll();

    for (int i = 0; i < listaPlatos->Count; i++) {

        if (listaPlatos[i]->getCodigo() == codigo) {

            return listaPlatos[i];

        }

    }

}

/*MODIFICACION DE VALORES DE ATRIBUTOS DE OBJETO*/

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

    escribirPlatos(listaPlatos);
}

/*BUSQUEDA DE ITEMS SEGUN CRITERIO DE BUSQUEDA*/

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

    listaOrigenes->Add("Todos");

    return listaOrigenes;

}





// IMPLEMENTACIONES EN BASE DE DATOS 

PlatoController::PlatoController() {
    this->objConexion= gcnew SqlConnection(); 

}

void PlatoController::abrirConexionBD() {

    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
    this->objConexion->Open(); /*Apertura de la conexion a BD*/

}
void PlatoController::cerrarConexionBD() {
    this->objConexion->Close();
}


List<Plato^>^ PlatoController::buscarAllBD() {

    List<Plato^>^ listaPlatos = gcnew List<Plato^>();
    abrirConexionBD();

    /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a indicar la sentencia que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * from Platos";
    /*Aqui ejecuto la sentencia en la Base de Datos*/
    /*Para Select siempre sera ExecuteReader*/
    /*Para select siempre va a devolver un SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();

    while (objData->Read()) {
        int codigo = safe_cast<int>(objData[0]);
        String^ nombre = safe_cast<String^>(objData[1]);
        String^ origen = safe_cast<String^>(objData[2]);
        double precio = safe_cast<double>(objData[3]);
        double cantPlatosVendidos = safe_cast<double>(objData[4]);;
        Plato^ objPlato = gcnew Plato(codigo, nombre, origen, precio,cantPlatosVendidos);
        listaPlatos->Add(objPlato);
    }

    cerrarConexionBD();

    return listaPlatos;

}