#pragma once
using namespace System; 
using namespace SistemaMonederoModel; 
using namespace System::Collections::Generic; 


namespace SistemaMonederoController {

	public ref class UsuarioController {

		public: 
			UsuarioController();
			List<Usuario^>^ buscarUsuarios(String^ TipodeUsuario); 


	};

}