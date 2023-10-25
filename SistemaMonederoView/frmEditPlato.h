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
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 476);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditPlato::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditPlato::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(62, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(380, 348);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del plato";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(168, 277);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 212);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(168, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmEditPlato::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Origen:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// frmEditPlato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 523);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditPlato";
			this->Text = L"frmEditPlato";
			this->Load += gcnew System::EventHandler(this, &frmEditPlato::frmEditPlato_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		/*GRABAR O GUARDAR MODIFICACIONES HECHAS DESPUES DEL LOAD*/
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	/*PERSISTENCIA DE DATOS MODIFICADOS*/
	int codigoPlato = Convert::ToInt32(this->textBox1->Text);
	String^ Nombre = this->textBox2->Text;
	String^ Origen = this->textBox3->Text;
	double Precio = Convert::ToDouble(this->textBox4->Text);
	double cantPlatosVendidos = 0;

	Plato^ objPlato = gcnew Plato(codigoPlato, Nombre, Origen, Precio, cantPlatosVendidos);
	PlatoController^ objPlatoController = gcnew PlatoController();

	/*MODIFICAR VALORES DE ATRIBUTOS DE OBJETO. VER MAS EN PLATOCONTROLLER.CPP*/
	objPlatoController->editarPlato(objPlato);
	MessageBox::Show("El plato ha sido modificado con exito");
	this->Close();

	/*frmMantProductos^ objPlatoView = gcnew frmMantProductos();
	frmPrincipal->ventanaMantProductos->button2_Click(sender, e);*/

	/*MODELO DE MODIFICACION SIN CREACION DE FUNCION (NO OLVIDAR ESCRIBIR EN ARCHIVO TXT)
	this->objPlato->setCodigo(Convert::ToInt32(objPlato->getCodigo()));
	this->objPlato->setNombre(objPlato->getNombre());*/
	
}

	   /*CARGAR VALORES DE ATRIBUTOS DEL OBJETO SELECCIONADO EN VENTANA*/
private: System::Void frmEditPlato_Load(System::Object^ sender, System::EventArgs^ e) {

	this->textBox1->Text = Convert::ToString(this->objPlato->getCodigo());
	this->textBox2->Text = this->objPlato->getNombre();
	this->textBox3->Text = this->objPlato->getOrigen();
	this->textBox4->Text = Convert::ToString(this->objPlato->getPrecio());

}

	   /*CANCELAR*/
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
