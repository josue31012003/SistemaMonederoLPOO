#pragma once

namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoController; 
	using namespace SistemaMonederoModel; 

	/// <summary>
	/// Resumen de frmReporteTipoUsuario
	/// </summary>
	public ref class frmReporteTipoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmReporteTipoUsuario(void)
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
		~frmReporteTipoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(32, 52);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Número de Usuarios";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(356, 337);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(450, 52);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Número de Usuarios";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(356, 337);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// frmReporteTipoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 448);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteTipoUsuario";
			this->Text = L"frmReporteTipoUsuario";
			this->Load += gcnew System::EventHandler(this, &frmReporteTipoUsuario::frmReporteTipoUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteTipoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<Usuario^>^ listaUsuarios = objUsuarioController->buscarAll(); 

		//Lógica para hallar el tipo de usuario
		int contadorAdministradores = 0;
		int contadorComensales = 0; 
		for (int i = 0; i < listaUsuarios->Count; i++) {

			if (listaUsuarios[i]->getTipoUsuario() == "Administrador") {	
				contadorAdministradores++; 
			}
			if (listaUsuarios[i]->getTipoUsuario() == "Comensal") {
				contadorComensales++;
			}
		}
		int cantidadUsuarios = contadorAdministradores + contadorComensales;

		// int listaUsuarios[2] = {contadorAdministradores, contadorComensales};

		this->chart1->Series["Número de Usuarios"]->Points->Add(contadorAdministradores);
		this->chart1->Series["Número de Usuarios"]->Points[0]->AxisLabel = "Administradores";
		this->chart1->Series["Número de Usuarios"]->Points[0]->LegendText = "Administradores";
		this->chart1->Series["Número de Usuarios"]->Points[0]->Label = Convert::ToString(contadorAdministradores);

		this->chart1->Series["Número de Usuarios"]->Points->Add(contadorComensales);
		this->chart1->Series["Número de Usuarios"]->Points[1]->AxisLabel = "Comensales";
		this->chart1->Series["Número de Usuarios"]->Points[1]->LegendText = "Comensales";
		this->chart1->Series["Número de Usuarios"]->Points[1]->Label = Convert::ToString(contadorComensales);

		//PIE 

		this->chart2->Series["Número de Usuarios"]->Points->Add(contadorAdministradores);
		this->chart2->Series["Número de Usuarios"]->Points[0]->AxisLabel = "Administradores";
		this->chart2->Series["Número de Usuarios"]->Points[0]->LegendText = "Administradores";
		this->chart2->Series["Número de Usuarios"]->Points[0]->Label = Convert::ToString(contadorAdministradores);

		this->chart2->Series["Número de Usuarios"]->Points->Add(contadorComensales);
		this->chart2->Series["Número de Usuarios"]->Points[1]->AxisLabel = "Comensales";
		this->chart2->Series["Número de Usuarios"]->Points[1]->LegendText = "Comensales";
		this->chart2->Series["Número de Usuarios"]->Points[1]->Label = Convert::ToString(contadorComensales);
	}
	};
}
