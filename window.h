// window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void createWindow(HINSTANCE hInstance, int nCmdShow);

#endif // WINDOW_H
