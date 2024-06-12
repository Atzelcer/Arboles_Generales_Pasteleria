#include "MyForm.h" 

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Inicializa tu aplicación aquí, si es necesario.
    // Por ejemplo, carga datos iniciales, configura conexiones, etc.

    ArbolesGeneralesPasteleria::MyForm form; // Crea una instancia de tu formulario principal.
    Application::Run(% form);
}
