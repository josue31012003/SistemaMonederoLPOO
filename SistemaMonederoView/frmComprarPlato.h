#pragma once
#include "frmBuscarSede.h"


namespace SistemaMonederoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMonederoController; 
	using namespace SistemaMonederoModel; 

	/// <summary>
	/// Resumen de frmComprarPlato
	/// </summary>
	public ref class frmComprarPlato : public System::Windows::Forms::Form
	{
	public:
		frmComprarPlato(void)
		{
			InitializeComponent();
			InicializeSerial();
			

			//
			
			//

		}
		frmComprarPlato(String^ objUbicacion)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

			this->objUbicacion = objUbicacion;
		}
		frmComprarPlato(Plato^ objPlato)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

			this->objPlato = objPlato;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmComprarPlato()
		{
			serialPort1->Close();
			if (components)
			{
				delete components;
			}
			
		}

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: String^ objUbicacion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: Plato^ objPlato;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;









	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(11, 322);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(334, 199);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de comprador";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Pase su tarjeta por el sensor para mostrar su informacion\r\ny confirmar su identid"
				L"ad";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(152, 113);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(116, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmComprarPlato::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(152, 75);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(116, 20);
			this->textBox5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(70, 113);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"RFID Usuario ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(70, 77);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"DNI";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(329, 525);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 54);
			this->button3->TabIndex = 7;
			this->button3->Text = L"CONFIRMAR COMPRA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmComprarPlato::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 26);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(288, 226);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 65;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 69;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 62;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Disponible";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 81;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(29, 36);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(1, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(288, 350);
			this->dataGridView2->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Codigo";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 65;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 69;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 74;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->dataGridView2);
			this->groupBox1->Location = System::Drawing::Point(369, 26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(341, 441);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Carrito de compras";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(98, 397);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 32);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Eliminar seleccion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmComprarPlato::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 266);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Seleccionar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComprarPlato::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(81, 542);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(87, 20);
			this->dateTimePicker1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 546);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Hoy:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(160, 156);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmComprarPlato::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 159);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Saldo Disponible";
			this->label3->Click += gcnew System::EventHandler(this, &frmComprarPlato::label3_Click);
			// 
			// frmComprarPlato
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 590);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmComprarPlato";
			this->Text = L"frmComprarPlato";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmComprarPlato::frmComprarPlato_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmComprarPlato::frmComprarPlato_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void InicializeSerial(void) {
			SerialController^ arduino = gcnew SerialController();
			serialPort1->PortName = arduino->ObtenerPuertoSerial(); 
			serialPort1->BaudRate = 9600; 
			serialPort1->DataBits = 8;
			serialPort1->Parity = System::IO::Ports::Parity::None; 
			serialPort1->StopBits = System::IO::Ports::StopBits::One; 
			
			try {
				serialPort1->Open();
			}
			catch (Exception^ ex)
			{
			
			}
			serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmComprarPlato::serialPort1_DataReceived);
			
		}
#pragma endregion


private: void mostrarGrilla(List<Plato^>^ listPlatos) {
	this->dataGridView1->Rows->Clear(); /* Elimino toda la informaci�n de la grilla1 */

	for (int i = 0; i < listPlatos->Count; i++) {
		Plato^ objPlato = listPlatos[i];
		array<String^>^ filaGrilla = gcnew array<String^>(4);
		filaGrilla[0] = Convert::ToString(objPlato->getCodigo());
		filaGrilla[1] = objPlato->getNombre();
		filaGrilla[2] = Convert::ToString(objPlato->getPrecio());
		filaGrilla[3] = Convert::ToString(objPlato->getCantPlatosDisponible());
		this->dataGridView1->Rows->Add(filaGrilla);
	}
}


	private: void mostrarFilaEnGrilla2(DataGridViewRow^ fila) {
		
		try {
			// Obtener el c�digo del plato seleccionado en la grilla1
			String^ codigoPlato = fila->Cells[0]->Value->ToString();

			// Verificar si el c�digo del plato ya existe en la grilla2
			int platoExistente = 0;
			int rowIndex = -1;

			for each (DataGridViewRow ^ row in this->dataGridView2->Rows) {
				// Verificar si la fila y la celda no son null antes de acceder a Value
				if (row != nullptr && row->Cells[0] != nullptr && row->Cells[0]->Value != nullptr) {
					if (row->Cells[0]->Value->ToString() == codigoPlato) {
						platoExistente = 1;
						rowIndex = row->Index;
						break;
					}
				}
			}

			if (platoExistente) {
				
				// Si el plato ya existe, borra la fila espec�fica en lugar de limpiar toda la grilla
				this->dataGridView2->Rows->RemoveAt(rowIndex);
				this->dataGridView2->Refresh();

			}

			// Crear una nueva fila en la grilla2 con los datos de la fila seleccionada en la grilla1
			array<String^>^ filaGrilla2 = gcnew array<String^>(3);

			for (int i = 0; i < fila->Cells->Count-1; i++) {
				if (fila->Cells[i]->Value != nullptr) {
					filaGrilla2[i] = fila->Cells[i]->Value->ToString();
				}
				else {
					filaGrilla2[i] = "";
				}
			}

			// Obtener el conteo actual de ese plato
			int conteo = PlatoController::ConteoPlatosSeleccionados(codigoPlato);

			if (conteo > 0) {
				// Asegurarse de que la columna 2 contenga el conteo en lugar del precio
				filaGrilla2[2] = Convert::ToString(conteo);

				// Agregar la nueva fila a la grilla2 sin borrar las existentes
				this->dataGridView2->Rows->Add(filaGrilla2);
				this->dataGridView2->Refresh();
			}
		}
		catch (System::NullReferenceException^ ex) {
			

		}
	}


	private: System::Void frmComprarPlato_Load(System::Object ^ sender, System::EventArgs ^ e) {
		// Cargar dataGridView1 al inicio
		PlatoController^ ObjPlatoController = gcnew PlatoController();
		List<Plato^>^ listPlatos = ObjPlatoController->buscarPlatosxUbicacionBD(objUbicacion);
		mostrarGrilla(listPlatos);
		ObjPlatoController->reiniciarConteoPlatos();
		InicializeSerial();


	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dataGridView2->Rows[0] != nullptr && this->dataGridView2->Rows[0]->Cells[0] != nullptr && dataGridView2->Rows[0]->Cells[0]->Value != nullptr && textBox6->Text != nullptr) {

		// Crear una instancia de PlatoController
		double monto = 0;

		UbicacionController^ objUbicacionController = gcnew UbicacionController();
		int codigoUbicacion = objUbicacionController->buscarUbicacionxNombreBD(this->objUbicacion)->getCodigo();

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		int codigoUsuario = objUsuarioController->buscarUsuarioxRFIDBD(textBox6->Text)->getCodigo();

		PlatoController^ objPlatoController = gcnew PlatoController();
		List<PlatoVendido^>^ listaPlatosVendidos = gcnew List<PlatoVendido^>();
		int codigoTransaccion;
		Transaccion^ objTransaccion;
		// Recorrer todas las filas del DataGridView2

		for each (DataGridViewRow ^ row in dataGridView2->Rows) {

			PlatoVendido^ objPlatoVendido;

			try {
				if (row->Cells[0]->Value != nullptr && row->Cells[2]->Value != nullptr) {
					int codigoPlato = Convert::ToInt32(row->Cells[0]->Value);
					String^ Nombre = row->Cells[1]->Value->ToString();
					double cantidadSeleccionada = Convert::ToInt32(row->Cells[2]->Value);
					double CantPlatosVendidos = objPlatoController->ObtenerCantidadPorCodigoBD(codigoPlato);
					double CantPlatosDisponible = objPlatoController->ObtenerCantidadDisponiblePorCodigoBD(codigoPlato);

					double precio = objPlatoController->buscarPlatoxCodigoBD(codigoPlato)->getPrecio();
					objPlatoController->ModificarCantidad(codigoPlato, cantidadSeleccionada, CantPlatosVendidos, CantPlatosDisponible);


					objPlatoVendido = gcnew PlatoVendido(codigoPlato, Nombre, cantidadSeleccionada, codigoTransaccion);

					monto += precio * cantidadSeleccionada;

					listaPlatosVendidos->Add(objPlatoVendido);
				}
			}
			catch (System::FormatException^ ex) {

			}
		}

		objTransaccion = gcnew Transaccion(codigoTransaccion, dateTimePicker1->Text, "Compra", monto, codigoUsuario, codigoUbicacion);
		TransaccionController^ objTransaccionController = gcnew TransaccionController();
		codigoTransaccion = objTransaccionController->agregarTransaccion(objTransaccion);

		for each (PlatoVendido ^ objPlatoVendido in listaPlatosVendidos) {
			objPlatoVendido->setCodigoTransaccion(codigoTransaccion);
			PlatoVendidoController^ objPlatoVendidoController = gcnew PlatoVendidoController();
			objPlatoVendidoController->agregarPlatoVendido(objPlatoVendido);
		}

		// Mostrar un mensaje de �xito o realizar otras acciones finales
		MessageBox::Show("Se realizo la compra exitosamente");
		serialPort1->Close();
		this->dataGridView2->Rows->Clear();
		this->dataGridView2->Refresh();
	}
}

	private: System::Void button2_Click_1(System::Object ^ sender, System::EventArgs ^ e) {
		// Verificar si hay una fila seleccionada en la grilla2
		if (this->dataGridView2->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada en la grilla2
			int filaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;

			if (this->dataGridView2->Rows[filaSeleccionada]->Cells[0]->Value != nullptr) {
				// Obtener el c�digo del plato seleccionado en la grilla2
				String^ codigoPlato = this->dataGridView2->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

				// Crear una instancia de PlatoController
				PlatoController^ objPlatoController = gcnew PlatoController();

				// Verificar si la cantidad seleccionada es mayor que 1
				int conteoAnterior = PlatoController::ConteoPlatosSeleccionados(codigoPlato);
				if (conteoAnterior > 1) {
					// Si es mayor que 1, simplemente resta una unidad
					objPlatoController->restarConteoPlatosSeleccionados(codigoPlato, 1);

					// Actualiza la celda con la nueva cantidad
					this->dataGridView2->Rows[filaSeleccionada]->Cells[2]->Value = (conteoAnterior - 1).ToString();
				}
				else {
					// Si la cantidad es 1, elimina la fila completa
					objPlatoController->restarConteoPlatosSeleccionados(codigoPlato, 1);
					this->dataGridView2->Rows->RemoveAt(filaSeleccionada);
				}
			}
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int filaSeleccionada = this->dataGridView1->SelectedRows->Count > 0 ?
				this->dataGridView1->SelectedRows[0]->Index : -1;

			// Verificar si hay una fila seleccionada
			if (filaSeleccionada >= 0 && this->dataGridView1->Rows->Count > filaSeleccionada) {
				// Obtener el c�digo del plato seleccionado
				DataGridViewCell^ cell = this->dataGridView1->Rows[filaSeleccionada]->Cells[0];

				// Verificar si la celda y su valor no son nulos
				if (cell != nullptr && cell->Value != nullptr) {
					String^ codigoPlato = cell->Value->ToString();

					// Llamar a incrementarConteoPlatosSeleccionados para actualizar el conteo
					PlatoController::incrementarConteoPlatosSeleccionados(codigoPlato);

					// Llamar a mostrarFilaEnGrilla2 para actualizar dataGridView2 con la fila seleccionada
					mostrarFilaEnGrilla2(this->dataGridView1->Rows[filaSeleccionada]);
				}
				
			}
		}
		catch (Exception^ ex) {
			// Manejar la excepci�n (puedes mostrar un mensaje al usuario o realizar alguna acci�n espec�fica)
		}
	}


private: System::Void frmComprarPlato_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	serialPort1->Close();
}

private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {

	String^ receivedData = serialPort1->ReadLine();
	if (this->IsHandleCreated) {
		this->Invoke(gcnew Action<String^>(this, &frmComprarPlato::UpdateTextBox), receivedData);
	}
}


private: System::Void UpdateTextBox(String^ data) {

	if (data != "") {

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		textBox5->Text = objUsuarioController->buscarUsuarioxRFIDBD(data)->getDNI();
		textBox6->Text = data;
		double saldo = objUsuarioController->obtenerSaldo(data);
		textBox1->Text = saldo.ToString(); // Aseg�rate de convertir el saldo a String
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
