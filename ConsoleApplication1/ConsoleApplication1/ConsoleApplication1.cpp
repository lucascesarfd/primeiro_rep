#include "stdafx.h"
#include "windows.h"

#using <mscorlib.dll>
#include <tchar.h>

using namespace System;

#using <System.Windows.Forms.dll>
using namespace System::Windows::Forms;

#using <System.dll>

// This is the entry point for this application
// int _tmain(void)
int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
    // TO DO: Replace the sample code below with your own code.
    // Console::WriteLine(S"Hello World");

    Form* testForm = new Form();
    testForm->ShowDialog();

    return 0;
}