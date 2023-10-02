#pragma once
using namespace System; 
using namespace SistemaMonederoModel; 
using namespace System::Collections::Generic; 


namespace SistemaMonederoController {

	public ref class UsuarioController {

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

	};

}