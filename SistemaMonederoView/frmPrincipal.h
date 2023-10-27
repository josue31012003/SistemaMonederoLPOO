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
	private: System::Windows::Forms::ToolStripMenuItem^ comprarProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeTransaccionToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeVentasPorPlatoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeActividadDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeActividadDeMáquinasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeToolStripMenuItem;


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
			this->comprarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tendenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeVentasPorPlatoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeActividadDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeActividadDeMáquinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maquinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeTransaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->reporteDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(838, 24);
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
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->comprarProductoToolStripMenuItem,
					this->historialDeTransaccionToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// comprarProductoToolStripMenuItem
			// 
			this->comprarProductoToolStripMenuItem->Name = L"comprarProductoToolStripMenuItem";
			this->comprarProductoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->comprarProductoToolStripMenuItem->Text = L"Comprar producto";
			this->comprarProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::comprarProductoToolStripMenuItem_Click);
			// 
			// tendenciaToolStripMenuItem
			// 
			this->tendenciaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->reporteDeVentasPorPlatoToolStripMenuItem,
					this->reporteDeActividadDeUsuariosToolStripMenuItem, this->reporteDeActividadDeMáquinasToolStripMenuItem, this->reporteDeToolStripMenuItem
			});
			this->tendenciaToolStripMenuItem->Name = L"tendenciaToolStripMenuItem";
			this->tendenciaToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->tendenciaToolStripMenuItem->Text = L"Reportes";
			// 
			// reporteDeVentasPorPlatoToolStripMenuItem
			// 
			this->reporteDeVentasPorPlatoToolStripMenuItem->Name = L"reporteDeVentasPorPlatoToolStripMenuItem";
			this->reporteDeVentasPorPlatoToolStripMenuItem->Size = System::Drawing::Size(320, 26);
			this->reporteDeVentasPorPlatoToolStripMenuItem->Text = L"Reporte de ventas por plato";
			this->reporteDeVentasPorPlatoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDeVentasPorPlatoToolStripMenuItem_Click);
			// 
			// reporteDeActividadDeUsuariosToolStripMenuItem
			// 
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Name = L"reporteDeActividadDeUsuariosToolStripMenuItem";
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Text = L"Reporte de usuarios";
			this->reporteDeActividadDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDeActividadDeUsuariosToolStripMenuItem_Click);
			// 
			// reporteDeActividadDeMáquinasToolStripMenuItem
			// 
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Name = L"reporteDeActividadDeMáquinasToolStripMenuItem";
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Text = L"Reporte de máquinas";
			this->reporteDeActividadDeMáquinasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDeActividadDeMáquinasToolStripMenuItem_Click);
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
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuariosToolStripMenuItem_Click);
			// 
			// tarjetasToolStripMenuItem
			// 
			this->tarjetasToolStripMenuItem->Name = L"tarjetasToolStripMenuItem";
			this->tarjetasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->tarjetasToolStripMenuItem->Text = L"Tarjetas";
			this->tarjetasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetasToolStripMenuItem_Click);
			// 
			// platosToolStripMenuItem
			// 
			this->platosToolStripMenuItem->Name = L"platosToolStripMenuItem";
			this->platosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->platosToolStripMenuItem->Text = L"Productos";
			this->platosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::platosToolStripMenuItem_Click);
			// 
			// maquinaToolStripMenuItem
			// 
			this->maquinaToolStripMenuItem->Name = L"maquinaToolStripMenuItem";
			this->maquinaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->maquinaToolStripMenuItem->Text = L"Maquina";
			this->maquinaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::maquinaToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(277, 455);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(210, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(240, 278);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmPrincipal::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ubicacion";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Seleccione la ubicacion en la se realizara las compras:";
			// 
			// historialDeTransaccionToolStripMenuItem
			// 
			this->historialDeTransaccionToolStripMenuItem->Name = L"historialDeTransaccionToolStripMenuItem";
			this->historialDeTransaccionToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->historialDeTransaccionToolStripMenuItem->Text = L"Historial de Transaccion";
			this->historialDeTransaccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::historialDeTransaccionToolStripMenuItem_Click);
			// 
			// reporteDeToolStripMenuItem
			// 
			this->reporteDeToolStripMenuItem->Name = L"reporteDeToolStripMenuItem";
			this->reporteDeToolStripMenuItem->Size = System::Drawing::Size(305, 26);
			this->reporteDeToolStripMenuItem->Text = L"Reporte de actividad de tarjetas";
			this->reporteDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDeToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 609);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->ClientSize = System::Drawing::Size(838, 495);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"Ventana Principal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		frmMantenimientoUsuarios^ ventanaMantUsuarios = gcnew frmMantenimientoUsuarios(); 
		//ventanaMantUsuarios->MdiParent = this; 
		ventanaMantUsuarios ->ShowDialog();
	}
private: System::Void máquinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tarjetasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmMantenimientoTarjetas^ ventanaMantTarjetas = gcnew frmMantenimientoTarjetas();
	//ventanaMantTarjetas->MdiParent = this;
	ventanaMantTarjetas->ShowDialog();

}
private: System::Void maquinaCompraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void comprarProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmComprarPlato^ ventanaComprarPlato = gcnew frmComprarPlato();     //Incluir "  #include "frmMantEdificios"  "   
	ventanaComprarPlato->ShowDialog();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}

private: void mostrarGrilla(List<String^>^ listaUbicaciones) {
	this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
	for (int i = 0; i < listaUbicaciones->Count; i++) {
		this->dataGridView1->Rows->Add(listaUbicaciones[i]);
	}

}

private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {

	MaquinaController^ objMaquinaController = gcnew MaquinaController();
	List<String^>^ listaUbiaciones = objMaquinaController->obtenerUbicaciones();
	mostrarGrilla(listaUbiaciones);

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	frmComprarPlato^ ventanaCompraPlato = gcnew frmComprarPlato();
	ventanaCompraPlato->ShowDialog();

}
private: System::Void verHistorialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void reporteDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmReporteActividadTarjetas^ ventanaReporteActividadTarjetas = gcnew frmReporteActividadTarjetas();     //Incluir "  #include "frmMantEdificios"  "  
	//ventanaReporteActividadTarjetas->MdiParent = this; //Opcional
	ventanaReporteActividadTarjetas->ShowDialog();
}
};
}
