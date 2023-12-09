#pragma once
using namespace System; 
using namespace SistemaMonederoModel; 
using namespace System::Collections::Generic; 


namespace SistemaMonederoController {

	using namespace System::Data::SqlClient; 
	using namespace System; 

	public ref class UsuarioController {

		private: 
			SqlConnection^ objConexion;  //Se agrega para trabajar con Base de Datos 

		public: 
			UsuarioController();
			
			//Métodos de base de datos 

			void abrirConexionBD(); 
			void cerrarConexionBD(); 
			List<Usuario^>^ buscarUsuarioxtipoBD(String^ TipodeUsuario);
			void registrarUsuarioBD(String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario);
			void eliminarUsuarioBD(int codigo); 
			Usuario^ buscarUsuarioxCodigoBD(int codigo);
			void ActualizarUsuarioBD(int codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario);
			List<Usuario^>^ buscarAllBD();
			Usuario^ buscarUsuarioxNombre(String^ nombre);
			Usuario^ buscarUsuarioxRFIDBD(String^ codigoRFID);
	};	

}