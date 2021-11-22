#include "MyForm.h"

#include "Login.h";


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Pharmacy::MyForm form;
	Application::Run(% form);
}

