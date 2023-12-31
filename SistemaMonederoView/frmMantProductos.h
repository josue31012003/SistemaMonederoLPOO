#pragma once
#include "frmMantNuevoPlato.h"
#include "frmEditPlato.h"

namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SistemaMonederoController;
	using namespace SistemaMonederoModel;
	using namespace SistemaMonederoController;

	/// <summary>
	/// Summary for frmMantProductos
	/// </summary>
	public ref class frmMantProductos : public System::Windows::Forms::Form
	{
	public:
		frmMantProductos(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantProductos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



















	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column4,
					this->Column1, this->Column2, this->Column6, this->Column5, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(125, 231);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(649, 270);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantProductos::dataGridView1_CellContentClick);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C�digo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Precio";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 75;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Ubicacion";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 97;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Platos disponibles";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 135;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Origen";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 76;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ubicacion:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantProductos::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(125, 30);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(467, 176);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de b�squeda";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(355, 84);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantProductos::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(189, 82);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(517, 526);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantProductos::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 526);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Nuevo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantProductos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(396, 526);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantProductos::button4_Click);
			// 
			// frmMantProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 614);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantProductos";
			this->Text = L"frmMantProductos";
			this->Load += gcnew System::EventHandler(this, &frmMantProductos::frmMantProductos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   /*BUSCAR*/
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Ubicacion = this->comboBox2->Text;
	PlatoController^ ObjPlatoController = gcnew PlatoController();
	
	List<Plato^>^ listaPlatos = ObjPlatoController->buscarPlatosxUbicacionBD(Ubicacion);
	mostrarGrilla(listaPlatos);
	
}

		/*MOSTRAR GRILLA*/
private: void mostrarGrilla(List<Plato^>^ listaPlatos) {

	UbicacionController^ objUbicacionController = gcnew UbicacionController();

	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaPlatos->Count; i++) {

		Plato^ objPlato = listaPlatos[i];

		array<String^>^ filaGrilla = gcnew array<String^>(6);
		filaGrilla[0] = Convert::ToString(objPlato->getCodigo());
		filaGrilla[1] = objPlato->getNombre();
		filaGrilla[2] = Convert::ToString(objPlato->getPrecio());
		filaGrilla[3] = objUbicacionController->buscarUbicacionxCodigoBD(objPlato->getCodUbicacion())->getNombre();
		filaGrilla[4] = Convert::ToString(objPlato->getCantPlatosDisponible());
		filaGrilla[5] = objPlato->getOrigen();
		this->dataGridView1->Rows->Add(filaGrilla);
	}

}

	   /*MOSTRAR VENTANA DE NUEVO PLATO*/
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantNuevoPlato^ ventanaNuevoPlato = gcnew frmMantNuevoPlato();
	ventanaNuevoPlato->ShowDialog();
}

	   /*ELIMINAR*/
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PlatoController^ ObjPlatoController = gcnew PlatoController();

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	ObjPlatoController->eliminarPlatoBD(codigoEliminar);

	MessageBox::Show("El plato se ha sido eliminado con �xito");

	List<Plato^>^ listaPlatos = ObjPlatoController->buscarAllBD();
	mostrarGrilla(listaPlatos);
}

	   /*EDITAR*/
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	PlatoController^ ObjPlatoController = gcnew PlatoController();
	Plato^ objPlato = ObjPlatoController->buscarPlatoxCodigoBD(codigoEditar);

	frmEditPlato^ ventanaEditPlato = gcnew frmEditPlato(objPlato);
	ventanaEditPlato->ShowDialog();

	List<Plato^>^ listaPlatos = ObjPlatoController->buscarAllBD();
	mostrarGrilla(listaPlatos);
}

	   /*PERSISTENCIA DE ITEMS DE CRITERIO DE BUSQUEDA*/
private: System::Void frmMantProductos_Load(System::Object^ sender, System::EventArgs^ e) {

	UbicacionController^ objUbicacionController = gcnew UbicacionController();
	List<String^>^ listaUbicaciones = objUbicacionController->obtenerUbicaciones();

	PlatoController^ ObjPlatoController = gcnew PlatoController();
	List<Plato^>^ listaPlatos = ObjPlatoController->buscarAllBD();
	mostrarGrilla(listaPlatos);

	this->comboBox2->Items->Clear();

	for (int i = 0; i < listaUbicaciones->Count; i++) {
		this->comboBox2->Items->Add(listaUbicaciones[i]);
	}
}
};
}

