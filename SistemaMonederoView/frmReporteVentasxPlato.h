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
	/// Resumen de frmReporteVentasxPlato
	/// </summary>
	public ref class frmReporteVentasxPlato : public System::Windows::Forms::Form
	{
	public:
		frmReporteVentasxPlato(void)
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
		~frmReporteVentasxPlato()
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
			this->chart1->Location = System::Drawing::Point(12, 21);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de platos vendidos";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(538, 363);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(576, 21);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(430, 363);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &frmReporteVentasxPlato::chart2_Click);
			// 
			// frmReporteVentasxPlato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 408);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteVentasxPlato";
			this->Text = L"frmReporteVentasxPlato";
			this->Load += gcnew System::EventHandler(this, &frmReporteVentasxPlato::frmReporteVentasxPlato_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteVentasxPlato_Load(System::Object^ sender, System::EventArgs^ e) {
		PlatoController^ objPlatoController = gcnew PlatoController();
		List<Plato^>^ listaPlatos = objPlatoController->buscarAll(); 
		for (int i = 0; i < listaPlatos->Count; i++) {
			this->chart1->Series["Cantidad de platos vendidos"]->Points->Add(listaPlatos[i]->getCantPlatosVendidos());
			this->chart1->Series["Cantidad de platos vendidos"]->Points[i]->AxisLabel = listaPlatos[i]->getNombre();
			this->chart1->Series["Cantidad de platos vendidos"]->Points[i]->LegendText = listaPlatos[i]->getNombre();
			this->chart1->Series["Cantidad de platos vendidos"]->Points[i]->Label = Convert::ToString(listaPlatos[i]->getCantPlatosVendidos());
		}

		//PIE 
		PlatoController^ objPlatoController2 = gcnew PlatoController();
		List<Plato^>^ listaPlatos2 = objPlatoController2->buscarAll();
		for (int i = 0; i < listaPlatos2->Count; i++) {
			this->chart2->Series["Series1"]->Points->Add(listaPlatos2[i]->getCantPlatosVendidos());
			this->chart2->Series["Series1"]->Points[i]->AxisLabel = listaPlatos2[i]->getNombre();
			this->chart2->Series["Series1"]->Points[i]->LegendText = listaPlatos2[i]->getNombre();
			this->chart2->Series["Series1"]->Points[i]->Label = Convert::ToString(listaPlatos2[i]->getCantPlatosVendidos());
		}



	}
	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
