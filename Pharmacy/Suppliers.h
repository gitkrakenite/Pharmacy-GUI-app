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
	/// Summary for Suppliers
	/// </summary>
	public ref class Suppliers : public System::Windows::Forms::Form
	{



		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

		MySqlDataReader^ sqlRd;



	public:
		Suppliers(void)
		{
			InitializeComponent();
			

			//Calling
			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Suppliers()
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



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ AmountTextBox;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ NameTextBox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ RefTextBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ MobileACTextBox;

	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ BankACTextBox1;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ProducTextBox;

	private: System::Windows::Forms::Panel^ panel9;






	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ SearchTextBox;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ BPTextBox;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ContactTextBox;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ SearchButton;

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
			this->BPTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ContactTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MobileACTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->BankACTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ProducTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->RefTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SearchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->label11->Location = System::Drawing::Point(20, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(308, 37);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Supplier\'s Page :::>>";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->UpdateButton);
			this->panel2->Controls->Add(this->ResetButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Location = System::Drawing::Point(23, 716);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 16;
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
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Suppliers::DeleteButton_Click);
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
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Suppliers::UpdateButton_Click);
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
			this->ResetButton->Click += gcnew System::EventHandler(this, &Suppliers::ResetButton_Click);
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
			this->SaveButton->Click += gcnew System::EventHandler(this, &Suppliers::SaveButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->BPTextBox);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->ContactTextBox);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->MobileACTextBox);
			this->panel1->Controls->Add(this->panel15);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->BankACTextBox1);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->ProducTextBox);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->AmountTextBox);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->NameTextBox);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->RefTextBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(23, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(737, 602);
			this->panel1->TabIndex = 15;
			// 
			// BPTextBox
			// 
			this->BPTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BPTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BPTextBox->Location = System::Drawing::Point(341, 317);
			this->BPTextBox->Name = L"BPTextBox";
			this->BPTextBox->Size = System::Drawing::Size(340, 27);
			this->BPTextBox->TabIndex = 46;
			this->BPTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(341, 344);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 4);
			this->panel3->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 313);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(311, 31);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Total Buying Price (Ksh.)";
			// 
			// ContactTextBox
			// 
			this->ContactTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ContactTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ContactTextBox->Location = System::Drawing::Point(308, 399);
			this->ContactTextBox->Name = L"ContactTextBox";
			this->ContactTextBox->Size = System::Drawing::Size(340, 27);
			this->ContactTextBox->TabIndex = 43;
			this->ContactTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(308, 426);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(342, 4);
			this->panel10->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 395);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 31);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Contact Info";
			// 
			// MobileACTextBox
			// 
			this->MobileACTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MobileACTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MobileACTextBox->Location = System::Drawing::Point(308, 535);
			this->MobileACTextBox->Name = L"MobileACTextBox";
			this->MobileACTextBox->Size = System::Drawing::Size(342, 27);
			this->MobileACTextBox->TabIndex = 40;
			this->MobileACTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel15->Location = System::Drawing::Point(308, 562);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(342, 4);
			this->panel15->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(20, 535);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(248, 31);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Mobile A/C  Details";
			// 
			// BankACTextBox1
			// 
			this->BankACTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BankACTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BankACTextBox1->Location = System::Drawing::Point(309, 459);
			this->BankACTextBox1->Name = L"BankACTextBox1";
			this->BankACTextBox1->Size = System::Drawing::Size(342, 27);
			this->BankACTextBox1->TabIndex = 37;
			this->BankACTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->Location = System::Drawing::Point(309, 486);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(342, 4);
			this->panel8->TabIndex = 36;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 459);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 31);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Bank A/C  Details";
			// 
			// ProducTextBox
			// 
			this->ProducTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProducTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProducTextBox->Location = System::Drawing::Point(311, 159);
			this->ProducTextBox->Name = L"ProducTextBox";
			this->ProducTextBox->Size = System::Drawing::Size(340, 27);
			this->ProducTextBox->TabIndex = 34;
			this->ProducTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(309, 192);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 31);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Product";
			// 
			// AmountTextBox
			// 
			this->AmountTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AmountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AmountTextBox->Location = System::Drawing::Point(311, 241);
			this->AmountTextBox->Name = L"AmountTextBox";
			this->AmountTextBox->Size = System::Drawing::Size(342, 27);
			this->AmountTextBox->TabIndex = 26;
			this->AmountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(311, 268);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Amount in packets";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(309, 125);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 12;
			// 
			// NameTextBox
			// 
			this->NameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextBox->Location = System::Drawing::Point(309, 94);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(342, 27);
			this->NameTextBox->TabIndex = 11;
			this->NameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->Location = System::Drawing::Point(309, 59);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 4);
			this->panel5->TabIndex = 10;
			// 
			// RefTextBox
			// 
			this->RefTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RefTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefTextBox->Location = System::Drawing::Point(309, 28);
			this->RefTextBox->Name = L"RefTextBox";
			this->RefTextBox->Size = System::Drawing::Size(342, 27);
			this->RefTextBox->TabIndex = 9;
			this->RefTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Company Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Supplier ID";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel9->Controls->Add(this->SearchButton);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->SearchTextBox);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Location = System::Drawing::Point(766, 108);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1123, 72);
			this->panel9->TabIndex = 19;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::DarkSlateGray;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SearchButton->Location = System::Drawing::Point(953, 14);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(194, 51);
			this->SearchButton->TabIndex = 21;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &Suppliers::SearchButton_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox9);
			this->panel11->Location = System::Drawing::Point(323, 56);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(617, 4);
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
			// SearchTextBox
			// 
			this->SearchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTextBox->Location = System::Drawing::Point(323, 23);
			this->SearchTextBox->Name = L"SearchTextBox";
			this->SearchTextBox->Size = System::Drawing::Size(617, 27);
			this->SearchTextBox->TabIndex = 1;
			this->SearchTextBox->TextChanged += gcnew System::EventHandler(this, &Suppliers::SearchTextBox_TextChanged);
			this->SearchTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Suppliers::SearchTextBox_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(9, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(284, 27);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Search By Company Name:";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Controls->Add(this->dataGridView1);
			this->panel16->Controls->Add(this->button6);
			this->panel16->Location = System::Drawing::Point(766, 181);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1123, 719);
			this->panel16->TabIndex = 18;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 16);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1150, 636);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Suppliers::dataGridView1_CellClick);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(622, 658);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(557, 45);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Not finding something\?";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Suppliers::button6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(1590, 915);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 61);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Suppliers::button1_Click);
			// 
			// Suppliers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1914, 997);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Suppliers";
			this->Text = L"Suppliers";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Suppliers::Suppliers_Load);
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

			sqlCmd->CommandText = "SELECT * FROM supplier ";

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


				MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM supplier ", sqlConn);
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

		try {
			Ifexit = MessageBox::Show("Are you sure you want to exit?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (Ifexit == System::Windows::Forms::DialogResult::Yes) {
				this->Close();
			};
		}

		catch (Exception^ ex) {
			MessageBox::Show( ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		
	}
private: System::Void Suppliers_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {



	try {

		RefTextBox->Text = "";
		NameTextBox->Text = "";
		ProducTextBox->Text = "";
		AmountTextBox->Text = "";
		BPTextBox->Text = "";
		ContactTextBox->Text = "";
		BankACTextBox1->Text = "";
		MobileACTextBox->Text = "";
		SearchTextBox->Text = "";
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	try {

		RefTextBox->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		NameTextBox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		ProducTextBox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		AmountTextBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		BPTextBox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		ContactTextBox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		BankACTextBox1->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		MobileACTextBox->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}




}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}
private: System::Void SearchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void SearchTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {


	try

	{


		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("company_name like '%{0}%' ", SearchTextBox->Text);
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

		dv->RowFilter = String::Format("company_name like '%{0}%' ", SearchTextBox->Text);
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


		sqlCmd->CommandText = "	insert into supplier (RefNo, company_name, product, amount, buying_price, contact_info, bank_details, mobile_details) "  "values ('" + RefTextBox->Text + "' , '" + NameTextBox->Text + "' , '" + ProducTextBox->Text + "' , '" + AmountTextBox->Text + "' , '" + BPTextBox->Text + "' , '" + ContactTextBox->Text + "' , '" + BankACTextBox1->Text + "', '" + MobileACTextBox->Text + "')";




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
		String^ company_name = NameTextBox->Text;
		String^ product = ProducTextBox->Text;
		String^ amount = AmountTextBox->Text;
		String^ buying_price = BPTextBox->Text;
		String^ contact_info = ContactTextBox->Text;
		String^ bank_details = BankACTextBox1->Text;
		String^ mobile_details = MobileACTextBox->Text;


		sqlCmd->CommandText = "	update supplier set RefNo = '" + RefNo + "', company_name = '" + company_name +
			"', product = '" + product + "', amount = '" + amount + "', buying_price = '" + buying_price +
			"', contact_info = '" + contact_info + "', bank_details = '" + bank_details + "', mobile_details = '" + mobile_details + "' WHERE RefNo = " + RefNo + "", sqlConn;


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

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(" delete from supplier where RefNo = " + RefNo + "", sqlConn);

		sqlConn->Open();

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Supplier Deleted", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


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
