#pragma once

#include "Landingpage.h"

namespace Pharmacy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{


		//Creating connectors

		MySqlConnection^ sqlConn = gcnew MySqlConnection();

		MySqlCommand^ sqlCmd = gcnew MySqlCommand();

		DataTable^ sqlDt = gcnew DataTable();

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

		MySqlDataReader^ sqlRd;



	public:
		Login(void)
		{
			InitializeComponent();
			

			PharmacyDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ LoginButton;
	protected:




	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LoginPwdtextBox;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ LoginUsernametextBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LoginPwdtextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LoginUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->LoginButton);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->LoginPwdtextBox);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->LoginUsernametextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(725, 770);
			this->panel1->TabIndex = 1;
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::Teal;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(236, 530);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(272, 75);
			this->LoginButton->TabIndex = 12;
			this->LoginButton->Text = L"Log In";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Location = System::Drawing::Point(339, 450);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 4);
			this->panel4->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(43, 427);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 27);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Enter Password";
			// 
			// LoginPwdtextBox
			// 
			this->LoginPwdtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginPwdtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginPwdtextBox->Location = System::Drawing::Point(339, 419);
			this->LoginPwdtextBox->Name = L"LoginPwdtextBox";
			this->LoginPwdtextBox->Size = System::Drawing::Size(342, 24);
			this->LoginPwdtextBox->TabIndex = 6;
			this->LoginPwdtextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->LoginPwdtextBox->UseSystemPasswordChar = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Location = System::Drawing::Point(339, 370);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 4);
			this->panel3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(43, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter Username";
			// 
			// LoginUsernametextBox
			// 
			this->LoginUsernametextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginUsernametextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginUsernametextBox->Location = System::Drawing::Point(339, 339);
			this->LoginUsernametextBox->Name = L"LoginUsernametextBox";
			this->LoginUsernametextBox->Size = System::Drawing::Size(342, 24);
			this->LoginUsernametextBox->TabIndex = 3;
			this->LoginUsernametextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->LoginUsernametextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login::LoginUsernametextBox_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(31, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Log In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(136, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 111);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(737, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(734, 697);
			this->panel2->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(734, 690);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(766, 716);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(705, 66);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1483, 794);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}




		private: System::Void PharmacyDB()
		{
			sqlConn->ConnectionString = "datasource=localhost; port=3306; uid=root; pwd=; database=pharmacy";

			sqlConn->Open();

			sqlCmd->Connection = sqlConn;

			sqlCmd->CommandText = "SELECT * FROM users ";

			sqlRd = sqlCmd->ExecuteReader();

			sqlDt->Load(sqlRd);

			sqlRd->Close();

			sqlConn->Close();

		}





#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	if (LoginUsernametextBox->Text == "" || LoginPwdtextBox->Text == "") {

		MessageBox::Show("Please enter all details", "", MessageBoxButtons::OK, MessageBoxIcon::Stop);


	}

	else {

		this->Hide();


		Landingpage^ myLandingPage = gcnew Landingpage();

		myLandingPage->ShowDialog();
	}


	


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult Ifexit;

	Ifexit = MessageBox::Show("Are you sure you want to exit?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (Ifexit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	};
	
}
private: System::Void LoginUsernametextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try

	{


		if (e->KeyChar == (Char)13) {

			DataView^ dv = sqlDt->DefaultView;

			dv->RowFilter = String::Format("username like '%{0}%' ", LoginUsernametextBox->Text);
			//dataGridView1->DataSource = dv->ToTable();

		}


	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
};
}
