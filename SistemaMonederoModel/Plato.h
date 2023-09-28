#pragma once

using namespace System; //Esto es para la clase String

namespace SistemaMonederoController {

	public ref class Plato {

	private:
		int codigo;
		String^ Precio;
		String^ Origen;
		String^ Nombre;

		//Siempre hay 2 constructores, uno vacio y otro con todo ojo O_O
	public:
		Plato();
		Plato(int codigo, String^ Precio, String^ Origen, String^ Nombre);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getPrecio();
		void setPrecio(String^ Precio);

		String^ getOrigen();
		void setOrigen(String^ Origen);

		String^ Plato::getNombre();
		void setNombre(String^ Nombre);
	};
}