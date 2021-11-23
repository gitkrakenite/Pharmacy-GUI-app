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
	/// Summary for Patients
	/// </summary>
	public ref class Patients : public System::Windows::Forms::Form
	{

		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ button2;

		MySqlDataReader^ sqlRd;

	public:
		Patients(void)
		{
			InitializeComponent();
			

			//Calling
			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patients()
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
	private: System::Windows::Forms::TextBox^ NHIFTextBox;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ MedicationtextBox;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ PatientSurTextBox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ RefTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;






	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::ComboBox^ GendercomboBox;

	private: System::Windows::Forms::TextBox^ SearchTextBox;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ AilmenttextBox;

	private: System::Windows::Forms::Button^ SearchButton;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ PCTextBox;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label7;

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
			this->PCTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AilmenttextBox = (gcnew System::Windows::Forms::TextBox());
			this->GendercomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->NHIFTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->MedicationtextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->PatientSurTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->RefTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->SearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel13->SuspendLayout();
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
			this->label11->Location = System::Drawing::Point(26, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(291, 37);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Patient\'s Page :::>>";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->UpdateButton);
			this->panel2->Controls->Add(this->ResetButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Location = System::Drawing::Point(53, 623);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 13;
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
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Patients::DeleteButton_Click);
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
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Patients::UpdateButton_Click);
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
			this->ResetButton->Click += gcnew System::EventHandler(this, &Patients::ResetButton_Click);
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
			this->SaveButton->Click += gcnew System::EventHandler(this, &Patients::SaveButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->PCTextBox);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->AilmenttextBox);
			this->panel1->Controls->Add(this->GendercomboBox);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->NHIFTextBox);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->MedicationtextBox);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->PatientSurTextBox);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->RefTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(53, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 529);
			this->panel1->TabIndex = 12;
			// 
			// PCTextBox
			// 
			this->PCTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PCTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PCTextBox->Location = System::Drawing::Point(309, 462);
			this->PCTextBox->Name = L"PCTextBox";
			this->PCTextBox->Size = System::Drawing::Size(342, 27);
			this->PCTextBox->TabIndex = 36;
			this->PCTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->Location = System::Drawing::Point(309, 489);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(342, 4);
			this->panel8->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 462);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 31);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Patient Contact";
			// 
			// AilmenttextBox
			// 
			this->AilmenttextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AilmenttextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AilmenttextBox->Location = System::Drawing::Point(309, 259);
			this->AilmenttextBox->Name = L"AilmenttextBox";
			this->AilmenttextBox->Size = System::Drawing::Size(340, 27);
			this->AilmenttextBox->TabIndex = 33;
			this->AilmenttextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GendercomboBox
			// 
			this->GendercomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GendercomboBox->FormattingEnabled = true;
			this->GendercomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Rather Not Say" });
			this->GendercomboBox->Location = System::Drawing::Point(309, 180);
			this->GendercomboBox->Name = L"GendercomboBox";
			this->GendercomboBox->Size = System::Drawing::Size(342, 35);
			this->GendercomboBox->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(310, 215);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 31;
			// 
			// NHIFTextBox
			// 
			this->NHIFTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NHIFTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NHIFTextBox->Location = System::Drawing::Point(309, 397);
			this->NHIFTextBox->Name = L"NHIFTextBox";
			this->NHIFTextBox->Size = System::Drawing::Size(342, 27);
			this->NHIFTextBox->TabIndex = 29;
			this->NHIFTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(309, 424);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 4);
			this->panel3->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 31);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Gender";
			// 
			// MedicationtextBox
			// 
			this->MedicationtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MedicationtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MedicationtextBox->Location = System::Drawing::Point(310, 331);
			this->MedicationtextBox->Name = L"MedicationtextBox";
			this->MedicationtextBox->Size = System::Drawing::Size(342, 27);
			this->MedicationtextBox->TabIndex = 26;
			this->MedicationtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(310, 358);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Medication";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(309, 286);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(342, 4);
			this->panel10->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 31);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Ailment";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(309, 141);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 12;
			// 
			// PatientSurTextBox
			// 
			this->PatientSurTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PatientSurTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PatientSurTextBox->Location = System::Drawing::Point(309, 110);
			this->PatientSurTextBox->Name = L"PatientSurTextBox";
			this->PatientSurTextBox->Size = System::Drawing::Size(342, 27);
			this->PatientSurTextBox->TabIndex = 11;
			this->PatientSurTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->Location = System::Drawing::Point(309, 60);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 4);
			this->panel5->TabIndex = 10;
			// 
			// RefTextBox
			// 
			this->RefTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RefTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefTextBox->Location = System::Drawing::Point(309, 29);
			this->RefTextBox->Name = L"RefTextBox";
			this->RefTextBox->Size = System::Drawing::Size(342, 27);
			this->RefTextBox->TabIndex = 9;
			this->RefTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"NHIF Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Patient Surname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Patient ID";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel9->Controls->Add(this->SearchButton);
			this->panel9->Controls->Add(this->SearchTextBox);
			this->panel9->Controls->Add(this->panel13);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(738, 88);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1184, 72);
			this->panel9->TabIndex = 16;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::White;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SearchButton->Location = System::Drawing::Point(959, 9);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(206, 54);
			this->SearchButton->TabIndex = 18;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &Patients::SearchButton_Click);
			// 
			// SearchTextBox
			// 
			this->SearchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTextBox->Location = System::Drawing::Point(331, 23);
			this->SearchTextBox->Name = L"SearchTextBox";
			this->SearchTextBox->Size = System::Drawing::Size(570, 27);
			this->SearchTextBox->TabIndex = 17;
			this->SearchTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Patients::SearchTextBox_KeyPress);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->label9);
			this->panel13->Controls->Add(this->textBox8);
			this->panel13->Location = System::Drawing::Point(331, 53);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(570, 4);
			this->panel13->TabIndex = 16;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel14->Location = System::Drawing::Point(429, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(326, 4);
			this->panel14->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(207, -23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 27);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Search By Name";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(429, -33);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(326, 27);
			this->textBox8->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(43, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(212, 27);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Search By Surname:";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Controls->Add(this->button2);
			this->panel16->Controls->Add(this->dataGridView1);
			this->panel16->Location = System::Drawing::Point(738, 161);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1184, 619);
			this->panel16->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(760, 559);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(399, 39);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Not seeing something \? ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Patients::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1145, 522);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Patients::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1588, 786);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 54);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Patients::button1_Click);
			// 
			// Patients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1942, 852);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Patients";
			this->Text = L"Patients";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Patients::Patients_Load);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
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

			sqlCmd->CommandText = "SELECT * FROM patients ";

			sqlRd = sqlCmd->ExecuteReader();

			sqlDt->Load(sqlRd);

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


				MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM patients ", sqlConn);
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
private: System::Void Patients_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{
		RefTextBox->Text = "";
		PatientSurTextBox->Text = "";
		GendercomboBox->Text = "";
		AilmenttextBox->Text = "";
		MedicationtextBox->Text = "";
		NHIFTextBox->Text = "";
		PCTextBox->Text = "";
		SearchTextBox->Text = "";
	}

	

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



	try {

		RefTextBox->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		PatientSurTextBox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		GendercomboBox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		AilmenttextBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		MedicationtextBox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		NHIFTextBox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		PCTextBox->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void SearchTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try

	{


		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("patient_surname like '%{0}%' ", SearchTextBox->Text);
			dataGridView1->DataSource = dv->ToTable();

		}


	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {


	try

	{
		DataView^ dv = sqlDt->DefaultView;

		dv->RowFilter = String::Format("patient_surname like '%{0}%' ", SearchTextBox->Text);
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


		sqlCmd->CommandText = "	insert into patients (RefNo, patient_surname, gender, ailment, medication, nhif_no, patient_contact) "  "values ('" + RefTextBox->Text + "' , '" + PatientSurTextBox->Text + "' , '" + GendercomboBox->Text + "' , '" + AilmenttextBox->Text + "' , '" + MedicationtextBox->Text + "' , '" + NHIFTextBox->Text + "' , '" + PCTextBox->Text + "')";




		sqlCmd->ExecuteNonQuery();

		sqlConn->Close();

		PharmacyDB();

		RefreshDB();



	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}




}
private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e) {


	try
	{

		sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

		sqlCmd->Connection = sqlConn;


		String^ RefNo = RefTextBox->Text;
		String^ patient_surname = PatientSurTextBox->Text;
		String^ gender = GendercomboBox->Text;
		String^ ailment = AilmenttextBox->Text;
		String^ medication = MedicationtextBox->Text;
		String^ nhif_no = NHIFTextBox->Text;
		String^ patient_contact = PCTextBox->Text;


		sqlCmd->CommandText = "	update patients set RefNo = '" + RefNo + "', patient_surname = '" + patient_surname +
			"', gender = '" + gender + "', ailment = '" + ailment + "', medication = '" + medication +
			"', nhif_no = '" + nhif_no + "', patient_contact = '" + patient_contact + "' WHERE RefNo = " + RefNo + "", sqlConn;


		sqlConn->Open();

		sqlCmd->ExecuteNonQuery();

		sqlConn->Close();

		PharmacyDB();

		RefreshDB();

		sqlConn->Close();






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


		String^ RefNo = RefTextBox->Text;

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(" delete from patients where RefNo = " + RefNo + "", sqlConn);

		sqlConn->Open();

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Patient Removed", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


		sqlConn->Close();



	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	RefreshDB();

	sqlConn->Close();

}
};
}
