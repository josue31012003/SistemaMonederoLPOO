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
	/// Resumen de frmReporteActividadTarjetas
	/// </summary>
	public ref class frmReporteActividadTarjetas : public System::Windows::Forms::Form
	{
	public:
		frmReporteActividadTarjetas(void)
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
		~frmReporteActividadTarjetas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(48, 42);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Estado";
			series1->YValuesPerPoint = 6;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(437, 351);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteActividadTarjetas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 429);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteActividadTarjetas";
			this->Text = L"frmReporteActividadTarjetas";
			this->Load += gcnew System::EventHandler(this, &frmReporteActividadTarjetas::frmReporteActividadTarjetas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteActividadTarjetas_Load(System::Object^ sender, System::EventArgs^ e) {

		TarjetaController^ objTarjetaController = gcnew TarjetaController();
		List<Tarjeta^>^ listaTarjetas = objTarjetaController->buscarAllBD(); 


		//Lógica para hallar el tipo de usuario
		int contActivas = 0;
		int contInactivas = 0;
		for (int i = 0; i < listaTarjetas->Count; i++) {

			if (listaTarjetas[i]->getEstado() == "Activo") {
				contActivas++;
			}
			if (listaTarjetas[i]->getEstado() == "Inactivo") {
				contInactivas++;
			}
		}

		//PIE 
		this->chart1->Series["Estado"]->Points->Add(contActivas);
		this->chart1->Series["Estado"]->Points[0]->AxisLabel = "Tarjetas activas";
		this->chart1->Series["Estado"]->Points[0]->LegendText = "Tarjetas activas";
		this->chart1->Series["Estado"]->Points[0]->Label = Convert::ToString(contActivas);

		this->chart1->Series["Estado"]->Points->Add(contInactivas);
		this->chart1->Series["Estado"]->Points[1]->AxisLabel = "Tarjetas inactivas";
		this->chart1->Series["Estado"]->Points[1]->LegendText = "Tarjetas inactivas";
		this->chart1->Series["Estado"]->Points[1]->Label = Convert::ToString(contInactivas);

	}
	};
}
