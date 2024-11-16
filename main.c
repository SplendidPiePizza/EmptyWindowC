// main.c

#include <windows.h>
#include "window.h"

int main() {
    // Initialize Win32 application
    HINSTANCE hInstance = GetModuleHandle(NULL);
    
    // Create and show the window
    createWindow(hInstance, SW_SHOWNORMAL);

    return 0;
}
