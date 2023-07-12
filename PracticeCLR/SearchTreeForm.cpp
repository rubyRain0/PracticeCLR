#pragma once
#include "SearchTreeForm.h"
#include <Windows.h>

using namespace PracticeCLR;

int WINAPI WinSearchTree(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew SearchTreeForm);
    return 0;
}
