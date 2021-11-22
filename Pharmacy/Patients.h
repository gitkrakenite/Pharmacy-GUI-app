#pragma once



namespace Pharmacy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Patients
	/// </summary>
	public ref class Patients : public System::Windows::Forms::Form
	{
	public:
		Patients(void)
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel11->SuspendLayout();
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
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(53, 558);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 184);
			this->panel2->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(419, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(232, 65);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(35, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(232, 65);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(419, 15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(232, 65);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(35, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 65);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(53, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(679, 464);
			this->panel1->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(309, 269);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(340, 27);
			this->textBox6->TabIndex = 33;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Rather Not Say" });
			this->comboBox3->Location = System::Drawing::Point(309, 180);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(342, 35);
			this->comboBox3->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(310, 215);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 4);
			this->panel6->TabIndex = 31;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(309, 407);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(342, 27);
			this->textBox4->TabIndex = 29;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(309, 434);
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
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(310, 341);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(342, 27);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(310, 368);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 4);
			this->panel7->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(283, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Medication Frequency";
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
			this->label6->Location = System::Drawing::Point(21, 269);
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
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(309, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(342, 27);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->Location = System::Drawing::Point(309, 60);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 4);
			this->panel5->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(309, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 27);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 407);
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
			this->panel9->Controls->Add(this->textBox5);
			this->panel9->Controls->Add(this->panel13);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->textBox10);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Location = System::Drawing::Point(738, 88);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1184, 72);
			this->panel9->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(807, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(261, 27);
			this->textBox5->TabIndex = 17;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->label9);
			this->panel13->Controls->Add(this->textBox8);
			this->panel13->Location = System::Drawing::Point(807, 59);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(261, 4);
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
			this->label10->Location = System::Drawing::Point(589, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 27);
			this->label10->TabIndex = 14;
			this->label10->Text = L"By NHIF NO:";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox9);
			this->panel11->Location = System::Drawing::Point(278, 58);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(158, 4);
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
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(278, 25);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(158, 27);
			this->textBox10->TabIndex = 1;
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
			this->label13->Size = System::Drawing::Size(223, 27);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Search By Patient ID:";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Location = System::Drawing::Point(738, 161);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1184, 536);
			this->panel16->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1566, 703);
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
			this->ClientSize = System::Drawing::Size(1942, 763);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Patients";
			this->Text = L"Patients";
			this->Load += gcnew System::EventHandler(this, &Patients::Patients_Load);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		this->Close();


	}
private: System::Void Patients_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
