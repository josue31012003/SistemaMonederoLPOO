#include <iostream>
#include "TransaccionController.h"

using namespace System::Data;
using namespace System::Data::SqlTypes;
using namespace SistemaMonederoController;

TransaccionController::TransaccionController() {
	this->objConexion = gcnew SqlConnection();
}

/*Son los metodos propios del manejo de BD*/
void TransaccionController::abrirConexionBD() {
    /*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
    this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20205788;User Id=a20205788;Password=gbVVvdoY";
    this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void TransaccionController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Transaccion^>^ TransaccionController::TransaccionController::buscarAll() {

    List<Transaccion^>^ historialTransacciones = gcnew List<Transaccion^>();

    abrirConexionBD();

    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "SELECT * FROM Transacciones";

    try {
        SqlDataReader^ reader = objSentencia->ExecuteReader();

        while (reader->Read()) {
            int codigo = safe_cast<int>(reader["codigo"]);
            String^ fecha = safe_cast<String^>(reader["fecha"]);
            String^ tipo = safe_cast<String^>(reader["tipo"]);
            double monto = safe_cast<double>(reader["monto"]);
            int codigoUsuario = safe_cast<int>(reader["codigoUsuario"]);
            int codigoUbicacion = safe_cast<int>(reader["codigoUbicacion"]);
            
            Transaccion^ objTransaccion = gcnew Transaccion(codigo, fecha, tipo, monto, codigoUsuario, codigoUbicacion);

            historialTransacciones->Add(objTransaccion);
        }
    }
    catch (Exception^ ex) {
        // Manejo de excepciones (puedes imprimir el error, lanzar una excepción personalizada, etc.)
    }
    finally {
        cerrarConexionBD();
    }

    return historialTransacciones;
}

List<Transaccion^>^ TransaccionController::buscarTransaccionesxUsuario(int codigoUsuario) {

    List<Transaccion^>^ listaTransaccionesBuscadas = gcnew List<Transaccion^>();
    List<Transaccion^>^ listaTransacciones = buscarAll();
    abrirConexionBD();

    for (int i = 0; i < listaTransacciones->Count; i++) {

        if (listaTransacciones[i]->getCodigoUsuario() == codigoUsuario) {

            listaTransaccionesBuscadas->Add(listaTransacciones[i]);
        }
    }
    cerrarConexionBD();
    return listaTransaccionesBuscadas;
}

int TransaccionController::agregarTransaccion(Transaccion^ objTransaccion) {

    abrirConexionBD();
    SqlCommand^ objSentencia = gcnew SqlCommand();

    objSentencia->Parameters->Add("@codigo", System::Data::SqlDbType::Int)->Direction = ParameterDirection::Output;
    objSentencia->Parameters->AddWithValue("@fecha", objTransaccion->getFecha());
    objSentencia->Parameters->AddWithValue("@monto", objTransaccion->getMonto());
    objSentencia->Parameters->AddWithValue("@codigoUsuario", objTransaccion->getCodigoUsuario());
    objSentencia->Parameters->AddWithValue("@codigoUbicacion", objTransaccion->getCodigoUbicacion());
    objSentencia->Parameters->AddWithValue("@tipo", objTransaccion->getTipo());
    
    objSentencia->CommandText = "INSERT INTO Transacciones(fecha, monto, codigoUsuario, codigoUbicacion, tipo) VALUES(@fecha, @monto, @codigoUsuario, @codigoUbicacion, @tipo); SET @codigo = SCOPE_IDENTITY(); ";
    
    //int codigo = Convert::ToInt32(cmd->ExecuteScalar());
    /*objSentencia->CommandText = "INSERT INTO Transacciones (fecha, monto, codigoUsuario, codigoUbicacion, tipo) VALUES(@fecha, @monto, @codigoUsuario, @codigoUbicacion, @tipo) SELECT SCOPE_IDENTITY() AS @codigo";*/
    objSentencia->Connection = this->objConexion;
    objSentencia->ExecuteNonQuery();

    int codigo = safe_cast<int>(objSentencia->Parameters["@codigo"]->Value);
    cerrarConexionBD();
    return codigo;
}