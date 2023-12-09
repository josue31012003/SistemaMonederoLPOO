#include <iostream>
#include "nombrePlatoController.h"

using namespace SistemaMonederoController;

nombrePlatoController::nombrePlatoController() {
	this->objConexion = gcnew SqlConnection();
}

void nombrePlatoController::abrirConexionBD() {
    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
    this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void nombrePlatoController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<nombrePlato^>^ nombrePlatoController::buscarAllBD() {
    List<nombrePlato^>^ listanombrePlatos = gcnew List<nombrePlato^>();

    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Nombre_Plato";

    try {
        SqlDataReader^ reader = objSentencia->ExecuteReader();

        while (reader->Read()) {
            int codigo = safe_cast<int>(reader["codigo"]);
            String^ nombre = safe_cast<String^>(reader["nombre"]);
            nombrePlato^ objNombrePlato = gcnew nombrePlato(codigo, nombre);

            listanombrePlatos->Add(objNombrePlato);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return listanombrePlatos;
}

bool nombrePlatoController::nombreExiste(String^ nombre) {
	List<nombrePlato^>^ nombresPlatos = buscarAllBD(); // Obtén la lista de categorías

	// Recorre la lista de categorías para verificar si ya existe una con el mismo nombre
	for each (nombrePlato ^ nombrePlato in nombresPlatos) {
		if (nombrePlato->nombre == nombre) {
			return true; // La categoría ya existe
		}
	}
	return false; // La categoría no existe

}

void nombrePlatoController::agregarNombre(String^ nombre) {
    abrirConexionBD();
    SqlCommand^ objSentencia = gcnew SqlCommand();

    objSentencia->CommandText = "INSERT INTO Nombre_Plato (nombre) VALUES('" + nombre + "')";
    objSentencia->Connection = this->objConexion;
    objSentencia->ExecuteNonQuery();
    cerrarConexionBD();
}