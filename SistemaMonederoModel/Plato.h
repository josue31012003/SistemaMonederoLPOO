#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaMonederoModel {

    public ref class Plato {

    private:
        int codigo;
        String^ Nombre;
        String^ Origen;
        double Precio;
        double cantPlatosVendidos;
        double cantPlatosDisponible;
        int codigoUbicacion;

        // Variable para contar los platos seleccionados
        Dictionary<String^, int>^ conteoPlatos = gcnew Dictionary<String^, int>();

		//Siempre hay 2 constructores, uno vacio y otro con todo ojo O_O
    public:
        Plato();
        Plato(int codigo, String^ Nombre, String^ Origen, double Precio, double cantPlatosVendidos, double cantPlatosDisponible, int codigoUbicacion);

        int getCodigo();
        void setCodigo(int codigo);

        String^ Plato::getNombre();
        void setNombre(String^ Nombre);

        String^ getOrigen();
        void setOrigen(String^ Origen);

        double getPrecio();
        void setPrecio(double Precio);

		double getCantPlatosVendidos();
		void setCantPlatosVendidos(double cantPlatosVendidos);
		//DBNull::Value, equivalente de nullptr en SQL
		//String::Empty
		int getCodUbicacion();
		void setCodUbicacion(int codigoUbicacion);

        double getCantPlatosDisponible();
        void setCantPlatosDisponible(double cantPlatosDisponible);
    };
}
