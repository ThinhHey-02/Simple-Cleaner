#include <stdio.h>
#include <windows.h>

int main()

{
	printf("CLEANING...\n");
	system("rd /s /q %systemdrive%\\$Recycle.Bin");
	MessageBox(NULL, "CLEANED!", ".", MB_OK | MB_ICONINFORMATION);
	return 0;
}
