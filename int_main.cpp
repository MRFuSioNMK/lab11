#include "Kovbasiuk1.h"

  using namespace System;
  using namespace System::Windows::Forms;

  [STAThreadAttribute]

  int main(array<String^> ^ args) {
  Application::SetCompatibleTextRenderingDefault(false);
  Application::EnableVisualStyles();
  Max::Kovbasyuk1 form;
  Application::Run(% form);
}