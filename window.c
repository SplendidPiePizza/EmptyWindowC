// window.c

#include "window.h"
#include "settings.h"

// Window procedure to handle messages (empty body)
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hwnd, &ps);
                // Just filling the window with white color
                HBRUSH brush = CreateSolidBrush(BACKGROUND_COLOR);
                FillRect(hdc, &ps.rcPaint, brush);
                DeleteObject(brush);
                EndPaint(hwnd, &ps);
            }
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

void createWindow(HINSTANCE hInstance, int nCmdShow) {
    // Define the window class
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "EmptyWindowClass";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    // Register the window class
    if (!RegisterClass(&wc)) {
        MessageBox(NULL, "Window Class Registration Failed!", "Error", MB_OK);
        return;
    }

    // Create the window
    HWND hwnd = CreateWindowEx(
        0,                                // Extended styles
        "EmptyWindowClass",               // Window class name
        TITLE,                            // Window title (empty)
        WS_OVERLAPPEDWINDOW,              // Window style
        CW_USEDEFAULT, CW_USEDEFAULT,     // Position
        WIDTH, HEIGHT,                    // Size
        NULL,                             // Parent window
        NULL,                             // Menu
        hInstance,                        // Instance handle
        NULL                              // Additional data
    );

    if (hwnd == NULL) {
        MessageBox(NULL, "Window Creation Failed!", "Error", MB_OK);
        return;
    }

    // Show and update the window
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}
