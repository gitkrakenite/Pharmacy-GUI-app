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
	/// Summary for Staff
	/// </summary>
	public ref class Staff : public System::Windows::Forms::Form
	{


		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::TextBox^ EmailTextBox;

	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ PhoneTextBox;

	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ SearchButton;



		MySqlDataReader^ sqlRd;


	public:
		Staff(void)
		{
			InitializeComponent();
			

			//Calling
			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Staff()
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
	private: System::Windows::Forms::ComboBox^ CategoryComboBox;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ SurnameTextBox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ RefTextBox;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NHIFTextBox;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ GenderComboBox;

	private: System::Windows::Forms::Panel^ panel9;













	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ SearchSurTextBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;

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
			this->EmailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->PhoneTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->NHIFTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->GenderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CategoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->SurnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->RefTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SearchSurTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(12, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(235, 37);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Staff Page :::>>";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->UpdateButton);
			this->panel2->Controls->Add(this->ResetButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Location = System::Drawing::Point(39, 668);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 7;
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
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Staff::DeleteButton_Click);
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
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Staff::UpdateButton_Click);
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
			this->ResetButton->Click += gcnew System::EventHandler(this, &Staff::ResetButton_Click);
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
			this->SaveButton->Click += gcnew System::EventHandler(this, &Staff::SaveButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->EmailTextBox);
			this->panel1->Controls->Add(this->panel17);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->PhoneTextBox);
			this->panel1->Controls->Add(this->panel16);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->NHIFTextBox);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->GenderComboBox);
			this->panel1->Controls->Add(this->CategoryComboBox);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->SurnameTextBox);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->RefTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(39, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 558);
			this->panel1->TabIndex = 6;
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailTextBox->Location = System::Drawing::Point(309, 512);
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(342, 27);
			this->EmailTextBox->TabIndex = 32;
			this->EmailTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel17->Location = System::Drawing::Point(309, 539);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(342, 4);
			this->panel17->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(40, 512);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 31);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Email";
			// 
			// PhoneTextBox
			// 
			this->PhoneTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PhoneTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhoneTextBox->Location = System::Drawing::Point(311, 425);
			this->PhoneTextBox->Name = L"PhoneTextBox";
			this->PhoneTextBox->Size = System::Drawing::Size(342, 27);
			this->PhoneTextBox->TabIndex = 29;
			this->PhoneTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel16->Location = System::Drawing::Point(311, 452);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(342, 4);
			this->panel16->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(42, 425);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 31);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Phone";
			// 
			// NHIFTextBox
			// 
			this->NHIFTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NHIFTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NHIFTextBox->Location = System::Drawing::Point(309, 350);
			this->NHIFTextBox->Name = L"NHIFTextBox";
			this->NHIFTextBox->Size = System::Drawing::Size(342, 27);
			this->NHIFTextBox->TabIndex = 26;
			this->NHIFTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(309, 377);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"NHIF NO";
			// 
			// GenderComboBox
			// 
			this->GenderComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenderComboBox->FormattingEnabled = true;
			this->GenderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Rather Not Say" });
			this->GenderComboBox->Location = System::Drawing::Point(309, 180);
			this->GenderComboBox->Name = L"GenderComboBox";
			this->GenderComboBox->Size = System::Drawing::Size(342, 35);
			this->GenderComboBox->TabIndex = 23;
			// 
			// CategoryComboBox
			// 
			this->CategoryComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CategoryComboBox->FormattingEnabled = true;
			this->CategoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Medical", L"Non-Medical" });
			this->CategoryComboBox->Location = System::Drawing::Point(309, 258);
			this->CategoryComboBox->Name = L"CategoryComboBox";
			this->CategoryComboBox->Size = System::Drawing::Size(342, 35);
			this->CategoryComboBox->TabIndex = 22;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(309, 296);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(342, 4);
			this->panel10->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 31);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Category";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(309, 215);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 14;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(309, 141);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 12;
			// 
			// SurnameTextBox
			// 
			this->SurnameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SurnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SurnameTextBox->Location = System::Drawing::Point(309, 110);
			this->SurnameTextBox->Name = L"SurnameTextBox";
			this->SurnameTextBox->Size = System::Drawing::Size(342, 27);
			this->SurnameTextBox->TabIndex = 11;
			this->SurnameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->label3->Location = System::Drawing::Point(40, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Gender";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Staff Surname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Staff ID";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel9->Controls->Add(this->SearchButton);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->SearchSurTextBox);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Location = System::Drawing::Point(724, 104);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1257, 72);
			this->panel9->TabIndex = 11;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::White;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SearchButton->Location = System::Drawing::Point(957, 15);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(218, 48);
			this->SearchButton->TabIndex = 24;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &Staff::SearchButton_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox7);
			this->panel11->Location = System::Drawing::Point(272, 51);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(669, 4);
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
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(429, -33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(326, 27);
			this->textBox7->TabIndex = 15;
			// 
			// SearchSurTextBox
			// 
			this->SearchSurTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchSurTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchSurTextBox->Location = System::Drawing::Point(272, 18);
			this->SearchSurTextBox->Name = L"SearchSurTextBox";
			this->SearchSurTextBox->Size = System::Drawing::Size(669, 27);
			this->SearchSurTextBox->TabIndex = 1;
			this->SearchSurTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Staff::SearchSurTextBox_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(15, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(212, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Search By Surname:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1696, 856);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 54);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Staff::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Location = System::Drawing::Point(724, 178);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1257, 672);
			this->panel3->TabIndex = 9;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(896, 568);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(342, 54);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Not seeing something \? ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Staff::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1237, 505);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Staff::dataGridView1_CellClick);
			// 
			// Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(2022, 922);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Staff";
			this->Text = L"Staff";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Staff::Staff_Load);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



		private: System::Void PharmacyDB()
		{
			sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

			sqlConn->Open();

			sqlCmd->Connection = sqlConn;

			sqlCmd->CommandText = "SELECT * FROM staff ";

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


				MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM staff ", sqlConn);
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
private: System::Void Staff_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {




	try {

		RefTextBox->Text = "";
		SurnameTextBox->Text = "";
		GenderComboBox->Text = "";
		CategoryComboBox->Text = "";
		NHIFTextBox->Text = "";
		PhoneTextBox->Text = "";
		EmailTextBox->Text = "";
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}




}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



	try {

		RefTextBox->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		SurnameTextBox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		GenderComboBox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		CategoryComboBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		NHIFTextBox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		PhoneTextBox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		EmailTextBox->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}







}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}
private: System::Void SearchSurTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {


	try

	{


		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("surname like '%{0}%' ", SurnameTextBox->Text);
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

		dv->RowFilter = String::Format("surname like '%{0}%' ", SearchSurTextBox->Text);
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


		sqlCmd->CommandText = "	insert into staff (RefNo, surname, gender, category, nhif_no, phone, email) "  "values ('" + RefTextBox->Text + "' , '" + SurnameTextBox->Text + "' , '" + GenderComboBox->Text + "' , '" + CategoryComboBox->Text + "' , '" + NHIFTextBox->Text + "' , '" + PhoneTextBox->Text + "' , '" + EmailTextBox->Text + "')";




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
		String^ surname = SurnameTextBox->Text;
		String^ gender = GenderComboBox->Text;
		String^ category = CategoryComboBox->Text;
		String^ nhif_no = NHIFTextBox->Text;
		String^ phone = PhoneTextBox->Text;
		String^ email = EmailTextBox->Text;


		sqlCmd->CommandText = "	update staff set RefNo = '" + RefNo + "', surname = '" + surname +
			"', gender = '" + gender + "', category = '" + category + "', nhif_no = '" + nhif_no +
			"', phone = '" + phone + "', email = '" + email + "' WHERE RefNo = " + RefNo + "", sqlConn;


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


		String^ RefNo = RefTextBox->Text;

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(" delete from staff where RefNo = " + RefNo + "", sqlConn);

		sqlConn->Open();

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Staff Deleted", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


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
