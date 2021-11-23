#pragma once

namespace Pharmacy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Database library
	using namespace MySql::Data::MySqlClient;







	/// <summary>
	/// Summary for Sales
	/// </summary>
	public ref class Sales : public System::Windows::Forms::Form
	{

		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

		MySqlDataReader^ sqlRd;


	private: System::Windows::Forms::Button^ RefreshButton;
	private: System::Windows::Forms::Button^ button2;

		


	public:
		Sales(void)
		{
			InitializeComponent();
			
			//Calling
			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label11;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ DeleteButton;

	private: System::Windows::Forms::Button^ UpdateButton;

	private: System::Windows::Forms::Button^ ResetButton;

	private: System::Windows::Forms::Button^ SaveButton;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ QuantitytextBox;
	private: System::Windows::Forms::TextBox^ PatientIDTextBox;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ PatientNameTextBox;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ PaymentComboBox;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ProductNameTextBox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ StaffIDextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel9;







	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ SearchByPIDtextBox;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ ReftextBox;
	private: System::Windows::Forms::Label^ label12;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->ReftextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->QuantitytextBox = (gcnew System::Windows::Forms::TextBox());
			this->PatientIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PatientNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PaymentComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ProductNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->StaffIDextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SearchByPIDtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->RefreshButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(12, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(239, 37);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Sales Page :::>>";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->UpdateButton);
			this->panel2->Controls->Add(this->ResetButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Location = System::Drawing::Point(20, 634);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 10;
			// 
			// DeleteButton
			// 
			this->DeleteButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteButton->ForeColor = System::Drawing::Color::White;
			this->DeleteButton->Location = System::Drawing::Point(419, 99);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(232, 65);
			this->DeleteButton->TabIndex = 7;
			this->DeleteButton->Text = L"Delete";
			this->DeleteButton->UseVisualStyleBackColor = false;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Sales::DeleteButton_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->UpdateButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateButton->ForeColor = System::Drawing::Color::White;
			this->UpdateButton->Location = System::Drawing::Point(35, 103);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(232, 65);
			this->UpdateButton->TabIndex = 6;
			this->UpdateButton->Text = L"Update";
			this->UpdateButton->UseVisualStyleBackColor = false;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Sales::UpdateButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetButton->ForeColor = System::Drawing::Color::White;
			this->ResetButton->Location = System::Drawing::Point(419, 15);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(232, 65);
			this->ResetButton->TabIndex = 5;
			this->ResetButton->Text = L"Reset";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &Sales::ResetButton_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveButton->ForeColor = System::Drawing::Color::White;
			this->SaveButton->Location = System::Drawing::Point(35, 15);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(232, 65);
			this->SaveButton->TabIndex = 4;
			this->SaveButton->Text = L"Save";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &Sales::SaveButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->ReftextBox);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->QuantitytextBox);
			this->panel1->Controls->Add(this->PatientIDTextBox);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->PatientNameTextBox);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->PaymentComboBox);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->ProductNameTextBox);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->StaffIDextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(19, 93);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 535);
			this->panel1->TabIndex = 9;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->Location = System::Drawing::Point(309, 57);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(342, 4);
			this->panel8->TabIndex = 34;
			// 
			// ReftextBox
			// 
			this->ReftextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ReftextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReftextBox->Location = System::Drawing::Point(309, 26);
			this->ReftextBox->Name = L"ReftextBox";
			this->ReftextBox->Size = System::Drawing::Size(342, 27);
			this->ReftextBox->TabIndex = 33;
			this->ReftextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(40, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 31);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Ref No";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(310, 282);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 31;
			// 
			// QuantitytextBox
			// 
			this->QuantitytextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->QuantitytextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuantitytextBox->Location = System::Drawing::Point(310, 251);
			this->QuantitytextBox->Name = L"QuantitytextBox";
			this->QuantitytextBox->Size = System::Drawing::Size(342, 27);
			this->QuantitytextBox->TabIndex = 30;
			this->QuantitytextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// PatientIDTextBox
			// 
			this->PatientIDTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PatientIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatientIDTextBox->Location = System::Drawing::Point(309, 474);
			this->PatientIDTextBox->Name = L"PatientIDTextBox";
			this->PatientIDTextBox->Size = System::Drawing::Size(342, 27);
			this->PatientIDTextBox->TabIndex = 29;
			this->PatientIDTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(309, 501);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 4);
			this->panel3->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 31);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Patient ID";
			// 
			// PatientNameTextBox
			// 
			this->PatientNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PatientNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatientNameTextBox->Location = System::Drawing::Point(310, 408);
			this->PatientNameTextBox->Name = L"PatientNameTextBox";
			this->PatientNameTextBox->Size = System::Drawing::Size(342, 27);
			this->PatientNameTextBox->TabIndex = 26;
			this->PatientNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(310, 435);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Patient Name";
			// 
			// PaymentComboBox
			// 
			this->PaymentComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaymentComboBox->FormattingEnabled = true;
			this->PaymentComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cash", L"Mobile", L"Bank" });
			this->PaymentComboBox->Location = System::Drawing::Point(309, 325);
			this->PaymentComboBox->Name = L"PaymentComboBox";
			this->PaymentComboBox->Size = System::Drawing::Size(342, 35);
			this->PaymentComboBox->TabIndex = 22;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(309, 363);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(342, 4);
			this->panel10->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 31);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Payment Method";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(309, 208);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 12;
			// 
			// ProductNameTextBox
			// 
			this->ProductNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProductNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductNameTextBox->Location = System::Drawing::Point(309, 177);
			this->ProductNameTextBox->Name = L"ProductNameTextBox";
			this->ProductNameTextBox->Size = System::Drawing::Size(342, 27);
			this->ProductNameTextBox->TabIndex = 11;
			this->ProductNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->Location = System::Drawing::Point(309, 127);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 4);
			this->panel5->TabIndex = 10;
			// 
			// StaffIDextBox
			// 
			this->StaffIDextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->StaffIDextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffIDextBox->Location = System::Drawing::Point(309, 96);
			this->StaffIDextBox->Name = L"StaffIDextBox";
			this->StaffIDextBox->Size = System::Drawing::Size(342, 27);
			this->StaffIDextBox->TabIndex = 9;
			this->StaffIDextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantity to sell";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Product Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Staff ID";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel9->Controls->Add(this->button2);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->SearchByPIDtextBox);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Location = System::Drawing::Point(724, 152);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1184, 72);
			this->panel9->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(942, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 46);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Sales::button2_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox9);
			this->panel11->Location = System::Drawing::Point(343, 52);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(542, 4);
			this->panel11->TabIndex = 13;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel12->Location = System::Drawing::Point(429, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(326, 4);
			this->panel12->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(207, -23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(177, 27);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Search By Name";
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(429, -33);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(326, 27);
			this->textBox9->TabIndex = 15;
			// 
			// SearchByPIDtextBox
			// 
			this->SearchByPIDtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchByPIDtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchByPIDtextBox->Location = System::Drawing::Point(343, 19);
			this->SearchByPIDtextBox->Name = L"SearchByPIDtextBox";
			this->SearchByPIDtextBox->Size = System::Drawing::Size(542, 27);
			this->SearchByPIDtextBox->TabIndex = 1;
			this->SearchByPIDtextBox->TextChanged += gcnew System::EventHandler(this, &Sales::SearchByPIDtextBox_TextChanged);
			this->SearchByPIDtextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Sales::SearchByPIDtextBox_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(15, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(267, 27);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Search By Product Name:";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Controls->Add(this->RefreshButton);
			this->panel16->Controls->Add(this->dataGridView1);
			this->panel16->Location = System::Drawing::Point(724, 224);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1184, 574);
			this->panel16->TabIndex = 12;
			// 
			// RefreshButton
			// 
			this->RefreshButton->BackColor = System::Drawing::Color::Transparent;
			this->RefreshButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefreshButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->RefreshButton->Location = System::Drawing::Point(838, 513);
			this->RefreshButton->Name = L"RefreshButton";
			this->RefreshButton->Size = System::Drawing::Size(324, 44);
			this->RefreshButton->TabIndex = 16;
			this->RefreshButton->Text = L"Not seeing what you want \? Click here !!";
			this->RefreshButton->UseVisualStyleBackColor = false;
			this->RefreshButton->Click += gcnew System::EventHandler(this, &Sales::RefreshButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1131, 434);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Sales::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Sales::dataGridView1_CellContentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(824, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(263, 37);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Recent sales :::>>";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1601, 814);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 54);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Sales::button1_Click);
			// 
			// Sales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1917, 880);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Sales";
			this->Text = L"Sales";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}







		private: System::Void PharmacyDB()
		{
			sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

			sqlConn->Open();

			sqlCmd->Connection = sqlConn;

			sqlCmd->CommandText = "SELECT * FROM sales ";

			sqlRd = sqlCmd->ExecuteReader();

			sqlDt -> Load(sqlRd);

			sqlRd->Close();

			sqlConn->Close();

			dataGridView1->DataSource = sqlDt;
		}


		


		private: System::Void RefreshDB() 
		{
			
			try
			{
				
				sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

				sqlCmd->Connection = sqlConn;


				MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM sales ", sqlConn );
				DataTable^ sqlDt = gcnew DataTable();

				sqlDtA->Fill(sqlDt);
				dataGridView1->DataSource = sqlDt;


					

			}


			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			

		}











#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	

		System::Windows::Forms::DialogResult Ifexit;

		Ifexit = MessageBox::Show("Are you sure you want to exit?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (Ifexit == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		};


	}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {

	try {

		ReftextBox->Text = "";
		StaffIDextBox->Text = "";
		ProductNameTextBox->Text = "";
		QuantitytextBox->Text = "";
		PaymentComboBox->Text = "";
		PatientNameTextBox->Text = "";
		PatientIDTextBox->Text = "";
		SearchByPIDtextBox->Text = "";
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}





}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		
	try {

		ReftextBox->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		StaffIDextBox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		ProductNameTextBox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		QuantitytextBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		PaymentComboBox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		PatientNameTextBox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		PatientIDTextBox->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



		


}
private: System::Void RefreshButton_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}


private: System::Void SearchByPIDtextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {


	try 

	{

		
		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("product_name like '%{0}%' ", SearchByPIDtextBox->Text );
			dataGridView1->DataSource = dv->ToTable();

		}


	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}




private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {



	try

	{
			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("product_name like '%{0}%' ", SearchByPIDtextBox->Text);
			dataGridView1->DataSource = dv->ToTable();


	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}



private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {



	sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

	sqlConn->Open();

	sqlCmd->Connection = sqlConn;



	try
	{


		sqlCmd->CommandText = "	insert into sales (RefNo, staff_id, product_name, quantity, payment_method, patient_name, patient_id) "  "values ('" + ReftextBox->Text + "' , '" + StaffIDextBox->Text + "' , '" + ProductNameTextBox->Text + "' , '" + QuantitytextBox->Text + "' , '" + PaymentComboBox->Text + "' , '" + PatientNameTextBox->Text + "' , '" + PatientIDTextBox->Text + "')";


			
		
		sqlCmd->ExecuteNonQuery();

		sqlConn->Close();

		PharmacyDB();

		RefreshDB();



	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}



private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {




}


private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{

		sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

		sqlCmd->Connection = sqlConn;


		String^ RefNo = ReftextBox->Text;
		String^ staff_id = StaffIDextBox->Text;
		String^ product_name = ProductNameTextBox->Text;
		String^ quantity = QuantitytextBox->Text;
		String^ payment_method = PaymentComboBox->Text;
		String^ patient_name = PatientNameTextBox->Text;
		String^ patient_id = PatientIDTextBox->Text;


		sqlCmd->CommandText = "	update sales set RefNo = '" + RefNo + "', staff_id = '" + staff_id + 
			"', product_name = '" + product_name + "', quantity = '" + quantity + "', payment_method = '" + payment_method + 
			"', patient_name = '" + patient_name + "', patient_id = '" + patient_id + "' WHERE RefNo = " + RefNo + "", sqlConn;
			
		
		sqlConn->Open();

		sqlCmd->ExecuteNonQuery();

		sqlConn->Close();

		PharmacyDB();

		RefreshDB();






	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {


	try 
	{
		sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

		sqlCmd->Connection = sqlConn;


		String^ RefNo = ReftextBox->Text;

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(" delete from sales where RefNo = " + RefNo + "", sqlConn);

		sqlConn->Open();

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Sale Deleted", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


		sqlConn->Close();


		



	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	RefreshDB();

	sqlConn->Close();


}
private: System::Void SearchByPIDtextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
