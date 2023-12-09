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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->textBox6->TabIndexChanged += gcnew System::EventHandler(this, &frmHistorial::textBox6_TabIndexChanged);
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
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Fecha,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(163, 243);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(643, 237);
			this->dataGridView1->TabIndex = 3;
			dataGridView1->DefaultCellStyle->WrapMode = DataGridViewTriState::True;
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmHistorial::serialPort1_DataReceived);
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
			// frmHistorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 570);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"frmHistorial";
			this->Text = L"frmHistorial";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmHistorial::frmHistorial_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmHistorial::frmHistorial_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmHistorial::frmHistorial_MouseMove);
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
	private: System::Void frmHistorial_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		serialPort1->Close();
	}
	private: System::Void frmHistorial_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: void mostrarGrilla(List<Transaccion^>^ listTransacciones) {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la información de la grilla1 */

		for (int i = 0; i < listTransacciones->Count; i++) {

			Transaccion^ objTransaccion = listTransacciones[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);

			filaGrilla[0] = objTransaccion->getFecha();

			PlatoVendidoController^ objPlatoVendidoController = gcnew PlatoVendidoController();
			List<PlatoVendido^>^ listaPlatosVendidos = objPlatoVendidoController->buscarPlatosVendidosxTransaccion(objTransaccion->getCodigo());

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
	}

	private: System::Void textBox6_TabIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void frmHistorial_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {


	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text != "") {
			try {

				UsuarioController^ objUsuarioController = gcnew UsuarioController();
				int codigoUsuario = objUsuarioController->buscarUsuarioxRFIDBD(textBox6->Text)->getCodigo();

				TransaccionController^ objTransaccionController = gcnew TransaccionController();
				mostrarGrilla(objTransaccionController->buscarTransaccionesxUsuario(codigoUsuario));
			}
			catch (Exception^ ex) {

			}
			finally {

			}
		}
	}
	};
}
