#pragma once
#include "AVLBalancedSearchTree.h"
#include <Windows.h>

using namespace PracticeCLR;

int WINAPI WinAVLBalancedSearchTree(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew AVLBalancedSearchTree);
    return 0;
}