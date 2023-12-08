#include <iostream>
#include "PlatoController.h"
#include "UbicacionController.h"

using namespace SistemaMonederoController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/

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
            double cantPlatosDisponibles = safe_cast<double>(reader["cantPlatosDisponibles"]);
            int codigoUbicacion = safe_cast<int>(reader["codigoUbicacion"]);
            Plato^ objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, cantPlatosDisponibles, codigoUbicacion);

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

double PlatoController::ObtenerCantidadDisponiblePorCodigoBD(int codigo) {
    abrirConexionBD();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->CommandText = "SELECT cantPlatosDisponibles FROM Platos WHERE codigo = @codigo";
    objSentencia->Connection = this->objConexion;
    objSentencia->Parameters->AddWithValue("@codigo", codigo);

    try {
        double cantPlatosDisponibles = (double)objSentencia->ExecuteScalar();
        return cantPlatosDisponibles;
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return 0.0;  // Valor por defecto o manejo de error
}



void PlatoController::ModificarCantidad(int codigo, double cantidadSeleccionada, double cantPlatosVendidos, double cantidadPlatosDisponible) {
    // Abrir conexión BD   
    abrirConexionBD();

    // Calcular la nueva cantidad de platos vendidos y disponibles
    cantPlatosVendidos += cantidadSeleccionada;
    cantidadPlatosDisponible -= cantidadSeleccionada;

    // Verificar si la cantidad no puede ser negativa
    cantPlatosVendidos = cantPlatosVendidos < 0 ? 0 : cantPlatosVendidos;
    cantidadPlatosDisponible = cantidadPlatosDisponible < 0 ? 0 : cantidadPlatosDisponible;

    SqlCommand^ objSentencia = gcnew SqlCommand();

    // Sentencia SQL para actualizar cantidades
    objSentencia->CommandText = "UPDATE Platos SET cantPlatosVendidos = @cantVendidos, cantPlatosDisponibles = @cantDisponibles WHERE codigo = @codigo";
    objSentencia->Connection = this->objConexion;

    // Utilizar parámetros en la consulta SQL
    objSentencia->Parameters->AddWithValue("@cantVendidos", cantPlatosVendidos);
    objSentencia->Parameters->AddWithValue("@cantDisponibles", cantidadPlatosDisponible);
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
            double cantPlatosDisponibles = safe_cast<double>(objData["cantPlatosDisponibles"]);
            int codigoUbicacion = safe_cast<int>(objData["codigoUbicacion"]);
           
            objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, cantPlatosDisponibles, codigoUbicacion);
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

        if (ubi == "") {
            objSentencia->CommandText = "SELECT * FROM Platos";
   
        }
        else {
            UbicacionController^ objUbicacionController = gcnew UbicacionController();
            Ubicacion^ objUbicacion = objUbicacionController->buscarUbicacionxNombreBD(ubi);
            objSentencia->CommandText = "SELECT * FROM Platos WHERE codigoUbicacion = @codigoUbicacion";
            objSentencia->Parameters->AddWithValue("@codigoUbicacion", objUbicacion->getCodigo());
        }
        objSentencia->Connection = this->objConexion;

        // Ejecutar y obtener reader
        SqlDataReader^ objData = objSentencia->ExecuteReader();

        while (objData->Read()) {
            // Agregar plato a lista
            int codigo = safe_cast<int>(objData["codigo"]);
            String^ nombre = safe_cast<String^>(objData["nombre"]);
            String^ origen = safe_cast<String^>(objData["origen"]);
            double precio = safe_cast<double>(objData["precio"]);
            double cantPlatosVendidos = safe_cast<double>(objData["cantPlatosVendidos"]);
            double cantPlatosDisponibles = safe_cast<double>(objData["cantPlatosDisponibles"]);
            int codigoUbicacion = safe_cast<int>(objData["codigoUbicacion"]);

            Plato^ objPlato = gcnew Plato(codigo, nombre, origen, precio, cantPlatosVendidos, cantPlatosDisponibles, codigoUbicacion);
            if (cantPlatosDisponibles != 0) {
                listPlatos->Add(objPlato);
            }
            
        }

        // Cerrar reader
        objData->Close();

        // Cerrar conexión BD
        cerrarConexionBD();

        return listPlatos;
    }

    void PlatoController::registrarPlatoBD(String^ Nombre, String^ Origen, double Precio, double cantPlatosDisponibles, int codigoUbicacion) {

        SqlCommand^ objSentencia = gcnew SqlCommand();

        abrirConexionBD();
        objSentencia->CommandText = "INSERT INTO Platos (nombre, origen, precio, cantPlatosVendidos, cantPlatosDisponibles, codigoUbicacion) VALUES('" + Nombre + "', '" + Origen + "', '" + Precio + "', 0, '" + cantPlatosDisponibles + "', '" + codigoUbicacion + "')";
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();

    }
    void PlatoController::eliminarPlatoBD(int codigo) {
    
        abrirConexionBD();
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "DELETE Platos WHERE codigo = " + codigo;
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();
    }
    void PlatoController::ActualizarPlatoBD(int codigo, String^ Origen, double Precio, double cantPlatosDisponible) {
        abrirConexionBD();
        SqlCommand^ objSentencia = gcnew SqlCommand();
        objSentencia->CommandText = "UPDATE Platos SET origen='" + Origen + "',precio='" + Precio + "',cantPlatosDisponibles='" + cantPlatosDisponible + "' WHERE codigo =" + codigo;
        objSentencia->Connection = this->objConexion;
        objSentencia->ExecuteNonQuery();
        cerrarConexionBD();
    }
    void PlatoController::incrementarConteoPlatosSeleccionados(String^ codigoPlato) {
        if (conteoPlatos->ContainsKey(codigoPlato)) {
            PlatoController^ objPlatoController = gcnew PlatoController();
            if (conteoPlatos[codigoPlato] < (objPlatoController->buscarPlatoxCodigoBD(Convert::ToInt32(codigoPlato))->getCantPlatosDisponible())) {
                conteoPlatos[codigoPlato]++;
            }
        }
        else {
            conteoPlatos[codigoPlato] = 1;
        }
    }

    int PlatoController::ConteoPlatosSeleccionados(String^ codigoPlato) {
        return conteoPlatos->ContainsKey(codigoPlato) ? conteoPlatos[codigoPlato] : 0;
    }
    void PlatoController::restarConteoPlatosSeleccionados(String^ codigoPlato, int cantidad) {
        if (conteoPlatos->ContainsKey(codigoPlato)) {
            conteoPlatos[codigoPlato] -= cantidad;

            // Asegurarse de que el conteo no sea negativo
            if (conteoPlatos[codigoPlato] < 0) {
                conteoPlatos[codigoPlato] = 0;
            }
        }
    }
    void PlatoController::reiniciarConteoPlatos() {
        // Reiniciar la lógica de conteo, por ejemplo, establecer el diccionario a vacío
        conteoPlatos->Clear();
    }

