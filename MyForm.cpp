#include "MyForm.h" 

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ArbolesGeneralesPasteleria::MyForm form; // Crea una instancia de tu formulario principal.
    Application::Run(% form);
}
