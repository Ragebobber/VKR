#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::Main form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}
