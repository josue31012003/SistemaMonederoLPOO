#pragma once
#include "Tarjeta.h"

using namespace System;

namespace SistemaMonederoModel {
	public ref class Usuario {

	protected: //Esto es por la herencia
		int Codigo;
		String^ Nombre;
		String^ ApPaterno;
		String^ ApMaterno;
		String^ FechaNacimiento;
		String^ DNI;
		String^ IdentificacionRFID;
		String^ TipoUsuario;

	public:
		Usuario();
		Usuario(int Codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario);
		
		int getCodigo(); 
		void setCodigo(int Codigo); 

		String^ getNombre(); 
		void setNombre(String^ Nombre);	

		String^ getApPaterno();
		void setApPaterno(String^ ApPaterno);

		String^ getApMaterno();
		void setApMaterno(String^ ApMaterno);

		String^ getFechaNacimiento();
		void setFechaNacimiento(String^ FechaNacimiento);

		String^ getDNI();
		void setDNI(String^ DNI);

		String^ getIdentificacionRFID();
		void setIdentificacionRFID(String^ IdentificacionRFID);

		String^ getTipoUsuario();
		void setTipoUsuario(String^ TipoUsuario);
	};
}