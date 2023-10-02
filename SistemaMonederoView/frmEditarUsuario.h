#pragma once

namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoController; 
	using namespace SistemaMonederoModel; 

	/// <summary>
	/// Resumen de frmEditarUsuario
	/// </summary>
	public ref class frmEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarUsuario(Usuario^ ObjUsuario)
		{
			InitializeComponent();
			this->ObjUsuario = ObjUsuario; 
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Usuario^ ObjUsuario; //Este atributo lo agregamos porque necesitamos manejar la información del objeto - transferir info entre ventanas- 

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(264, 300);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 22);
			this->textBox5->TabIndex = 43;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(73, 301);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 21);
			this->label10->TabIndex = 42;
			this->label10->Text = L"RFID";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(323, 411);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 24);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Administrador", L"Comensal" });
			this->comboBox1->Location = System::Drawing::Point(264, 345);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 24);
			this->comboBox1->TabIndex = 40;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(264, 210);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(175, 22);
			this->dateTimePicker1->TabIndex = 39;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(264, 259);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(175, 22);
			this->textBox8->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(73, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 21);
			this->label9->TabIndex = 37;
			this->label9->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(73, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 21);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Fecha de nacimiento";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 24);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(264, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(175, 22);
			this->textBox4->TabIndex = 34;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(264, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(175, 22);
			this->textBox3->TabIndex = 33;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(264, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 22);
			this->textBox2->TabIndex = 32;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(264, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 22);
			this->textBox1->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(73, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 21);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Tipo de usuario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(73, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 21);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(73, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 21);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Apellido Materno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 21);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Apellido Paterno";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 21);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Código";
			// 
			// frmEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 472);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox8);
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
			this->Name = L"frmEditarUsuario";
			this->Text = L"frmEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &frmEditarUsuario::frmEditarUsuario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {

		this->textBox1-> Text = Convert::ToString(this->ObjUsuario->getCodigo()); 
		this->textBox2-> Text= this->ObjUsuario->getNombre(); 
		this->textBox4->Text = this->ObjUsuario->getApPaterno();
		this->textBox3->Text = this->ObjUsuario->getApMaterno();
		this->dateTimePicker1->Text = this->ObjUsuario->getFechaNacimiento(); 
		this->textBox8->Text = this->ObjUsuario->getDNI();
		this->textBox5->Text = this->ObjUsuario->getIdentificacionRFID();
		this->comboBox1->Text = this->ObjUsuario->getTipoUsuario();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int codigoUsuario = Convert::ToInt32(this->textBox1->Text); 
	String^ Nombre = this->textBox2->Text; 
	String^ ApPaterno = this->textBox4->Text; 
	String^ ApMaterno = this->textBox3->Text; 
	String^ FechaNacimiento = this->dateTimePicker1->Text;
	String^ DNI = this->textBox8->Text; 
	String^ IdentificacionRFID = this->textBox5->Text; 
	String^ TipoUsuario = this->comboBox1->Text; 
	//	String^ Usuario = this->textBox6->Text; 
	//	String^ Password = this->textBox7->Text;

	Usuario^ ObjUsuario = gcnew Usuario(codigoUsuario, Nombre, ApPaterno, ApMaterno, FechaNacimiento, DNI, IdentificacionRFID, TipoUsuario); 
	UsuarioController^ ObjUsuarioController = gcnew UsuarioController();

	ObjUsuarioController->actualizarUsuario(ObjUsuario);
	MessageBox::Show("El proyecto se ha actualizado con éxito"); 
	this->Close(); 
}
};
}
