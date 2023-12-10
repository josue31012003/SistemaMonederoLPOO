#pragma once

namespace SistemaMonederoView {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace SistemaMonederoController;
    using namespace SistemaMonederoModel;

    public ref class frmNuevaTarjeta : public System::Windows::Forms::Form
    {
    public:
        frmNuevaTarjeta(void)
        {
            InitializeComponent();
            InicializeSerial();
            
        }

    protected:
        ~frmNuevaTarjeta()
        {
            serialPort1->Close();
            if (components)
            {
                delete components;
            }
            
        }
    private: System::Windows::Forms::Button^ button2;
    protected:
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::GroupBox^ groupBox1;

    private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::IO::Ports::SerialPort^ serialPort1;
    private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->components = (gcnew System::ComponentModel::Container());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
               this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
               this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
               this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
               this->groupBox1->SuspendLayout();
               this->SuspendLayout();
               // 
               // button2
               // 
               this->button2->Location = System::Drawing::Point(314, 381);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(94, 32);
               this->button2->TabIndex = 5;
               this->button2->Text = L"Cancelar";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &frmNuevaTarjeta::button2_Click);
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(149, 381);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(94, 32);
               this->button1->TabIndex = 4;
               this->button1->Text = L"Grabar";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &frmNuevaTarjeta::button1_Click);
               // 
               // groupBox1
               // 
               this->groupBox1->Controls->Add(this->comboBox1);
               this->groupBox1->Controls->Add(this->dateTimePicker2);
               this->groupBox1->Controls->Add(this->dateTimePicker1);
               this->groupBox1->Controls->Add(this->textBox1);
               this->groupBox1->Controls->Add(this->label4);
               this->groupBox1->Controls->Add(this->label3);
               this->groupBox1->Controls->Add(this->label2);
               this->groupBox1->Controls->Add(this->label1);
               this->groupBox1->Location = System::Drawing::Point(68, 36);
               this->groupBox1->Name = L"groupBox1";
               this->groupBox1->Size = System::Drawing::Size(434, 301);
               this->groupBox1->TabIndex = 3;
               this->groupBox1->TabStop = false;
               this->groupBox1->Text = L"Datos de la Nueva Tarjeta";
               // 
               // comboBox1
               // 
               this->comboBox1->FormattingEnabled = true;
               this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
               this->comboBox1->Location = System::Drawing::Point(154, 207);
               this->comboBox1->Name = L"comboBox1";
               this->comboBox1->Size = System::Drawing::Size(173, 24);
               this->comboBox1->TabIndex = 8;
               this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaTarjeta::comboBox1_SelectedIndexChanged);
               // 
               // dateTimePicker2
               // 
               this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
               this->dateTimePicker2->Location = System::Drawing::Point(154, 155);
               this->dateTimePicker2->Name = L"dateTimePicker2";
               this->dateTimePicker2->Size = System::Drawing::Size(173, 22);
               this->dateTimePicker2->TabIndex = 6;
               // 
               // dateTimePicker1
               // 
               this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
               this->dateTimePicker1->Location = System::Drawing::Point(154, 99);
               this->dateTimePicker1->Name = L"dateTimePicker1";
               this->dateTimePicker1->Size = System::Drawing::Size(173, 22);
               this->dateTimePicker1->TabIndex = 5;
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(154, 43);
               this->textBox1->Name = L"textBox1";
               this->textBox1->ReadOnly = true;
               this->textBox1->Size = System::Drawing::Size(173, 22);
               this->textBox1->TabIndex = 4;
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(35, 211);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(53, 16);
               this->label4->TabIndex = 3;
               this->label4->Text = L"Estado:";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(35, 156);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(76, 16);
               this->label3->TabIndex = 2;
               this->label3->Text = L"FechaBaja:";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(35, 101);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(71, 16);
               this->label2->TabIndex = 9;
               this->label2->Text = L"FechaAlta:";
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(35, 46);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(54, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Codigo:";
               // 
               // frmNuevaTarjeta
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(554, 473);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->groupBox1);
               this->Name = L"frmNuevaTarjeta";
               this->Text = L"frmNuevaTarjeta";
               this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmNuevaTarjeta::frmNuevaTarjeta_FormClosed);
               this->groupBox1->ResumeLayout(false);
               this->groupBox1->PerformLayout();
               this->ResumeLayout(false);

           }
           void InicializeSerial(void) {
               SerialController^ arduino = gcnew SerialController();
               serialPort1->PortName = arduino->ObtenerPuertoSerial(); // Establece el nombre del puerto COM, asegúrate de que coincida con el puerto que estás utilizando.
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
               serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmNuevaTarjeta::serialPort1_DataReceived);
               
              
           }

           

#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int codigoTarjeta = Convert::ToInt32(this->textBox1->Text);
        String^ fechaAlta = this->dateTimePicker1->Text;
        String^ fechaBaja = this->dateTimePicker2->Text;
        String^ Estado = this->comboBox1->Text;
        Tarjeta^ ObjTarjeta = gcnew Tarjeta(codigoTarjeta, fechaAlta, fechaBaja, Estado);
        TarjetaController^ ObjTarjetaController = gcnew TarjetaController();
        ObjTarjetaController->registrarTarjetaBD(codigoTarjeta, fechaAlta, fechaBaja, Estado);
        MessageBox::Show("La tarjeta ha sido añadida exitosamente.");
        serialPort1->Close();
        this->Close();
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        serialPort1->Close();
        this->Close();
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    

   private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
       String^ receivedData = serialPort1->ReadLine();

       // Verifica si la invocación es necesaria
       this->BeginInvoke(gcnew Action<String^>(this, &frmNuevaTarjeta::UpdateTextBox), receivedData);

   }

    private: System::Void UpdateTextBox(String^ data) {
        if (data != "")
            textBox1->Text = data;
    }
    
private: System::Void frmNuevaTarjeta_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    serialPort1->Close();
}
};
}
