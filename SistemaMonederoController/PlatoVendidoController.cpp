#include <iostream>
#include "PlatoVendidoController.h"

using namespace SistemaMonederoController;

PlatoVendidoController::PlatoVendidoController() {
    this->objConexion = gcnew SqlConnection();
}

/*Son los metodos propios del manejo de BD*/
void PlatoVendidoController::abrirConexionBD() {
    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
    this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void PlatoVendidoController::cerrarConexionBD() {
    this->objConexion->Close();
}

List<PlatoVendido^>^ PlatoVendidoController::PlatoVendidoController::buscarAll() {

    List<PlatoVendido^>^ PlatosVendidos = gcnew List<PlatoVendido^>();

    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Platos_Vendidos";

    try {
        SqlDataReader^ reader = objSentencia->ExecuteReader();

        while (reader->Read()) {
            int codigo = safe_cast<int>(reader["codigo"]);
            String^ fecha = safe_cast<String^>(reader["nombre"]);
            int cantidad = safe_cast<int>(reader["cantidad"]);
            int codigoTransaccion = safe_cast<int>(reader["codigoTransaccion"]);

            PlatoVendido^ objPlatoVendido = gcnew PlatoVendido(codigo, fecha, cantidad, codigoTransaccion);

            PlatosVendidos->Add(objPlatoVendido);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return PlatosVendidos;
}

List<PlatoVendido^>^ PlatoVendidoController::buscarPlatosVendidosxTransaccion(int codigoTransaccion) {

    List<PlatoVendido^>^ listaPlatoVendidoesBuscadas = gcnew List<PlatoVendido^>();
    List<PlatoVendido^>^ listaPlatoVendidoes = buscarAll();
    abrirConexionBD();

    for (int i = 0; i < listaPlatoVendidoes->Count; i++) {

        if (listaPlatoVendidoes[i]->getCodigoTransaccion() == codigoTransaccion) {

            listaPlatoVendidoesBuscadas->Add(listaPlatoVendidoes[i]);
        }
    }
    cerrarConexionBD();
    return listaPlatoVendidoesBuscadas;
}

void PlatoVendidoController::agregarPlatoVendido(PlatoVendido^ objPlatoVendido) {

    abrirConexionBD();
    SqlCommand^ objSentencia = gcnew SqlCommand();

    objSentencia->Parameters->AddWithValue("@nombre", objPlatoVendido->getNombre());
    objSentencia->Parameters->AddWithValue("@cantidad", objPlatoVendido->getCantidad());
    objSentencia->Parameters->AddWithValue("@codigoTransaccion", objPlatoVendido->getCodigoTransaccion());

    
    objSentencia->CommandText = "INSERT INTO Platos_Vendidos (nombre, cantidad, codigoTransaccion) VALUES(@nombre, @cantidad, @codigoTransaccion)";

    objSentencia->Connection = this->objConexion;
    objSentencia->ExecuteNonQuery();
    cerrarConexionBD();
}