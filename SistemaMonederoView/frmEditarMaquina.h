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
	/// Resumen de frmEditarMaquina
	/// </summary>
	public ref class frmEditarMaquina : public System::Windows::Forms::Form
	{
	public:
		frmEditarMaquina(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		//frmEditarMaquina(Maquina^ objMaquina)
		//{
		//	InitializeComponent();
		//	this->objMaquina = objMaquina;
		//	//
		//	//TODO: agregar código de constructor aquí
		//	//
		//}
		frmEditarMaquina(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarMaquina()
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: Maquina^ objMaquina;//este atributo lo agregamos para manejar la informacion//
	private: int codigo; 

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(287, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 32);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarMaquina::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarMaquina::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(33, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(434, 218);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Nueva Tarjeta";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Máquina de Compra", L"Máquina de Recarga" });
			this->comboBox1->Location = System::Drawing::Point(154, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(173, 22);
			this->textBox3->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Ubicacion:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tipo de Maquina:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo:";
			// 
			// frmEditarMaquina
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 371);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarMaquina";
			this->Text = L"frmEditarMaquina";
			this->Load += gcnew System::EventHandler(this, &frmEditarMaquina::frmEditarMaquina_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarMaquina_Load(System::Object^ sender, System::EventArgs^ e) {
		MaquinaController^ objMaquinaController = gcnew MaquinaController(); 
		Maquina^ ObjMaquina = objMaquinaController->buscarMaquinaxCodigoBD(this->codigo); 
			this->textBox1->Text = Convert::ToString(ObjMaquina->getCodigo()); 
			this->textBox3->Text = Convert::ToString(ObjMaquina->getCodigoUbicacion());
			this->comboBox1->Text = ObjMaquina->gettipoMaquina(); 
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int codigoMaquina = Convert::ToInt32(this->textBox1->Text);
	String^ UbicacionMaquina = this->textBox3->Text;
	String^ tipoMaquina = this->comboBox1->Text;
	MaquinaController^ objMaquinaController = gcnew MaquinaController();
	objMaquinaController->ActualizarMaquinaBD(codigoMaquina, UbicacionMaquina, tipoMaquina); 
	MessageBox::Show("La Maquina se ha actualizado con éxito");
	this->Close();
}
};
}
