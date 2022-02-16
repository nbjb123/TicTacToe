#include "tttUI.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	tictactoe::tttUI form;
	Application::Run(% form);
}