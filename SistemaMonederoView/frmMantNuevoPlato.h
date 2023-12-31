#pragma once

namespace SistemaMonederoView {

	/*CERRAR ACA*/
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoModel;
	using namespace SistemaMonederoController;

	/// <summary>
	/// Summary for frmMantNuevoPlato
	/// </summary>
	public ref class frmMantNuevoPlato : public System::Windows::Forms::Form
	{
	public:
		frmMantNuevoPlato(void)
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
		~frmMantNuevoPlato()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		/*CERRAR ACA*/
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(96, 25);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(380, 377);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del plato";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(182, 68);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 24);
			this->comboBox2->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Comedor Central", L"Comedor Artes", L"Comedor Letras",
					L"Tinkuy"
			});
			this->comboBox1->Location = System::Drawing::Point(204, 296);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(59, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Ubicaci�n:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(254, 239);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(71, 22);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Cantidad de platos disponible:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(182, 182);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(143, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(182, 126);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Origen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(181, 428);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantNuevoPlato::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 428);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantNuevoPlato::button2_Click);
			// 
			// frmMantNuevoPlato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 519);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantNuevoPlato";
			this->Text = L"frmMantNuevoPlato";
			this->Load += gcnew System::EventHandler(this, &frmMantNuevoPlato::frmMantNuevoPlato_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		/*PERSISTENCIA DE DATOS, NUEVO, AGREGAR*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Validar que los campos de texto no est�n vac�os
		if (comboBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "") {
			MessageBox::Show("Por favor, complete todos los campos antes de guardar los datos.");
		}
		else {

			UbicacionController^ objUbicacionController = gcnew UbicacionController();

			// Convertir y obtener los valores de los campos de texto
			String^ Nombre = comboBox2->Text;
			String^ Origen = textBox3->Text;
			double Precio = Convert::ToDouble(textBox4->Text);
			double cantPlatosDisponible = Convert::ToDouble(textBox5->Text);
			int codigoUbicacion = objUbicacionController->buscarUbicacionxNombreBD(comboBox1->Text)->getCodigo();

		if (!Double::TryParse(textBox4->Text, Precio)) {
			MessageBox::Show("Ingrese un n�mero v�lido para el precio.");
		}
		else if (!Double::TryParse(textBox5->Text, cantPlatosDisponible)) {
			MessageBox::Show("Ingrese un n�mero v�lido para la cantidad de platos.");
		}
		else {
			// Crear el objeto Plato
			Plato^ objPlato = gcnew Plato();

			// Registrar el plato en la base de datos
			PlatoController^ objPlatoController = gcnew PlatoController();
			objPlatoController->registrarPlatoBD(Nombre, Origen, Precio, cantPlatosDisponible, codigoUbicacion);

			nombrePlatoController^ objNombrePlatoController = gcnew nombrePlatoController();
			if (objNombrePlatoController->nombreExiste(this->comboBox2->Text)) {
			}
			else{
				objNombrePlatoController->agregarNombre(this->comboBox2->Text);
			}
			
			MessageBox::Show("El plato ha sido agregado con �xito");
			this->Close();
		}
	}
}

	   /*CANCELAR*/
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void frmMantNuevoPlato_Load(System::Object^ sender, System::EventArgs^ e) {
	ActualizarCombo();
}

void ActualizarCombo() {

	nombrePlatoController^ objNombrePlatoController = gcnew nombrePlatoController();
	List<nombrePlato^>^ nombresPlatos = objNombrePlatoController->buscarAllBD();

	comboBox2->Items->Clear();
	for (int i = 0; i < nombresPlatos->Count; i++) {
		nombrePlato^ nombrePlato = nombresPlatos[i];
		this->comboBox2->Items->Add(nombresPlatos[i]->nombre);
	}
}

};
}
