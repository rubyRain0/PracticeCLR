#pragma once
#include "SecondDynamicForm.h"
#include <Windows.h>
using namespace PracticeCLR;

int WINAPI WinSecondDynamic(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew SecondDynamicForm);
    return 0;
}