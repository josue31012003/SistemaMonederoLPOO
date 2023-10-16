#pragma once

using namespace System; //Esto es para la clase String

namespace SistemaMonederoModel {

	public ref class Plato {

	private:
		int codigo;
		String^ Nombre;
		String^ Origen;
		double Precio;

		//Siempre hay 2 constructores, uno vacio y otro con todo ojo O_O
	public:
		Plato();
		Plato(int codigo, String^ Nombre, String^ Origen, double Precio);

		int getCodigo();
		void setCodigo(int codigo);

		String^ Plato::getNombre();
		void setNombre(String^ Nombre);

		String^ getOrigen();
		void setOrigen(String^ Origen);

		double getPrecio();
		void setPrecio(double Precio);

	};
}