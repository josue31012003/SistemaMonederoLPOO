#pragma once
#include"frmRecargaConfirmacion.h"

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

	/// <summary>
	/// Summary for frmRecarga
	/// </summary>
	public ref class frmRecarga : public System::Windows::Forms::Form
	{
	public:
		frmRecarga(void)
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
		~frmRecarga()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label6;







	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(45, 25);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(445, 145);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de comprador";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Pase su tarjeta por el sensor para mostrar su informacion\r\ny confirmar su identid"
				L"ad";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(188, 91);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(153, 22);
			this->textBox6->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(78, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"RFID Usuario ";
			// 
			// button1
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(93, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(375, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ingrese las monedas a trav�s de la ranura y presione el bot�n\r\n\"Confirmar\" cuando"
				L" haya terminado de ingresar el monto";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmRecarga::serialPort1_DataReceived);
			this->button1->Location = System::Drawing::Point(216, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Continuar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRecarga::button1_Click);
			// 
			// frmRecarga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 454);
			this->Controls->Add(this->label2);
			this->ClientSize = System::Drawing::Size(528, 260);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"frmRecarga";
			this->Text = L"frmRecarga";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmRecarga::frmRecarga_FormClosed);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {

	String^ receivedData = serialPort1->ReadLine();
	if (this->IsHandleCreated) {
		this->Invoke(gcnew Action<String^>(this, &frmRecarga::UpdateTextBox), receivedData);
	}
}

private: System::Void UpdateTextBox(String^ data) {

	if (data != "") {

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		textBox5->Text = objUsuarioController->buscarUsuarioxRFIDBD(data)->getDNI();
		textBox6->Text = data;
	}
}

private: System::Void frmRecarga_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	serialPort1->Close();
}
};
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Para llamar la ventana "Recarga Confirmaci�n":
	String^ codigoRFID = this->textBox6->Text;  //obtenemos el RFID con el que vamos a buscar la tarjeta
	frmRecargaConfirmacion^ ventanaRecargaConfirmacion = gcnew frmRecargaConfirmacion(codigoRFID);
	ventanaRecargaConfirmacion->ShowDialog();





}
};
}
