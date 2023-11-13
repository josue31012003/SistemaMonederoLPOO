#pragma once

namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::IO;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoController; 
	using namespace SistemaMonederoModel; 

	/// <summary>
	/// Resumen de frmMantenimientoNuevoUsuario
	/// </summary>
	public ref class frmMantenimientoNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoNuevoUsuario(void)
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
		~frmMantenimientoNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido Paterno";
			this->label2->Click += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(58, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(58, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Nombre";
			this->label5->Click += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(58, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tipo de usuario";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(249, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(249, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(249, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(249, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(175, 22);
			this->textBox4->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 24);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Añadir ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(58, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Fecha de nacimiento";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(58, 271);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"DNI";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(249, 224);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(175, 22);
			this->dateTimePicker1->TabIndex = 21;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::dateTimePicker1_ValueChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Administrador", L"Comensal" });
			this->comboBox1->Location = System::Drawing::Point(249, 319);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 24);
			this->comboBox1->TabIndex = 22;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(308, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 24);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(249, 271);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 22);
			this->textBox5->TabIndex = 25;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::textBox5_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(58, 367);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"RFID";
			this->label10->Click += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::label10_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(249, 367);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(175, 22);
			this->textBox6->TabIndex = 26;
			// 
			// frmMantenimientoNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 469);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmMantenimientoNuevoUsuario";
			this->Text = L"frmMantenimientoNuevoUsuario";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoNuevoUsuario::frmMantenimientoNuevoUsuario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Nombre;
	String^ ApPaterno;
	String^ ApMaterno;
	String^ FechaNacimiento;
	String^ DNI;
	String^ TipoUsuario;
	String^ IdentificacionRFID;
	
	if (TipoUsuario == "Comensal") {
		String^ IdentificacionRFID = this->textBox6->Text;
	}
	else {
		String^ IdentificacionRFID = nullptr;
	}
	if (this->comboBox1->Text == "" || this->textBox5->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == ""){
		MessageBox::Show("Debe rellenar los campos obligatorios para poder agregar un usuario.");
	}
	else {
		String^ Nombre = this->textBox2->Text;
		String^ ApPaterno = this->textBox3->Text;
		String^ ApMaterno = this->textBox4->Text;
		String^ FechaNacimiento = this->dateTimePicker1->Text;
		String^ DNI = this->textBox5->Text;
		String^ TipoUsuario = this->comboBox1->Text;
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioController->registrarUsuarioBD(Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario);
		MessageBox::Show("El usuario se ha agregado con éxito");
		this->Close();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); 
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmMantenimientoNuevoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
