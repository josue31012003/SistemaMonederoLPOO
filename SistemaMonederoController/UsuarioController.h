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
			List<Usuario^>^ buscarUsuarios(String^ TipodeUsuario);
			/*Estos métodos ayudan mucho siempre */
			List < Usuario^>^ buscarAll(); 
			void escribirArchivo(List<Usuario^>^ ListaUsuarios ); 
			void eliminarUsuarioFisico(int codigo); 
			void agregarUsuario(Usuario^ ObjUsuario);  
			Usuario^ buscarUsuarioxCodigo(int Codigo); 
			void actualizarUsuario(Usuario^ ObjUsuario);
			List<String^>^ obtenerTiposdeUsuario();
			Usuario^ buscarUsuarioxNombre(String^ nombre);


			//Métodos de base de datos 

			void abrirConexionBD(); 
			void cerrarConexionBD(); 
			List<Usuario^>^ buscarUsuarioxtipoBD(String^ TipodeUsuario);
			void registrarUsuarioBD(String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario);
			void eliminarUsuarioBD(int codigo); 
			Usuario^ buscarUsuarioxCodigoBD(int codigo);
			//Usuario^ buscarUsuarioxNombreBD(String^ nombre);
			void ActualizarUsuarioBD(int codigo, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ FechaNacimiento, String^ DNI, String^ IdentificacionRFID, String^ TipoUsuario);
			List<Usuario^>^ buscarAllBD();
	};	

}