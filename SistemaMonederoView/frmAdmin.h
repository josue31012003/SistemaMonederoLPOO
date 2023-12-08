#pragma once
#include "frmMantenimientoUsuarios.h"
#include "frmMantenimientoMaquinas.h"
#include "frmMantenimientoTarjetas.h"
#include "frmMantProductos.h"
#include "frmComprarPlato.h"
#include "frmHistorialTransaccion.h"
#include "frmReporteVentasxPlato.h"
#include "frmReporteTipoUsuario.h"
#include "frmReporteActividadMaquinas.h"
#include "frmReporteActividadTarjetas.h"

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
	/// Summary for frmAdmin
	/// </summary>
	public ref class frmAdmin : public System::Windows::Forms::Form
	{
	public:
		frmAdmin(void)
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
		~frmAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comprarProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeTransaccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tendenciaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeVentasPorPlatoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeActividadDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeActividadDeMáquinasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeTarjetasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ platosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maquinaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeTransaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tendenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeVentasPorPlatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeActividadDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeActividadDeMáquinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeTarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(883, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			this->archivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::archivoToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->comprarProductoToolStripMenuItem,
					this->historialDeTransaccionToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// comprarProductoToolStripMenuItem
			// 
			this->comprarProductoToolStripMenuItem->Name = L"comprarProductoToolStripMenuItem";
			this->comprarProductoToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->comprarProductoToolStripMenuItem->Text = L"Comprar producto";
			// 
			// historialDeTransaccionToolStripMenuItem
			// 
			this->historialDeTransaccionToolStripMenuItem->Name = L"historialDeTransaccionToolStripMenuItem";
			this->historialDeTransaccionToolStripMenuItem->Size = System::Drawing::Size(250, 26);
			this->historialDeTransaccionToolStripMenuItem->Text = L"Historial de Transaccion";
			this->historialDeTransaccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::historialDeTransaccionToolStripMenuItem_Click);
			// 
			// tendenciaToolStripMenuItem
			// 
			this->tendenciaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->reporteDeVentasPorPlatoToolStripMenuItem,
					this->reporteDeActividadDeUsuariosToolStripMenuItem, this->reporteDeActividadDeMáquinasToolStripMenuItem, this->reporteDeTarjetasToolStripMenuItem
			});
			this->tendenciaToolStripMenuItem->Name = L"tendenciaToolStripMenuItem";
			this->tendenciaToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->tendenciaToolStripMenuItem->Text = L"Reportes";
			// 
			// reporteDeVentasPorPlatoToolStripMenuItem
			// 
			this->reporteDeVentasPorPlatoToolStripMenuItem->Name = L"reporteDeVentasPorPlatoToolStripMenuItem";
			this->reporteDeVentasPorPlatoToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeVentasPorPlatoToolStripMenuItem->Text = L"Reporte de ventas por plato";
			this->reporteDeVentasPorPlatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::reporteDeVentasPorPlatoToolStripMenuItem_Click);
			// 
			// reporteDeActividadDeUsuariosToolStripMenuItem
			// 
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Name = L"reporteDeActividadDeUsuariosToolStripMenuItem";
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Text = L"Reporte de usuarios";
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::reporteDeActividadDeUsuariosToolStripMenuItem_Click);
			// 
			// reporteDeActividadDeMáquinasToolStripMenuItem
			// 
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Name = L"reporteDeActividadDeMáquinasToolStripMenuItem";
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Text = L"Reporte de máquinas";
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::reporteDeActividadDeMáquinasToolStripMenuItem_Click);
			// 
			// reporteDeTarjetasToolStripMenuItem
			// 
			this->reporteDeTarjetasToolStripMenuItem->Name = L"reporteDeTarjetasToolStripMenuItem";
			this->reporteDeTarjetasToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeTarjetasToolStripMenuItem->Text = L"Reporte de actividad de tarjetas";
			this->reporteDeTarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::reporteDeTarjetasToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->usuariosToolStripMenuItem,
					this->tarjetasToolStripMenuItem, this->platosToolStripMenuItem, this->maquinaToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::usuariosToolStripMenuItem_Click_1);
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			this->tarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::tarjetasToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->platosToolStripMenuItem->Text = L"Platos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::platosToolStripMenuItem_Click);
			// 
			// maquinaToolStripMenuItem
			// 
			this->maquinaToolStripMenuItem->Name = L"maquinaToolStripMenuItem";
			this->maquinaToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->maquinaToolStripMenuItem->Text = L"Maquina";
			this->maquinaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmAdmin::maquinaToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// frmAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 489);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"frmAdmin";
			this->Text = L"frmAdmin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void usuariosToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoUsuarios^ ventanaMantUsuarios = gcnew frmMantenimientoUsuarios();
	//ventanaMantUsuarios->MdiParent = this; 
	ventanaMantUsuarios->ShowDialog();
}
private: System::Void tarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoTarjetas^ ventanaMantTarjetas = gcnew frmMantenimientoTarjetas();
	//ventanaMantTarjetas->MdiParent = this;
	ventanaMantTarjetas->ShowDialog();
}
private: System::Void platosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantProductos^ ventanaMantProductos = gcnew frmMantProductos();
	//ventanaMantProductos->MdiParent = this;
	ventanaMantProductos->ShowDialog();
}
private: System::Void maquinaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoMaquinas^ ventanaMantMaquinas = gcnew frmMantenimientoMaquinas();
	//ventanaMantMaquinas->MdiParent = this;
	ventanaMantMaquinas->ShowDialog();
}
private: System::Void historialDeTransaccionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmHistorialTransaccion^ ventanaHistorialTransaccion = gcnew frmHistorialTransaccion();
	ventanaHistorialTransaccion->ShowDialog();
}
private: System::Void reporteDeVentasPorPlatoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteVentasxPlato^ ventanaReporteVentasxPlato = gcnew frmReporteVentasxPlato();
	//ventanaReporteVentasxPlato->MdiParent = this; //Opcional
	ventanaReporteVentasxPlato->ShowDialog();
}
private: System::Void reporteDeActividadDeUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteTipoUsuario^ ventanaReporteTipoUsuario = gcnew frmReporteTipoUsuario();
	//ventanaReporteTipoUsuario->MdiParent = this; //Opcional
	ventanaReporteTipoUsuario->ShowDialog();
}
private: System::Void reporteDeActividadDeMáquinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteActividadMaquinas^ ventanaReporteActividadMaquinas = gcnew frmReporteActividadMaquinas();
	//ventanaReporteActividadMaquinas->MdiParent = this; //Opcional
	ventanaReporteActividadMaquinas->ShowDialog();
}
private: System::Void reporteDeTarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteActividadTarjetas^ ventanaReporteActividadTarjetas = gcnew frmReporteActividadTarjetas();     //Incluir "  #include "frmMantEdificios"  "  
	//ventanaReporteActividadTarjetas->MdiParent = this; //Opcional
	ventanaReporteActividadTarjetas->ShowDialog();
}
};
}
