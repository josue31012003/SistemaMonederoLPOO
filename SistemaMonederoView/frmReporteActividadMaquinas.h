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
	/// Resumen de frmReporteActividadMaquinas
	/// </summary>
	public ref class frmReporteActividadMaquinas : public System::Windows::Forms::Form
	{
	public:
		frmReporteActividadMaquinas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmReporteActividadMaquinas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->chart1->Location = System::Drawing::Point(41, 63);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de M�quinas";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(392, 322);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(525, 63);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Cantidad de M�quinas";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(367, 322);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &frmReporteActividadMaquinas::chart2_Click);
			// 
			// frmReporteActividadMaquinas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 484);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteActividadMaquinas";
			this->Text = L"frmReporteActividadMaquinas";
			this->Load += gcnew System::EventHandler(this, &frmReporteActividadMaquinas::frmReporteActividadMaquinas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteActividadMaquinas_Load(System::Object^ sender, System::EventArgs^ e) {

		MaquinaController^ objMaquinaController = gcnew MaquinaController();
		List<Maquina^>^ listaMaquinas = objMaquinaController->buscarAll();
		

		//L�gica para hallar el tipo de usuario
		int contMaquinasCompra = 0;
		int contMaquinasRecarga = 0;
		for (int i = 0; i < listaMaquinas->Count; i++) {

			if (listaMaquinas[i]->gettipoMaquina() == "M�quina de Compra") {
				contMaquinasCompra++;
			}
			if (listaMaquinas[i]-> gettipoMaquina() == "M�quina de Recarga") {
				contMaquinasRecarga++;
			}
		}
		int cantMaquinas = contMaquinasCompra + contMaquinasRecarga  ;

		// int listaUsuarios[2] = {contadorAdministradores, contadorComensales};

		this->chart1->Series["Cantidad de M�quinas"]->Points->Add(contMaquinasCompra);
		this->chart1->Series["Cantidad de M�quinas"]->Points[0]->AxisLabel = "M�quinas de Compra";
		this->chart1->Series["Cantidad de M�quinas"]->Points[0]->LegendText = "M�quinas de Compra";
		this->chart1->Series["Cantidad de M�quinas"]->Points[0]->Label = Convert::ToString(contMaquinasCompra);

		this->chart1->Series["Cantidad de M�quinas"]->Points->Add(contMaquinasRecarga);
		this->chart1->Series["Cantidad de M�quinas"]->Points[1]->AxisLabel = "M�quina de Recarga";
		this->chart1->Series["Cantidad de M�quinas"]->Points[1]->LegendText = "M�quina de Recarga";
		this->chart1->Series["Cantidad de M�quinas"]->Points[1]->Label = Convert::ToString(contMaquinasRecarga);

		//PIE 

		this->chart2->Series["Cantidad de M�quinas"]->Points->Add(contMaquinasCompra);
		this->chart2->Series["Cantidad de M�quinas"]->Points[0]->AxisLabel = "M�quinas de Compra";
		this->chart2->Series["Cantidad de M�quinas"]->Points[0]->LegendText = "M�quinas de Compra";
		this->chart2->Series["Cantidad de M�quinas"]->Points[0]->Label = Convert::ToString(contMaquinasCompra);

		this->chart2->Series["Cantidad de M�quinas"]->Points->Add(contMaquinasRecarga);
		this->chart2->Series["Cantidad de M�quinas"]->Points[1]->AxisLabel = "M�quina de Recarga";
		this->chart2->Series["Cantidad de M�quinas"]->Points[1]->LegendText = "M�quina de Recarga";
		this->chart2->Series["Cantidad de M�quinas"]->Points[1]->Label = Convert::ToString(contMaquinasRecarga);
	}
	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
