#include <windows.h>        // windows����ͷ�ļ�
#include <windowsx.h>       // ʵ�ú궨��ͷ�ļ�
#include <tchar.h>          // windowsͨ���ַ�������ͷ�ļ�

// windows������ں���
int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nShowCmd)
{
    // �Ի������
    MessageBox(0, _T("Hello DirectX 9.0C!"), 0, 0);
    return 0;
}