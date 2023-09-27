#pragma once
#include "frmNuevaTarjeta.h"
#include "frmEditarTarjeta.h"


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
	/// Resumen de frmMantenimientoTarjetas
	/// </summary>
	public ref class frmMantenimientoTarjetas : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoTarjetas(void)
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
		~frmMantenimientoTarjetas()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjetas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjetas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(394, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 31);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjetas::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 309);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(553, 203);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código RFID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha Alta";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha Baja";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
			this->comboBox1->Location = System::Drawing::Point(168, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(21, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(562, 162);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda de Tarjetas";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(376, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 25);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjetas::button4_Click);
			// 
			// frmMantenimientoTarjetas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 541);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMantenimientoTarjetas";
			this->Text = L"frmMantenimientoTarjetas";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoTarjetas::frmMantenimientoTarjetas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmMantenimientoTarjetas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Estado = this->comboBox1->Text;

		TarjetaController^ ObjTarjetaController = gcnew TarjetaController();

		List<Tarjeta^>^ listaTarjeta = ObjTarjetaController->buscarTarjetas(Estado);

		mostrarGrilla(listaTarjeta);
	}
		private: void mostrarGrilla(List<Tarjeta^>^ listaTarjetas) {

			this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

			for (int i = 0; i < listaTarjetas->Count; i++) {

				Tarjeta^ objTarjeta = listaTarjetas[i];

				array<String^>^ filaGrilla = gcnew array<String^>(4);

				filaGrilla[0] = Convert::ToString(objTarjeta->getcodigo());

				filaGrilla[1] = objTarjeta->getfechaAlta();

				filaGrilla[2] = objTarjeta->getfechaBaja();

				filaGrilla[3] = objTarjeta->getEstado();

				this->dataGridView1->Rows->Add(filaGrilla);

			}

		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaTarjeta^ ventanaNuevaTarjeta = gcnew frmNuevaTarjeta();
	ventanaNuevaTarjeta->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	TarjetaController^ objeto;
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoTarjetaEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	TarjetaController^ objTarjetaController = gcnew TarjetaController();
	objeto->eliminarTarjetaFisica(codigoTarjetaEliminar);
	MessageBox::Show("La tarjeta ha sido eliminado con éxito");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	TarjetaController^ objTarjetaController = gcnew TarjetaController();
	Tarjeta^ ObjTarjeta = objTarjetaController->buscarTarjetaxCodigo(codigoEditar);
	frmEditarTarjeta^ ventanaEditarTarjeta = gcnew frmEditarTarjeta(ObjTarjeta);
	ventanaEditarTarjeta->ShowDialog();
}
};
}
