#pragma once
#include "frmMantenimientoNuevoUsuario.h"
#include "frmEditarUsuario.h"


namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoController; 
	using namespace System::Collections::Generic; 
	using namespace SistemaMonederoModel;
	using namespace SistemaMonederoController; 
	/// <summary>
	/// Resumen de frmMantenimientoUsuarios
	/// </summary>
	public ref class frmMantenimientoUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantenimientoUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;








	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(211, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(550, 117);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de búsqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(390, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Comensal", L"Administrador", L"Todos" });
			this->comboBox1->Location = System::Drawing::Point(185, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(149, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de usuario : ";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(621, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(452, 450);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(285, 450);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column8,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(18, 179);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1008, 242);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantenimientoUsuarios::dataGridView1_CellContentClick);
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Código";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 80;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha Nacimiento";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"RFID";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Tipo Usuario";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// frmMantenimientoUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 517);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantenimientoUsuarios";
			this->Text = L"frmMantenimientoUsuarios";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::frmMantenimientoUsuarios_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ TipoUsuario = this->comboBox1->Text; //De esta manera se obtiene el texto de la casilla
		UsuarioController^ ObjUsuarioController = gcnew UsuarioController();
		if (TipoUsuario == "Todos") {//Condicional necesario para agregar la opción "TODOS"
			List<Usuario^>^ ListaUsuarios = ObjUsuarioController->buscarAll();
			mostrarGrilla(ListaUsuarios); 
		}
		else {
			List<Usuario^>^ ListaUsuarios = ObjUsuarioController->buscarUsuarios(TipoUsuario);
			mostrarGrilla(ListaUsuarios); 
		}
		  
		
	}

		   private: void mostrarGrilla(List<Usuario^>^ ListaUsuarios) {
			   this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
			   for (int i = 0; i < ListaUsuarios->Count; i++) {
				   Usuario^ objUsuario = ListaUsuarios[i];
				   array<String^>^ filaGrilla = gcnew array<String^>(8);
				   filaGrilla[0] = Convert::ToString(objUsuario->getCodigo());
				   filaGrilla[1] = objUsuario->getNombre();
				   filaGrilla[2] = objUsuario->getApPaterno(); 
				   filaGrilla[3] = objUsuario->getApMaterno(); 
				   filaGrilla[4] = objUsuario->getFechaNacimiento(); 
				   filaGrilla[5] = objUsuario->getDNI();
				   filaGrilla[6] = objUsuario->getIdentificacionRFID();
				   filaGrilla[7] = objUsuario->getTipoUsuario(); 
				   this->dataGridView1->Rows->Add(filaGrilla);

			   }

		   }





private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	//Para llamar la ventana "AGREGAR":

		frmMantenimientoNuevoUsuario^ ventanaNuevoUsuario = gcnew frmMantenimientoNuevoUsuario();
		//ventanaNuevoUsuario -> MdiParent = this;
		ventanaNuevoUsuario -> ShowDialog();

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//CÓDIGO PARA ELIMINAR
	UsuarioController^ objeto; 
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoUsuarioEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	objeto -> eliminarUsuarioFisico (codigoUsuarioEliminar);
	MessageBox::Show("El usuario seleccionado ha sido eliminado con éxito");

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		UsuarioController^ ObjUsuarioController = gcnew UsuarioController(); 
		Usuario^ ObjUsuario = ObjUsuarioController->buscarUsuarioxCodigo(codigoEditar);
		frmEditarUsuario^ ventanaEditarUsuario = gcnew frmEditarUsuario(ObjUsuario);
		ventanaEditarUsuario->ShowDialog(); 

	}
private: System::Void frmMantenimientoUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {

	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	List<String^>^ listaOrigenes = objUsuarioController->obtenerTiposdeUsuario();

	this->comboBox1->Items->Clear();

	for (int i = 0; i < listaOrigenes->Count; i++) {

		this->comboBox1->Items->Add(listaOrigenes[i]);
	}
	this->comboBox1->Items->Add("Todos");
}
};
}
