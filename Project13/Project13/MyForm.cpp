#include "MyForm.h"
#include <string>
#include "Header.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project13::MyForm form;
	Application::Run(%form);
}
