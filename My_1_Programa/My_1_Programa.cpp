// My_1_Programa.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "My_1_Programa.h"
#include <windows.h>
#include <commctrl.h>
#include <tchar.h>

#define MAX_LOADSTRING 100
HINSTANCE hInst;
int x; int y;

char buf[100];
char buf2[100];





// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{

    UNREFERENCED_PARAMETER(lParam);
    ///**********
    HDC hdc, hCompatibleDC;
    PAINTSTRUCT ps;
    HANDLE hbitmap, holdbitmap, hImg ;
    RECT rect;
    BITMAP bitmap;
    ///*************
    static HBITMAP hBitmap, hOldBitmap;
    static BITMAP bm;
    static HDC hMemDC;

    ////*************
    static WCHAR szHello[MAX_LOADSTRING];
    static int xt = 100, yt = 100;
    
    RECT cr,cr2;//область прямоуголтника

     //***************
    static TCHAR usa[] = _T("     Это СШП      ");
static TCHAR russia[] = _T("  Это Россия      ");
static TCHAR default1[] = _T("                           ");
static TCHAR lpDesktop55[] = _T("E:\\win256_3.bmp");


   // HINSTANCE hInstance;
  //HWND button1 = CreateWindowW(L"BUTTON", L"&Button", WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_BITMAP, 20, 50, 80, 25, button1, (HMENU)600, NULL, NULL);

  //  hImg = LoadImageW(NULL, L"E:\\win256_3.bmp", IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR | LR_DEFAULTSIZE | LR_LOADFROMFILE);
    //SendMessageW(button1, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hImg);
 

  /*  wchar_t szW[10];

    HWND btt;
    btt = CreateWindowW(szW, szW, WS_VISIBLE, 100, 100, 100, 50, hDlg,
        NULL, NULL, NULL);*/
   
    switch (message)
    {
  //****
    case WM_CREATE:
      
           // CreateWindowW(NULL, lpDesktop2, WS_VISIBLE | WS_CHILD, 100, 100, 100, 100, hDlg, (HMENU)NULL, NULL, NULL);

          //  LoadStringW(hInst, IDS_APP_TITLE, szHello, MAX_LOADSTRING);
       
        break;//****
   

    case WM_MOUSEMOVE:
      
        x = LOWORD(lParam);
        y = HIWORD(lParam);

        if (x >100)
        {
          
           // EndDialog(hDlg, LOWORD(wParam));
           ///
           
            
            //return (INT_PTR)TRUE;
            // 
            ////**************
            //HWND CreateToolTip(int toolID, HWND hDlg, PTSTR pszText)
            //{
            //    
            //    // Get the window of the tool.
            //    HWND hwndTool = GetDlgItem(hDlg, toolID);

            //    // Create the tooltip. g_hInst is the global instance handle.
            //    HWND hwndTip = CreateWindowEx(NULL, TOOLTIPS_CLASS, NULL,
            //        WS_POPUP | TTS_ALWAYSTIP | TTS_BALLOON,
            //        CW_USEDEFAULT, CW_USEDEFAULT,
            //        CW_USEDEFAULT, CW_USEDEFAULT,
            //        hDlg, NULL,
            //        g_hInst, NULL);

            //    if (!hwndTool || !hwndTip)
            //    {
            //        return (HWND)NULL;
            //    }

            //    // Associate the tooltip with the tool.
            //    TOOLINFO toolInfo = { 0 };
            //    toolInfo.cbSize = sizeof(toolInfo);
            //    toolInfo.hwnd = hDlg;
            //    toolInfo.uFlags = TTF_IDISHWND | TTF_SUBCLASS;
            //    toolInfo.uId = (UINT_PTR)hwndTool;
            //    toolInfo.lpszText = pszText;
            //    SendMessage(hwndTip, TTM_ADDTOOL, 0, (LPARAM)&toolInfo);

            //    return hwndTip;
            //}
            ////***************

            //HWND AddCheckboxTooltip(const int toolId, PTSTR tooltipText)
            //{
            //    HWND hCheckbox = GetDlgItem(toolId);

            //    // Need to create the ToolTip first
            //    HWND hWndToolTip = ::CreateWindowEx(NULL, TOOLTIPS_CLASS, NULL,
            //        WS_POPUP | TTS_ALWAYSTIP | TTS_BALLOON,
            //        CW_USEDEFAULT, CW_USEDEFAULT,
            //        CW_USEDEFAULT, CW_USEDEFAULT,
            //        m_hWnd,
            //        NULL,
            //        _AtlBaseModule.GetModuleInstance(), 0);

            //    if (!hCheckbox || !hWndToolTip)
            //        return NULL;

            //    TOOLINFO toolInfo = { 0 };
            //    toolInfo.cbSize = sizeof(toolInfo);
            //    toolInfo.hwnd = hCheckbox;
            //    toolInfo.uFlags = TTF_IDISHWND | TTF_SUBCLASS;
            //    toolInfo.uId = (UINT_PTR)hCheckbox;
            //    toolInfo.lpszText = tooltipText;

            //    LRESULT result = ::SendMessage(hWndToolTip, TTM_ADDTOOL,
            //        0, (LPARAM)&toolInfo);
            //    return hWndToolTip;
            //}

            //LRESULT OnInitDialog(UINT, WPARAM, LPARAM, BOOL& /*bHandled*/)
            //{
            //    AddCheckboxTooltip(IDC_CHECK1, _T("Checkbox Tooltip Test"));
            //};
            //****************




            



        };

        _itoa_s(x, buf, 10);
        _itoa_s(y, buf2, 10);
       //if (x > 400)
       // {
            InvalidateRect(hDlg, NULL, FALSE);//перерисовка
      // }
        break;
   


     




    case WM_PAINT:
    {

        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hDlg, &ps);
        GetClientRect(hDlg, &cr);

        /*hbitmap = LoadImage(NULL, L"E:\\win256_3.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
        GetObject(hbitmap, sizeof(BITMAP), &bitmap);
        hCompatibleDC = CreateCompatibleDC(hdc);
        holdbitmap = SelectObject(hCompatibleDC, hbitmap);
        GetClientRect(hDlg, &rect);
        StretchBlt(hdc, 0, 0, rect.right, rect.bottom, hCompatibleDC, 0, 0, bitmap.bmWidth, bitmap.bmHeight, SRCCOPY);
        SelectObject(hCompatibleDC, holdbitmap);
        DeleteObject(hbitmap);
        DeleteDC(hCompatibleDC);*/

        
        const COLORREF rgbRed = 0xeaeaea;//0x000000FF;
        if (x > 220&&x<400&&y>400&&y<500)
        {
            SetBkColor(hdc, rgbRed);
            DrawText(hdc, usa, -1, &cr, DT_CENTER| DT_INTERNAL| DT_NOCLIP);//| DT_SINGLELINE | DT_VCENTER
        }
       
        
       // SendMessage(hDlg, WM_CLEAR, 0, 0);


       
        if (x > 700&&x<1200&&y>100&&y<400)
        {
            SetBkColor(hdc, rgbRed);
            DrawText(hdc, russia, -1, &cr, DT_CENTER);//| DT_SINGLELINE | DT_VCENTER
           
        }
        
        if (x > 80&&x<160&&y>250&&y<340)
        {
            SetBkColor(hdc, rgbRed);
            DrawText(hdc, usa, -1, &cr, DT_CENTER);//| DT_SINGLELINE | DT_VCENTER
           
        }
        else { InvalidateRect(hDlg, NULL, FALSE); }
      /*  if (x > 400 && x < 600) {
          
            DrawText(hdc, lpDesktop3, -1, &cr, DT_CENTER);
        }*/
          // InvalidateRect(hDlg, NULL, FALSE);
       
        //TextOut(hdc, xt, yt, szHello, wcslen(szHello));
        SetBkColor(hdc, rgbRed);
      TextOutA(hdc, 0, 0, buf, strlen(buf));
       TextOutA(hdc, 0, 20, buf2, strlen(buf2));

        

      
 
        EndPaint(hDlg, &ps);

        //PAINTSTRUCT ps2;
        //HDC hdc2 = BeginPaint(hDlg, &ps2);
        //GetClientRect(hDlg, &cr2);
        //if (x > 100)
        //{
        //    DrawText(hdc2, lpDesktop3, -1, &cr2, DT_CENTER| DT_SINGLELINE | DT_VCENTER);//| DT_SINGLELINE | DT_VCENTER
        //}
        //
        //EndPaint(hDlg, &ps2);

    }
    break;
    //**************
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
    hInst = hInstance;
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_ABOUTBOX), 0, About);
  

    // Выполнить инициализацию приложения:


}
//static TCHAR lpDesktop[] = _T("WinSta0\\Default");
//void CreateMyTooltip(HWND hparent)
//{
//    HWND hwndTT = CreateWindowEx(WS_EX_TOPMOST, TOOLTIPS_CLASS, NULL,
//        WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP, 0, 0, 0, 0, hparent, NULL, 0, NULL);
//
//
//
//    TTTOOLINFO ti = { 0 };
//    ti.cbSize = sizeof(TTTOOLINFO);
//    ti.uFlags = TTF_SUBCLASS;
//    ti.hwnd = hparent;
//    ti.lpszText = lpDesktop;
//    GetClientRect(hparent, &ti.rect);
//
//
//    if (!SendMessage(hwndTT, TTM_ADDTOOL, 0, (LPARAM)&ti))
//        MessageBox(0, TEXT("Failed: TTM_ADDTOOL"), 0, 0);
//}


//void CreateToolTipForRect(HWND hwndParent)
//{
//    // Create a tooltip.
//    HWND hwndTT = CreateWindowEx(WS_EX_TOPMOST, TOOLTIPS_CLASS, NULL,
//        WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP,
//        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
//        hwndParent, NULL, NULL, NULL);
//
//    SetWindowPos(hwndTT, HWND_TOPMOST, 0, 0, 0, 0,
//        SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
//
//    _TCHAR msgg[] = _T("sdfuuuuuuu");//преобразование в LPTSTR 
//
//   
//    // Set up "tool" information. In this case, the "tool" is the entire parent window.
//    
//    TOOLINFO ti = { 0 };
//    ti.cbSize = sizeof(TOOLINFO);
//    ti.uFlags = TTF_SUBCLASS;
//    ti.hwnd = hwndParent;
//    ti.hinst = NULL;
//    ti.lpszText = msgg;
//   //  = "This is your tooltip string.";
//
//    GetClientRect(hwndParent, &ti.rect);
//
//    // Associate the tooltip with the "tool" window.
//    SendMessage(hwndTT, TTM_ADDTOOL, 0, (LPARAM)(LPTOOLINFO)&ti);
//}






