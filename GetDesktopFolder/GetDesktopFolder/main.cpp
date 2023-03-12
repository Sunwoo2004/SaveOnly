#include "stdafx.h"
#include "shlobj.h"

using namespace std;

int main()
{
	char szDesktopPath[MAX_PATH];
	SHGetSpecialFolderPathA(NULL, szDesktopPath, CSIDL_DESKTOP, FALSE);
	cout << szDesktopPath << endl;
	system("pause");
}