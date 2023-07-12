#pragma once
#include "FirstDynamicForm.h"
#include <Windows.h>
using namespace PracticeCLR;

int WINAPI WinFirstDynamic(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew FirstDynamicForm);
    return 0;
}
