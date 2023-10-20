#pragma once
#include "frmMantenimientoUsuarios.h"
#include "frmMantenimientoMaquinas.h"
#include "frmMantenimientoTarjetas.h"
#include "frmMantProductos.h"


namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tendenciaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ tarjetasToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maquinaToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tendenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maquinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->operacionesToolStripMenuItem, this->tendenciaToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(770, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// tendenciaToolStripMenuItem
			// 
			this->tendenciaToolStripMenuItem->Name = L"tendenciaToolStripMenuItem";
			this->tendenciaToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->tendenciaToolStripMenuItem->Text = L"Tendencia";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->usuariosToolStripMenuItem,
					this->tarjetasToolStripMenuItem, this->platosToolStripMenuItem, this->maquinaToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuariosToolStripMenuItem_Click);
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			this->tarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetasToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->platosToolStripMenuItem->Text = L"Productos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::platosToolStripMenuItem_Click);
			// 
			// maquinaToolStripMenuItem
			// 
			this->maquinaToolStripMenuItem->Name = L"maquinaToolStripMenuItem";
			this->maquinaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->maquinaToolStripMenuItem->Text = L"Maquina";
			this->maquinaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::maquinaToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 495);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		frmMantenimientoUsuarios^ ventanaMantUsuarios = gcnew frmMantenimientoUsuarios(); 
		ventanaMantUsuarios->MdiParent = this; 
		ventanaMantUsuarios -> Show(); 
	}
private: System::Void máquinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantenimientoTarjetas^ ventanaMantTarjetas = gcnew frmMantenimientoTarjetas();
	ventanaMantTarjetas->MdiParent = this;
	ventanaMantTarjetas->Show();

}
private: System::Void maquinaCompraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void platosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantProductos^ ventanaMantProductos = gcnew frmMantProductos();
	ventanaMantProductos->MdiParent = this;
	ventanaMantProductos->Show();

}
private: System::Void maquinaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoMaquinas^ ventanaMantMaquinas = gcnew frmMantenimientoMaquinas();
	ventanaMantMaquinas->MdiParent = this;
	ventanaMantMaquinas->Show();
}
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
