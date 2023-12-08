#pragma once
#include"frmCompra.h"
#include "frmRecarga.h"
#include "frmLogin.h"
#include "frmHistorial.h"

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
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(361, 243);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(220, 157);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Administrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPrincipal::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(361, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 157);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Historial";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Seleccione la función de este dispositivo:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 157);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Recarga";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(144, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 157);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Compra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 489);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	frmCompra^ ventanaCompra = gcnew frmCompra();
	ventanaCompra->ShowDialog();
	this->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	frmRecarga^ ventanaRecarga = gcnew frmRecarga();
	ventanaRecarga->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	frmHistorial^ ventanaHistorial = gcnew frmHistorial();
	ventanaHistorial->ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	frmLogin^ ventanaLogin = gcnew frmLogin();
	ventanaLogin->ShowDialog();
	this->Show();
}
};
}
