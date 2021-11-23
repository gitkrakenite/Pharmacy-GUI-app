#pragma once




#include "Patients.h";
#include "Sales.h";
#include "Staff.h";
#include "Suppliers.h";
#include "Reports.h";
#include "Inventory.h";
#include "Calculator.h"


namespace Pharmacy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Landingpage
	/// </summary>
	public ref class Landingpage : public System::Windows::Forms::Form
	{
	public:
		Landingpage(void)
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
		~Landingpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inventoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addStaffToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ patientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactDevToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToAddPatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToCreateSalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToAddStockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ howToAddPatientsToolStripMenuItem;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::ComboBox^ comboBox12;
	private: System::Windows::Forms::ComboBox^ comboBox13;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Landingpage::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addStaffToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->patientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactDevToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToAddPatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToCreateSalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToAddStockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToAddPatientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->calculatorToolStripMenuItem, this->contactDevToolStripMenuItem, this->logOutToolStripMenuItem, this->howToToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAllToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(52, 27);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->inventoryToolStripMenuItem,
					this->addStaffToolStripMenuItem, this->salesToolStripMenuItem, this->patientsToolStripMenuItem, this->reportsToolStripMenuItem,
					this->reportsToolStripMenuItem1
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// inventoryToolStripMenuItem
			// 
			this->inventoryToolStripMenuItem->Name = L"inventoryToolStripMenuItem";
			this->inventoryToolStripMenuItem->Size = System::Drawing::Size(173, 28);
			this->inventoryToolStripMenuItem->Text = L"Inventory";
			this->inventoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::inventoryToolStripMenuItem_Click);
			// 
			// addStaffToolStripMenuItem
			// 
			this->addStaffToolStripMenuItem->Name = L"addStaffToolStripMenuItem";
			this->addStaffToolStripMenuItem->Size = System::Drawing::Size(173, 28);
			this->addStaffToolStripMenuItem->Text = L"Add Staff";
			this->addStaffToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::addStaffToolStripMenuItem_Click);
			// 
			// salesToolStripMenuItem
			// 
			this->salesToolStripMenuItem->Name = L"salesToolStripMenuItem";
			this->salesToolStripMenuItem->Size = System::Drawing::Size(173, 28);
			this->salesToolStripMenuItem->Text = L"Sales";
			this->salesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::salesToolStripMenuItem_Click);
			// 
			// patientsToolStripMenuItem
			// 
			this->patientsToolStripMenuItem->Name = L"patientsToolStripMenuItem";
			this->patientsToolStripMenuItem->Size = System::Drawing::Size(173, 28);
			this->patientsToolStripMenuItem->Text = L"Patients";
			this->patientsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::patientsToolStripMenuItem_Click);
			// 
			// reportsToolStripMenuItem
			// 
			this->reportsToolStripMenuItem->Name = L"reportsToolStripMenuItem";
			this->reportsToolStripMenuItem->Size = System::Drawing::Size(173, 28);
			this->reportsToolStripMenuItem->Text = L"Suppliers";
			this->reportsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::reportsToolStripMenuItem_Click);
			// 
			// reportsToolStripMenuItem1
			// 
			this->reportsToolStripMenuItem1->Name = L"reportsToolStripMenuItem1";
			this->reportsToolStripMenuItem1->Size = System::Drawing::Size(173, 28);
			this->reportsToolStripMenuItem1->Text = L"Reports";
			this->reportsToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Landingpage::reportsToolStripMenuItem1_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAllToolStripMenuItem
			// 
			this->saveAllToolStripMenuItem->Name = L"saveAllToolStripMenuItem";
			this->saveAllToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->saveAllToolStripMenuItem->Text = L"Save all";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->closeToolStripMenuItem->Text = L"Close";
			// 
			// calculatorToolStripMenuItem
			// 
			this->calculatorToolStripMenuItem->Name = L"calculatorToolStripMenuItem";
			this->calculatorToolStripMenuItem->Size = System::Drawing::Size(105, 27);
			this->calculatorToolStripMenuItem->Text = L"Calculator";
			this->calculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::calculatorToolStripMenuItem_Click);
			// 
			// contactDevToolStripMenuItem
			// 
			this->contactDevToolStripMenuItem->Name = L"contactDevToolStripMenuItem";
			this->contactDevToolStripMenuItem->Size = System::Drawing::Size(122, 27);
			this->contactDevToolStripMenuItem->Text = L"Contact Dev";
			this->contactDevToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::contactDevToolStripMenuItem_Click);
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(84, 27);
			this->logOutToolStripMenuItem->Text = L"LogOut";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::logOutToolStripMenuItem_Click);
			// 
			// howToToolStripMenuItem
			// 
			this->howToToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->howToAddPatientToolStripMenuItem,
					this->howToCreateSalesToolStripMenuItem, this->howToAddStockToolStripMenuItem, this->howToAddPatientsToolStripMenuItem
			});
			this->howToToolStripMenuItem->Name = L"howToToolStripMenuItem";
			this->howToToolStripMenuItem->Size = System::Drawing::Size(91, 27);
			this->howToToolStripMenuItem->Text = L"How To\?";
			// 
			// howToAddPatientToolStripMenuItem
			// 
			this->howToAddPatientToolStripMenuItem->Name = L"howToAddPatientToolStripMenuItem";
			this->howToAddPatientToolStripMenuItem->Size = System::Drawing::Size(265, 28);
			this->howToAddPatientToolStripMenuItem->Text = L"How to Add Patient\?";
			this->howToAddPatientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::howToAddPatientToolStripMenuItem_Click);
			// 
			// howToCreateSalesToolStripMenuItem
			// 
			this->howToCreateSalesToolStripMenuItem->Name = L"howToCreateSalesToolStripMenuItem";
			this->howToCreateSalesToolStripMenuItem->Size = System::Drawing::Size(265, 28);
			this->howToCreateSalesToolStripMenuItem->Text = L"How To create Sales\?";
			this->howToCreateSalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::howToCreateSalesToolStripMenuItem_Click);
			// 
			// howToAddStockToolStripMenuItem
			// 
			this->howToAddStockToolStripMenuItem->Name = L"howToAddStockToolStripMenuItem";
			this->howToAddStockToolStripMenuItem->Size = System::Drawing::Size(265, 28);
			this->howToAddStockToolStripMenuItem->Text = L"How To add Stock\?";
			this->howToAddStockToolStripMenuItem->Click += gcnew System::EventHandler(this, &Landingpage::howToAddStockToolStripMenuItem_Click);
			// 
			// howToAddPatientsToolStripMenuItem
			// 
			this->howToAddPatientsToolStripMenuItem->Name = L"howToAddPatientsToolStripMenuItem";
			this->howToAddPatientsToolStripMenuItem->Size = System::Drawing::Size(265, 28);
			this->howToAddPatientsToolStripMenuItem->Text = L"How to add Patients\?";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::Teal;
			this->monthCalendar1->Location = System::Drawing::Point(1453, 818);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->monthCalendar2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1924, 1024);
			this->panel1->TabIndex = 2;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->comboBox12);
			this->panel5->Controls->Add(this->comboBox13);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->panel16);
			this->panel5->Controls->Add(this->textBox13);
			this->panel5->Controls->Add(this->panel17);
			this->panel5->Controls->Add(this->textBox14);
			this->panel5->Controls->Add(this->comboBox10);
			this->panel5->Controls->Add(this->comboBox11);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->panel14);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->panel15);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->comboBox8);
			this->panel5->Controls->Add(this->comboBox9);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->panel12);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Controls->Add(this->panel13);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->comboBox6);
			this->panel5->Controls->Add(this->comboBox7);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->panel10);
			this->panel5->Controls->Add(this->textBox7);
			this->panel5->Controls->Add(this->panel11);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Controls->Add(this->comboBox4);
			this->panel5->Controls->Add(this->comboBox5);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->panel9);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->comboBox3);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(896, 361);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(718, 542);
			this->panel5->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Location = System::Drawing::Point(21, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(206, 31);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Working Days...";
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox12->Location = System::Drawing::Point(627, 423);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(60, 24);
			this->comboBox12->TabIndex = 68;
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox13->Location = System::Drawing::Point(393, 420);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(60, 24);
			this->comboBox13->TabIndex = 67;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label23->Location = System::Drawing::Point(467, 419);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(36, 26);
			this->label23->TabIndex = 66;
			this->label23->Text = L"To";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label24->Location = System::Drawing::Point(219, 415);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 26);
			this->label24->TabIndex = 65;
			this->label24->Text = L"From";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel16->Location = System::Drawing::Point(521, 438);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(88, 4);
			this->panel16->TabIndex = 64;
			// 
			// textBox13
			// 
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(521, 417);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(88, 23);
			this->textBox13->TabIndex = 63;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel17->Location = System::Drawing::Point(298, 437);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(88, 4);
			this->panel17->TabIndex = 62;
			// 
			// textBox14
			// 
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(298, 412);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(88, 23);
			this->textBox14->TabIndex = 61;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox10->Location = System::Drawing::Point(627, 360);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(60, 24);
			this->comboBox10->TabIndex = 60;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox11->Location = System::Drawing::Point(393, 357);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(60, 24);
			this->comboBox11->TabIndex = 59;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label21->Location = System::Drawing::Point(467, 356);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 26);
			this->label21->TabIndex = 58;
			this->label21->Text = L"To";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label22->Location = System::Drawing::Point(219, 352);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 26);
			this->label22->TabIndex = 57;
			this->label22->Text = L"From";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel14->Location = System::Drawing::Point(521, 375);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(88, 4);
			this->panel14->TabIndex = 56;
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(521, 354);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(88, 23);
			this->textBox11->TabIndex = 55;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel15->Location = System::Drawing::Point(298, 374);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(88, 4);
			this->panel15->TabIndex = 54;
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(298, 349);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(88, 23);
			this->textBox12->TabIndex = 53;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox8->Location = System::Drawing::Point(627, 297);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(60, 24);
			this->comboBox8->TabIndex = 52;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox9->Location = System::Drawing::Point(393, 294);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(60, 24);
			this->comboBox9->TabIndex = 51;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label19->Location = System::Drawing::Point(467, 293);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 26);
			this->label19->TabIndex = 50;
			this->label19->Text = L"To";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label20->Location = System::Drawing::Point(219, 289);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 26);
			this->label20->TabIndex = 49;
			this->label20->Text = L"From";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel12->Location = System::Drawing::Point(521, 312);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(88, 4);
			this->panel12->TabIndex = 48;
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(521, 291);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(88, 23);
			this->textBox9->TabIndex = 47;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel13->Location = System::Drawing::Point(298, 311);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(88, 4);
			this->panel13->TabIndex = 46;
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(298, 286);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(88, 23);
			this->textBox10->TabIndex = 45;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox6->Location = System::Drawing::Point(627, 227);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(60, 24);
			this->comboBox6->TabIndex = 44;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox7->Location = System::Drawing::Point(393, 224);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(60, 24);
			this->comboBox7->TabIndex = 43;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label17->Location = System::Drawing::Point(467, 223);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 26);
			this->label17->TabIndex = 42;
			this->label17->Text = L"To";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label18->Location = System::Drawing::Point(219, 219);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 26);
			this->label18->TabIndex = 41;
			this->label18->Text = L"From";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Location = System::Drawing::Point(521, 242);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(88, 4);
			this->panel10->TabIndex = 40;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(521, 221);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(88, 23);
			this->textBox7->TabIndex = 39;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel11->Location = System::Drawing::Point(298, 241);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(88, 4);
			this->panel11->TabIndex = 38;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(298, 216);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(88, 23);
			this->textBox8->TabIndex = 37;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox4->Location = System::Drawing::Point(627, 158);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(60, 24);
			this->comboBox4->TabIndex = 36;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox5->Location = System::Drawing::Point(393, 155);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(60, 24);
			this->comboBox5->TabIndex = 35;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label15->Location = System::Drawing::Point(467, 154);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 26);
			this->label15->TabIndex = 34;
			this->label15->Text = L"To";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label16->Location = System::Drawing::Point(219, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 26);
			this->label16->TabIndex = 33;
			this->label16->Text = L"From";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Location = System::Drawing::Point(521, 173);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(88, 4);
			this->panel6->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(521, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 23);
			this->textBox3->TabIndex = 31;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel9->Location = System::Drawing::Point(298, 172);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(88, 4);
			this->panel9->TabIndex = 30;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(298, 147);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(88, 23);
			this->textBox6->TabIndex = 29;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox3->Location = System::Drawing::Point(627, 94);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(60, 24);
			this->comboBox3->TabIndex = 28;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->comboBox2->Location = System::Drawing::Point(393, 91);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(60, 24);
			this->comboBox2->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label14->Location = System::Drawing::Point(467, 90);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(36, 26);
			this->label14->TabIndex = 25;
			this->label14->Text = L"To";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(219, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 26);
			this->label9->TabIndex = 24;
			this->label9->Text = L"From";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->Location = System::Drawing::Point(521, 109);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(88, 4);
			this->panel8->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(521, 88);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(88, 23);
			this->textBox5->TabIndex = 22;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label13->Location = System::Drawing::Point(35, 409);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 26);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Sunday";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label12->Location = System::Drawing::Point(35, 342);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 26);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Friday";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Location = System::Drawing::Point(35, 275);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 26);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Thursday";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(35, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 26);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Wednesday";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Teal;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(393, 478);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 58);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Add Details";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Landingpage::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(35, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 26);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Tuesday";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Location = System::Drawing::Point(298, 108);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(88, 4);
			this->panel7->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(298, 83);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 23);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(35, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 26);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Monday";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(1638, 853);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 73);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Landingpage::button1_Click);
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar2->Location = System::Drawing::Point(1638, 610);
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(43, 360);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(803, 542);
			this->panel2->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(14, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(364, 31);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Edit Pharmacy Details Here...";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(472, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(229, 58);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Add Details";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Landingpage::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(46, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 31);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Enter Pharmacy Details";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(370, 415);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(407, 4);
			this->panel4->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(370, 243);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(408, 166);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(370, 150);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(408, 4);
			this->panel3->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(370, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(408, 24);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(46, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(284, 31);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Enter Pharmacy Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(608, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(569, 135);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pharmacy is the clinical health \r\nscience that links medical science with chemist"
				L"ry and \r\nit ischarged with the discovery, \r\nproduction, disposal, safe and effec"
				L"tive use, and control of\r\n ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(67, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 50);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pharmacy Name";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1355, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(568, 331);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(43, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2102, 334);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Landingpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Landingpage";
			this->Text = L"Landingpage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Landingpage::Landingpage_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
			MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	label1->Text = textBox1->Text;

	label2->Text = textBox2->Text;

	textBox1->Clear();
	textBox2->Clear();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	MessageBox::Show("Details saved Succesfully");

	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox3->Clear();
	textBox8->Clear();
	textBox7->Clear();
	textBox10->Clear();
	textBox9->Clear();
	textBox12->Clear();
	textBox11->Clear();
	textBox14->Clear();
	textBox13->Clear();
	


}
private: System::Void inventoryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//Inventory^ myInventory = gcnew Inventory();

	//myInventory->ShowDialog();

	Inventory^ myStaff = gcnew Inventory();

	myStaff->ShowDialog();
	


}
private: System::Void addStaffToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Staff^ myStaff = gcnew Staff();

	myStaff->ShowDialog();


}
private: System::Void salesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Sales^ mySales = gcnew Sales();

	mySales->ShowDialog();

}
private: System::Void patientsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Patients^ myPatient = gcnew Patients();

	myPatient->ShowDialog();

}
private: System::Void reportsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Suppliers^ mySupplier = gcnew Suppliers();

	mySupplier->ShowDialog();
}
private: System::Void reportsToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	Reports^ myReport = gcnew Reports();

	myReport->ShowDialog();
}
private: System::Void Landingpage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void logOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();

}
private: System::Void contactDevToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Email:: afidev@gmail.com   Phone:: 04483483283");
}
private: System::Void howToAddPatientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Click on the File text on the top left, select open, select Patient then fill all the patient's information");


}
private: System::Void howToCreateSalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Click on the File text on the top left, select open, select Sales then fill all the information");

}
private: System::Void howToAddStockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Click on the File text on the top left, select opne, select Inventory then fill all the information");
}
private: System::Void calculatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	
	Calculator^ myCalc = gcnew Calculator();

	myCalc->ShowDialog();


}
};
}
