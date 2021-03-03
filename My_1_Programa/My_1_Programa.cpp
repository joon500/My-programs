// My_1_Programa.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "My_1_Programa.h"

//#define MAX_LOADSTRING 100



/////INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);





// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{

    DialogBox(hInstance, MAKEINTRESOURCE(IDD_ABOUTBOX), 0, About);
  

    // Выполнить инициализацию приложения:


}

