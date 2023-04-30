#include "MyForm.h"
#include "locale"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	setlocale( LC_ALL, "Russian");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Banknotes::MyForm form;
	Application::Run(% form);
}
