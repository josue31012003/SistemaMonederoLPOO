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
        int codigoUbicacion = Convert::ToDouble(datos[5]);
        Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio, cantPlatosVendidos, codigoUbicacion);
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

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Platos";

    try {
        SqlDataReader^ reader = objSentencia->ExecuteReader();

        while (reader->Read()) {
            int codigo = safe_cast<int>(reader["codigo"]);
            String^ nombre = safe_cast<String^>(reader["nombre"]);
            String^ origen = safe_cast<String^>(reader["origen"]);
            double precio = safe_cast<double>(reader["precio"]);
            double cantPlatosVendidos = safe_cast<double>(reader["cantPlatosVendidos"]);
            int codigoUbicacion = safe_cast<double>(reader["codigoUbicacion"]);
            Plato^ objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, codigoUbicacion);

            listaPlatos->Add(objPlato);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return listaPlatos;
}


double PlatoController::ObtenerCantidadPorCodigoBD(int codigo) {
    abrirConexionBD();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->CommandText = "SELECT cantPlatosVendidos FROM Platos WHERE codigo = @codigo";
    objSentencia->Connection = this->objConexion;
    objSentencia->Parameters->AddWithValue("@codigo", codigo);

    try {
        double cantPlatosVendidos = (double)objSentencia->ExecuteScalar();
        return cantPlatosVendidos;
    } catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    } finally {
        cerrarConexionBD();
    }

    return 0.0;  // Valor por defecto o manejo de error
}



void PlatoController::ModificarCantidad(int codigo, double cantPlatosVendidos) {
    // Abrir conexión BD   
    abrirConexionBD();

    // Incrementar la cantidad después de abrir la conexión
    cantPlatosVendidos++;

    SqlCommand^ objSentencia = gcnew SqlCommand();

    // Sentencia SQL para incrementar cantidad
    objSentencia->CommandText = "UPDATE Platos SET cantPlatosVendidos = @cantVendidos WHERE codigo = @codigo";
    objSentencia->Connection = this->objConexion;

    // Utilizar parámetros en la consulta SQL
    objSentencia->Parameters->AddWithValue("@cantVendidos", cantPlatosVendidos);
    objSentencia->Parameters->AddWithValue("@codigo", codigo);

    // Ejecutar la consulta
    objSentencia->ExecuteNonQuery();

    // Cerrar conexión
    cerrarConexionBD();
}


Plato^ PlatoController::buscarPlatoxCodigoBD(int codigo) {
    Plato^ objPlato = nullptr;
    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Platos WHERE codigo = @codigo";
    objSentencia->Parameters->AddWithValue("@codigo", codigo);

    try {
        SqlDataReader^ objData = objSentencia->ExecuteReader();

        while (objData->Read()) {
            int codigo = safe_cast<int>(objData["codigo"]);
            String^ nombre = safe_cast<String^>(objData["nombre"]);
            String^ origen = safe_cast<String^>(objData["origen"]);
            double precio = safe_cast<double>(objData["precio"]);
            double cantPlatosVendidos = safe_cast<double>(objData["cantPlatosVendidos"]);
            int codigoUbicacion = safe_cast<double>(objData["codigoUbicacion"]);
            objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, codigoUbicacion);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return objPlato;
}


   
    List<Plato^>^ PlatoController::buscarPlatosxUbicacionBD(String^ ubi) {
        List<Plato^>^ listPlatos = gcnew List<Plato^>();
        abrirConexionBD();

        // Crear comando con parámetro
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "SELECT p.codigo, p.nombre, p.origen, p.precio, p.cantPlatosVendidos FROM Maquinas m INNER JOIN Platos p ON m.codigoPlato = p.codigo WHERE m.ubicacion = @ubicacion";
        objSentencia->Connection = this->objConexion;
        objSentencia->Parameters->AddWithValue("@ubicacion", ubi);

        // Ejecutar y obtener reader
        SqlDataReader^ objData = objSentencia->ExecuteReader();

        while (objData->Read()) {
            // Agregar plato a lista
            int codigo = safe_cast<int>(objData["codigo"]);
            String^ nombre = safe_cast<String^>(objData["nombre"]);
            String^ origen = safe_cast<String^>(objData["origen"]);
            double precio = safe_cast<double>(objData["precio"]);
            double cantPlatosVendidos = safe_cast<double>(objData["cantPlatosVendidos"]);
            int codigoUbicacion = safe_cast<double>(objData["codigoUbicacion"]);
            Plato^ objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, codigoUbicacion);
            listPlatos->Add(objPlato);
        }

        // Cerrar reader
        objData->Close();

        // Cerrar conexión BD
        cerrarConexionBD();

        return listPlatos;
    }

    void PlatoController::registrarPlatoBD(int codigo, String^ Nombre, String^ Origen, double Precio, double cantPlatosVendidos) {

        abrirConexionBD();
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "INSERT INTO Platos (nombre, origen, precio, cantPlatosVendidos) VALUES('" + Nombre + "', '" + Origen + "', '" + Precio + "', '" + cantPlatosVendidos + "')";
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();

    }
    void PlatoController::eliminarPlatoBD(int codigo) {
    
        abrirConexionBD();
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "DELETE Platos	 WHERE codigo = " + codigo;
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();
    }
    void PlatoController::ActualizarPlatoBD(int codigo, String^ Nombre, String^ Origen, double Precio) {
        abrirConexionBD();
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "UPDATE Platos SET nombre='" + Nombre + "',origen='" + Origen + "',precio='" + Precio + "' WHERE codigo =" + codigo;
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();
    }

