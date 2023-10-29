#include "CourseForm.h"
#include "Train.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ argv)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	courseassignment::CourseForm form;
	Application::Run(% form);
}