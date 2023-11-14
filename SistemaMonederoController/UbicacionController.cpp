#include <iostream>
#include "UbicacionController.h"

using namespace SistemaMonederoController;

UbicacionController::UbicacionController() {
    this->objConexion = gcnew SqlConnection();

}

void UbicacionController::abrirConexionBD() {

    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
    this->objConexion->Open(); /*Apertura de la conexion a BD*/

}
void UbicacionController::cerrarConexionBD() {
    this->objConexion->Close();
}

Ubicacion^ UbicacionController::buscarUbicacionxCodigoBD(int codigo) {
    Ubicacion^ objUbicacion = nullptr;
    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Ubicacion WHERE codigo = @codigo";
    objSentencia->Parameters->AddWithValue("@codigo", codigo);

    try {
        SqlDataReader^ objData = objSentencia->ExecuteReader();

        while (objData->Read()) {
            int codigo = safe_cast<int>(objData["codigo"]);
            String^ nombre = safe_cast<String^>(objData["nombre"]);
            objUbicacion = gcnew Ubicacion(codigo, nombre);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return objUbicacion;
}

Ubicacion^ UbicacionController::buscarUbicacionxNombreBD(String^ nombre) {
    Ubicacion^ objUbicacion = nullptr;
    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Ubicacion WHERE nombre = @nombre";
    objSentencia->Parameters->AddWithValue("@nombre", nombre);

    try {
        SqlDataReader^ objData = objSentencia->ExecuteReader();

        while (objData->Read()) {
            int codigo = safe_cast<int>(objData["codigo"]);
            String^ nombre = safe_cast<String^>(objData["nombre"]);
            objUbicacion = gcnew Ubicacion(codigo, nombre);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return objUbicacion;
}

List<Ubicacion^>^ UbicacionController::buscarAllBD() {
    List<Ubicacion^>^ listaUbicacion = gcnew List<Ubicacion^>();

    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Ubicacion";

    try {
        SqlDataReader^ reader = objSentencia->ExecuteReader();

        while (reader->Read()) {
            int codigo = safe_cast<int>(reader["codigo"]);
            String^ nombre = safe_cast<String^>(reader["nombre"]);
            Ubicacion^ objUbicacion = gcnew Ubicacion(codigo, nombre);

            listaUbicacion->Add(objUbicacion);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return listaUbicacion;
}

List<String^>^ UbicacionController::obtenerUbicaciones() {

    List<String^>^ listaUbicaciones = gcnew List<String^>();
    UbicacionController^ objUbicacionController = gcnew UbicacionController();

    List<Ubicacion^>^ listaObjsUbicacion = objUbicacionController->buscarAllBD();

    for (int i = 0; i < listaObjsUbicacion->Count; i++) {

        String^ nombreUbicacion = listaObjsUbicacion[i]->getNombre();

        int existe = 0;
        for (int j = 0; j < listaUbicaciones->Count; j++) {

            if (listaUbicaciones[j] == nombreUbicacion) {
                existe = 1;
            }
        }
        if (existe == 0) {
            listaUbicaciones->Add(nombreUbicacion);
        }

    }

    return listaUbicaciones;
}