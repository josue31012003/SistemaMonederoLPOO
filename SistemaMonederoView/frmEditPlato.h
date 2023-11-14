#pragma once

namespace SistemaMonederoView {

	/*AGREGAR NAMESPACES DE MODEL Y CONTROLLER*/
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoModel;
	using namespace SistemaMonederoController;

	/// <summary>
	/// Summary for frmEditPlato
	/// </summary>
	public ref class frmEditPlato : public System::Windows::Forms::Form
	{
	public:
		frmEditPlato(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		/*CONSTRUCTOR DE FORM CON OBJETO Y LOS ATRIBUTOS DE ESTE*/
		frmEditPlato(Plato^ objPlato)
		{
			InitializeComponent();
			
			this->objPlato = objPlato;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmEditPlato()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	/*AGREGAR OBJETO DEL CONSTRUCTOR QUE RECIBE PARAMETRO*/
	private: Plato^ objPlato;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(223, 387);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditPlato::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 387);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditPlato::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(46, 38);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(297, 316);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del plato";
			// 
			// textBox4
			this->textBox4->Location = System::Drawing::Point(126, 225);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			this->textBox3->Location = System::Drawing::Point(126, 172);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			this->textBox2->Location = System::Drawing::Point(126, 119);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(126, 67);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmEditPlato::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 228);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 174);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Origen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 123);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 64);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(176, 272);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(58, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 275);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cantidad de platos disponible";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Ubicación:";
			this->label6->Click += gcnew System::EventHandler(this, &frmEditPlato::label6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(168, 323);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 24);
			this->comboBox1->TabIndex = 10;
			// 
			// frmEditPlato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 425);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmEditPlato";
			this->Text = L"frmEditPlato";
			this->Load += gcnew System::EventHandler(this, &frmEditPlato::frmEditPlato_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoPlato;
		double precio;
		if (!Int32::TryParse(textBox1->Text, codigoPlato)) {
			MessageBox::Show("Ingrese un número válido para el código del plato.");
		}
		else if (!Double::TryParse(textBox4->Text, precio)) {
			MessageBox::Show("Ingrese un número válido para el precio.");
		}
		else if (textBox2->Text == "" || textBox3->Text == "") {
			MessageBox::Show("Por favor, complete todos los campos antes de guardar los datos.");
		}
		else {
			// Convertir y obtener los valores de los campos de texto
			String^ Nombre = textBox2->Text;
			String^ Origen = textBox3->Text;
			double Precio = Convert::ToDouble(textBox4->Text);
			double cantPlatosDisponible = Convert::ToDouble(textBox5->Text);

			// Crear el objeto Plato
			Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio, 0, cantPlatosDisponible, 0); // Se establece CantPlatosVendidos a 0, puedes ajustar según tus necesidades

			// Actualizar los valores en la base de datos
			PlatoController^ objPlatoController = gcnew PlatoController();
			objPlatoController->ActualizarPlatoBD(codigoPlato, Nombre, Origen, precio);

			MessageBox::Show("El plato ha sido modificado con éxito");
			this->Close();
		}
	}



	   /*CARGAR VALORES DE ATRIBUTOS DEL OBJETO SELECCIONADO EN VENTANA*/
private: System::Void frmEditPlato_Load(System::Object^ sender, System::EventArgs^ e) {

	this->textBox1->Text = Convert::ToString(this->objPlato->getCodigo());
	this->textBox2->Text = this->objPlato->getNombre();
	this->textBox3->Text = this->objPlato->getOrigen();
	this->textBox4->Text = Convert::ToString(this->objPlato->getPrecio());
	this->textBox5->Text = Convert::ToString(this->objPlato->getCantPlatosDisponible());

}

	   /*CANCELAR*/
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
