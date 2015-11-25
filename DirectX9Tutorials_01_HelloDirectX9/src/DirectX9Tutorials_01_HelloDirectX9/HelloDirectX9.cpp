//***************************************************************************
// main.cpp by hzzcle (C) 2015 All Rights Reserved.
// 博文地址:http://blog.csdn.net/hzzcle/article/details/49717695
// github地址:https://github.com/hzzcle/
//***************************************************************************

#include <windows.h>        // windows基础头文件
#include <windowsx.h>       // 实用宏定义头文件
#include <tchar.h>          // windows通用字符串处理头文件

// windows程序入口函数
int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nShowCmd)
{
    // 对话框框函数
    MessageBox(0, _T("Hello DirectX 9.0C!"), 0, 0);
    return 0;
}