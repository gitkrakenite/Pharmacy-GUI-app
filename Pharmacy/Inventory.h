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




	public ref class Inventory : public System::Windows::Forms::Form
	{


		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ SNtextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ SCtextBox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Button^ button2;


		MySqlDataReader^ sqlRd;




	public:
		Inventory(void)
		{
			InitializeComponent();
			

			//Calling
			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Inventory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ DeleteButton;

	private: System::Windows::Forms::Button^ UpdateButton;

	private: System::Windows::Forms::Button^ ResetButton;

	private: System::Windows::Forms::Button^ SaveButton;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ CategorycomboBox;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ SPtextBox;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ BPtextBox;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ProductNametextBox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ RefTextBox;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ SearchtextBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;






	private: System::Windows::Forms::Label^ label11;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->SNtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->SCtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->CategorycomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SPtextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->BPtextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ProductNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->RefTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SearchtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->SNtextBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel15);
			this->panel1->Controls->Add(this->SCtextBox);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->CategorycomboBox);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->SPtextBox);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->BPtextBox);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->ProductNametextBox);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->RefTextBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(39, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 536);
			this->panel1->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->Location = System::Drawing::Point(305, 441);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(342, 4);
			this->panel8->TabIndex = 28;
			// 
			// SNtextBox
			// 
			this->SNtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SNtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNtextBox->Location = System::Drawing::Point(305, 410);
			this->SNtextBox->Name = L"SNtextBox";
			this->SNtextBox->Size = System::Drawing::Size(342, 27);
			this->SNtextBox->TabIndex = 27;
			this->SNtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 31);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Supplier Name";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel15->Location = System::Drawing::Point(304, 504);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(342, 4);
			this->panel15->TabIndex = 25;
			// 
			// SCtextBox
			// 
			this->SCtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SCtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SCtextBox->Location = System::Drawing::Point(304, 473);
			this->SCtextBox->Name = L"SCtextBox";
			this->SCtextBox->Size = System::Drawing::Size(342, 27);
			this->SCtextBox->TabIndex = 24;
			this->SCtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(40, 477);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(215, 31);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Supplier Contact";
			// 
			// CategorycomboBox
			// 
			this->CategorycomboBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CategorycomboBox->FormattingEnabled = true;
			this->CategorycomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Medical", L"Non-Medical" });
			this->CategorycomboBox->Location = System::Drawing::Point(309, 327);
			this->CategorycomboBox->Name = L"CategorycomboBox";
			this->CategorycomboBox->Size = System::Drawing::Size(342, 35);
			this->CategorycomboBox->TabIndex = 22;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(309, 365);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(342, 4);
			this->panel10->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 31);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Category";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(309, 282);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 16;
			// 
			// SPtextBox
			// 
			this->SPtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SPtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SPtextBox->Location = System::Drawing::Point(309, 251);
			this->SPtextBox->Name = L"SPtextBox";
			this->SPtextBox->Size = System::Drawing::Size(342, 27);
			this->SPtextBox->TabIndex = 15;
			this->SPtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(309, 215);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 14;
			// 
			// BPtextBox
			// 
			this->BPtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BPtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BPtextBox->Location = System::Drawing::Point(309, 184);
			this->BPtextBox->Name = L"BPtextBox";
			this->BPtextBox->Size = System::Drawing::Size(342, 27);
			this->BPtextBox->TabIndex = 13;
			this->BPtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(309, 141);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 12;
			// 
			// ProductNametextBox
			// 
			this->ProductNametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProductNametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductNametextBox->Location = System::Drawing::Point(309, 110);
			this->ProductNametextBox->Name = L"ProductNametextBox";
			this->ProductNametextBox->Size = System::Drawing::Size(342, 27);
			this->ProductNametextBox->TabIndex = 11;
			this->ProductNametextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Selling Price";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Buying Price";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 111);
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
			this->label1->Location = System::Drawing::Point(40, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product ID";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->UpdateButton);
			this->panel2->Controls->Add(this->ResetButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Location = System::Drawing::Point(39, 613);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 1;
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
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Inventory::DeleteButton_Click);
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
			this->UpdateButton->Click += gcnew System::EventHandler(this, &Inventory::UpdateButton_Click);
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
			this->ResetButton->Click += gcnew System::EventHandler(this, &Inventory::ResetButton_Click);
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
			this->SaveButton->Click += gcnew System::EventHandler(this, &Inventory::SaveButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Location = System::Drawing::Point(724, 143);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1036, 594);
			this->panel3->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(589, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(418, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Not seeing what you want\?";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inventory::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(998, 487);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Inventory::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1446, 743);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inventory::button1_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel9->Controls->Add(this->SearchButton);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->SearchtextBox);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Location = System::Drawing::Point(724, 69);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1036, 72);
			this->panel9->TabIndex = 4;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Inventory::panel9_Paint);
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::White;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->SearchButton->Location = System::Drawing::Point(820, 8);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(198, 54);
			this->SearchButton->TabIndex = 14;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &Inventory::SearchButton_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox7);
			this->panel11->Location = System::Drawing::Point(242, 51);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(513, 4);
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
			// SearchtextBox
			// 
			this->SearchtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SearchtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchtextBox->Location = System::Drawing::Point(242, 18);
			this->SearchtextBox->Name = L"SearchtextBox";
			this->SearchtextBox->Size = System::Drawing::Size(513, 27);
			this->SearchtextBox->TabIndex = 1;
			this->SearchtextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Inventory::SearchtextBox_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(20, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Search By Name:";
			this->label7->Click += gcnew System::EventHandler(this, &Inventory::label7_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(12, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(303, 37);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Inventory Page :::>>";
			// 
			// Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1772, 844);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Inventory";
			this->Text = L"Inventory";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}




		private: System::Void PharmacyDB()
		{
			sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

			sqlConn->Open();

			sqlCmd->Connection = sqlConn;

			sqlCmd->CommandText = "SELECT * FROM inventory ";

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


				MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM inventory ", sqlConn);
				DataTable^ sqlDt = gcnew DataTable();

				sqlDtA->Fill(sqlDt);
				dataGridView1->DataSource = sqlDt;




			}


			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}


		}






#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult Ifexit;

	Ifexit = MessageBox::Show("Are you sure you want to exit?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (Ifexit == System::Windows::Forms::DialogResult::Yes) {
		this->Close();
	};

}



private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {

	try {

		RefTextBox->Text = "";
		ProductNametextBox->Text = "";
		BPtextBox->Text = "";
		SPtextBox->Text = "";
		CategorycomboBox->Text = "";
		SNtextBox->Text = "";
		SCtextBox->Text = "";
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}


private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	try {

		RefTextBox->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		ProductNametextBox->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		BPtextBox->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		SPtextBox->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		CategorycomboBox->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		SNtextBox->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		SCtextBox->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	RefreshDB();
}
private: System::Void SearchtextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try

	{


		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("product_name like '%{0}%' ", SearchtextBox->Text);
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

		dv->RowFilter = String::Format("product_name like '%{0}%' ", SearchtextBox->Text);
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


		sqlCmd->CommandText = "	insert into inventory (RefNo, product_name, buying_price, selling_price, category, supplier_name, supplier_contact) "  "values ('" + RefTextBox->Text + "' , '" + ProductNametextBox->Text + "' , '" + BPtextBox->Text + "' , '" + SPtextBox->Text + "' , '" + CategorycomboBox->Text + "' , '" + SNtextBox->Text + "' , '" + SCtextBox->Text + "')";


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
		String^ product_name = ProductNametextBox->Text;
		String^ buying_price = BPtextBox->Text;
		String^ selling_price = SPtextBox->Text;
		String^ category = CategorycomboBox->Text;
		String^ supplier_name = SNtextBox->Text;
		String^ supplier_contact = SCtextBox->Text;


		sqlCmd->CommandText = "	update inventory set RefNo = '" + RefNo + "', product_name = '" + product_name +
			"', buying_price = '" + buying_price + "', selling_price = '" + selling_price + "', category = '" + category +
			"', supplier_name = '" + supplier_name + "', supplier_contact = '" + supplier_contact + "' WHERE RefNo = " + RefNo + "", sqlConn;


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

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(" delete from inventory where RefNo = " + RefNo + "", sqlConn);

		sqlConn->Open();

		sqlRd = sqlCmd->ExecuteReader();

		MessageBox::Show("Item Deleted succesfully", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


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
