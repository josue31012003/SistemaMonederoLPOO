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
	/// Resumen de frmRecargaConfirmacion
	/// </summary>
	public ref class frmRecargaConfirmacion : public System::Windows::Forms::Form
	{
	public:
		frmRecargaConfirmacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmRecargaConfirmacion(String^ codigoRFID)
		{
			InitializeComponent();

			this->codigoRFID = codigoRFID; 
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRecargaConfirmacion()
		{
			serialPort1->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: String^ codigoRFID; 
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(202, 32);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(153, 22);
			this->textBox6->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(92, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"RFID Usuario :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nombres :";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(201, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(154, 22);
			this->textBox2->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(113, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Apellidos : ";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(201, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(154, 22);
			this->textBox3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(135, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Fecha :";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(201, 162);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(154, 22);
			this->dateTimePicker1->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(22, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(485, 347);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la recarga";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(113, 289);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Monto ingresado : ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(248, 289);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 22);
			this->textBox4->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(69, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(375, 32);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Ingrese las monedas a través de la ranura y presione el botón\r\n\"Confirmar\" cuando"
				L" haya terminado de ingresar el monto";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRecargaConfirmacion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(338, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRecargaConfirmacion::button2_Click);
			// 
			// frmRecargaConfirmacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 447);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmRecargaConfirmacion";
			this->Text = L"frmRecargaConfirmacion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmRecargaConfirmacion::frmRecargaConfirmacion_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmRecargaConfirmacion::frmRecargaConfirmacion_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
		void InicializeSerial(void) {
			SerialController^ arduino = gcnew SerialController();
			serialPort1->PortName = arduino->ObtenerPuertoSerial2(); // Establece el nombre del puerto COM, asegúrate de que coincida con el puerto que estás utilizando.
			serialPort1->BaudRate = 9600; // Establece la velocidad de baudios (puede variar según el dispositivo).
			serialPort1->DataBits = 8; // Establece la longitud de datos (generalmente 8 bits).
			serialPort1->Parity = System::IO::Ports::Parity::None; // Establece la paridad (puede variar según el dispositivo).
			serialPort1->StopBits = System::IO::Ports::StopBits::One; // Establece el número de bits de parada.
			try {
				serialPort1->Open();

			}
			catch (Exception^ ex)
			{

			}
			serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmRecargaConfirmacion::serialPort1_DataReceived);


		}

#pragma endregion
	private: System::Void frmRecargaConfirmacion_Load(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objUsuarioController = gcnew UsuarioController(); 
		Usuario^ objUsuario = objUsuarioController->buscarUsuarioxRFIDBD(this->codigoRFID); 
		this->textBox6->Text = objUsuario->getIdentificacionRFID(); 
		this->textBox2->Text = objUsuario->getNombre(); 
		this->textBox3->Text = objUsuario->getApPaterno(); 
		InicializeSerial();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Close();
	this->Close(); 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double saldoRecarga = Convert::ToDouble(this->textBox4->Text); // Este es el saldo que se ha recargado
	//Lógica para sumar saldo 
	String^ codigoRFID = this->textBox6->Text->Replace("\r","");

	TarjetaController^ objTarjetaController = gcnew TarjetaController();
	TarjetaController^ objeto = gcnew TarjetaController();  //para actualizar el saldo 
	double saldoActual = objTarjetaController->obtenerSaldoxRFID(codigoRFID);  // Este es el saldo que hay en la tarjeta ANTES de la recarga
	double saldoFinal = saldoActual + saldoRecarga;   //Este es el saldo al finalizar la recarga 
	objeto->actualizarSaldoTarjetaxRFID(codigoRFID, saldoFinal); //Aquí se realiza la actualización del saldo en la tarjeta 
	//
	MessageBox::Show("Se realizó la recarga, el saldo actual es : S/." + saldoFinal);
	serialPort1->Close();
	this->Close();


}
		private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
			String^ receivedData = serialPort1->ReadLine();

			// Verifica si la invocación es necesaria
			this->BeginInvoke(gcnew Action<String^>(this, &frmRecargaConfirmacion::UpdateTextBox), receivedData);

		}
				private: System::Void UpdateTextBox(String^ data) {
					if (data != "")
						textBox4->Text = data;
				}

private: System::Void frmRecargaConfirmacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	serialPort1->Close();
}
};
}
