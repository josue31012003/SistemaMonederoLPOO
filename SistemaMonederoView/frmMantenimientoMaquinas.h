#pragma once
#include "frmNuevaMaquina.h"
#include "frmEditarMaquina.h"

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

	/// <summary>
	/// Resumen de frmMantenimientoMaquinas
	/// </summary>
	public ref class frmMantenimientoMaquinas : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoMaquinas(void)
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
		~frmMantenimientoMaquinas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(29, 26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(487, 162);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda de Maquinas";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(356, 70);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 25);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(163, 70);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label4->Location = System::Drawing::Point(24, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tipo de Maquina";
			this->label4->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::label4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(55, 270);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(428, 203);
			this->dataGridView1->TabIndex = 18;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código de Maquina";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ubicacion de Maquina";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo de Maquina";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(380, 202);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 31);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 203);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 31);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 202);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 31);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::button1_Click);
			// 
			// frmMantenimientoMaquinas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 546);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantenimientoMaquinas";
			this->Text = L"frmMantenimientoMaquinas";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoMaquinas::frmMantenimientoMaquinas_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tipoMaquina = this->comboBox1->Text;
	MaquinaController^ ObjMaquinaController = gcnew MaquinaController();
	List<Maquina^>^ listaMaquina = ObjMaquinaController->buscarMaquinaxtipoBD(tipoMaquina);
	mostrarGrilla(listaMaquina); 


//	List<Maquina^>^ listaMaquina = ObjMaquinaController->buscarMaquinas(tipoMaquina);
//	mostrarGrilla(listaMaquina);
	//if (tipoMaquina == "Todos") {//Condicional necesario para agregar la opción "TODOS"
	//	List<Maquina^>^ listaMaquina = ObjMaquinaController->buscarAll();
	//	mostrarGrilla(listaMaquina);
	//}
	//else {
	//	List<Maquina^>^ listaMaquina = ObjMaquinaController->buscarMaquinas(tipoMaquina); 
	//	mostrarGrilla(listaMaquina); 
	//}

}
		private: void mostrarGrilla(List<Maquina^>^ listaMaquinas) {
			this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
			for (int i = 0; i < listaMaquinas->Count; i++) {
				Maquina^ objMaquina = listaMaquinas[i];
				array<String^>^ filaGrilla = gcnew array<String^>(4);
				filaGrilla[0] = Convert::ToString(objMaquina->getCodigo());

				UbicacionController^ objUbicacionController = gcnew UbicacionController();

				filaGrilla[1] = Convert::ToString(objUbicacionController->buscarUbicacionxCodigoBD(objMaquina->getCodigoUbicacion())->getNombre());
				filaGrilla[2] = objMaquina->gettipoMaquina();
				this->dataGridView1->Rows->Add(filaGrilla);

			}
		}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
 	MaquinaController^ objeto;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoMaquinaEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	MaquinaController^ objMaquinaController = gcnew MaquinaController();
//	objeto->eliminarMaquinaFisico(codigoMaquinaEliminar);
	objMaquinaController->eliminarMaquinaBD(codigoMaquinaEliminar);
	MessageBox::Show("La Maquina ha sido eliminado con éxito");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaMaquina^ ventanaNuevaMaquina = gcnew frmNuevaMaquina();
	ventanaNuevaMaquina->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	frmEditarMaquina^ ventanaEditarMaquina = gcnew frmEditarMaquina(codigoEditar);
	ventanaEditarMaquina->ShowDialog();
}
private: System::Void frmMantenimientoMaquinas_Load(System::Object^ sender, System::EventArgs^ e) {
	
	MaquinaController^ objMaquinaController = gcnew MaquinaController();
	List<String^>^ listaTipos = objMaquinaController->ObtenerTiposBD();
	List<Maquina^>^ listaMaquina = objMaquinaController->buscarAllBD();
	mostrarGrilla(listaMaquina);

	this->comboBox1->Items->Clear();

	for (int i = 0; i < listaTipos->Count; i++) {
		this->comboBox1->Items->Add(listaTipos[i]);
	}
	this->comboBox1->Items->Add("Todos");
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
