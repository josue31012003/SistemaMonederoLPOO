#pragma once

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
	/// Summary for frmHistorial
	/// </summary>
	public ref class frmHistorial : public System::Windows::Forms::Form
	{
	public:
		frmHistorial(void)
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
		~frmHistorial()
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
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(262, 34);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(445, 178);
			this->groupBox2->TabIndex = 2;
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
			this->textBox6->Location = System::Drawing::Point(203, 139);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(153, 22);
			this->textBox6->TabIndex = 6;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmHistorial::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(203, 92);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(153, 22);
			this->textBox5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(93, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"RFID Usuario ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(93, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"DNI";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Fecha,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(163, 243);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(643, 237);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &frmHistorial::dataGridView1_CellFormatting);
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 74;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Detalles";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 86;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 64;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Monto";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 73;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Ubicación";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 97;
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmHistorial::serialPort1_DataReceived);
			// 
			// frmHistorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 570);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"frmHistorial";
			this->Text = L"frmHistorial";
			this->Load += gcnew System::EventHandler(this, &frmHistorial::frmHistorial_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {

		String^ receivedData = serialPort1->ReadLine();
		if (this->IsHandleCreated) {
			this->Invoke(gcnew Action<String^>(this, &frmHistorial::UpdateTextBox), receivedData);
		}
	}

	private: System::Void UpdateTextBox(String^ data) {

		if (data != "") {
			UsuarioController^ objUsuarioController = gcnew UsuarioController();
			textBox5->Text = objUsuarioController->buscarUsuarioxRFIDBD(data)->getDNI();
			textBox6->Text = data;
		}
	}

	private: System::Void frmHistorial_Load(System::Object^ sender, System::EventArgs^ e) {
		int columnIndex = 1; // Indica el índice de la columna que quieres analizar

		int maxTextLength = 0;

		if (textBox6->Text != "") {
			for (int i = 0; i < dataGridView1->Rows->Count; i++) {
				String^ text = dataGridView1->Rows[i]->Cells[columnIndex]->Value->ToString();
				int length = text->Length;
				if (length > maxTextLength) {
					maxTextLength = length;
				}
			}

			// Establece el ancho de la columna en función de la longitud máxima encontrada
			dataGridView1->Columns[columnIndex]->Width = maxTextLength * 10; // Ajusta someFactor según tu preferencia
		}

	}

	private: List<PlatoVendido^>^ mostrarGrilla(List<Transaccion^>^ listTransacciones) {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la información de la grilla1 */
		List<PlatoVendido^>^ listaPlatosVendidos = nullptr;
		for (int i = 0; i < listTransacciones->Count; i++) {

			Transaccion^ objTransaccion = listTransacciones[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);

			filaGrilla[0] = objTransaccion->getFecha();

			PlatoVendidoController^ objPlatoVendidoController = gcnew PlatoVendidoController();
			listaPlatosVendidos = objPlatoVendidoController->buscarPlatosVendidosxTransaccion(objTransaccion->getCodigo());

			String^ StringlistaPlatosVendidos = "";
			for each (PlatoVendido ^ platoVendido in listaPlatosVendidos) {
				if (StringlistaPlatosVendidos == "") {
					StringlistaPlatosVendidos += Convert::ToString(platoVendido->getCantidad()) + " " + platoVendido->getNombre();
				}
				else {
					StringlistaPlatosVendidos += "\n" + Convert::ToString(platoVendido->getCantidad()) + " " + platoVendido->getNombre();
				}
			}

			filaGrilla[1] = StringlistaPlatosVendidos;
			filaGrilla[2] = objTransaccion->getTipo();
			filaGrilla[3] = Convert::ToString(objTransaccion->getMonto());

			MaquinaController^ objMaquinaController = gcnew MaquinaController();
			UbicacionController^ objUbicacionController = gcnew UbicacionController();

			String^ ubicacion = objUbicacionController->buscarUbicacionxCodigoBD(objTransaccion->getCodigoUbicacion())->getNombre();

			filaGrilla[4] = ubicacion;

			this->dataGridView1->Rows->Add(filaGrilla);
		}
		return listaPlatosVendidos;
	}

	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text != "") {
			try {

				UsuarioController^ objUsuarioController = gcnew UsuarioController();
				int codigoUsuario = objUsuarioController->buscarUsuarioxRFIDBD(textBox6->Text)->getCodigo();

				TransaccionController^ objTransaccionController = gcnew TransaccionController();

				List<PlatoVendido^>^ listaPlatosVendidos = mostrarGrilla(objTransaccionController->buscarTransaccionesxUsuario(codigoUsuario));

				int columnIndex = 1; // Indica el índice de la columna que quieres analizar

				int maxTextLength = 0;

				String^ StringPlatoVendido = nullptr;
				for each (PlatoVendido ^ platoVendido in listaPlatosVendidos) {

					StringPlatoVendido = Convert::ToString(platoVendido->getCantidad()) + " " + platoVendido->getNombre();
					int length = StringPlatoVendido->Length;
					if (length > maxTextLength) {
						maxTextLength = length;
					}
				}

				// Establece el ancho de la columna en función de la longitud máxima encontrada
				dataGridView1->Columns[columnIndex]->Width = maxTextLength * 7; // Ajusta someFactor según tu preferencia
			}
			catch (Exception^ ex) {

			}
			finally {

			}
		}
	}
	private: System::Void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {

		if (e->ColumnIndex == 1 &&
			e->RowIndex >= 0 &&
			e->Value != nullptr) {

			// Obtener el valor actual de la celda
			String^ cellValue = dynamic_cast<String^>(e->Value);
			cellValue = cellValue->Replace("\n", Environment::NewLine);

			// Aplicar el estilo de la celda para el ajuste de texto y las múltiples líneas
			e->CellStyle->WrapMode = DataGridViewTriState::True;
			e->Value = cellValue;
		}
	}
	};
}
