/* Change console text color, then restore it back to normal. */
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
#include <dos.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    int i, x;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	for (i = 1; i < 10; i++){
		system("cls");
    	SetConsoleTextAttribute(hConsole, i);
    	x = 0;
    	while(x<i){
    		printf("*");
    		x=x+1;
		}
  		printf("\nThis is some nice COLORFUL text, isn't it?\n");
  		Sleep(500);
  		 
	}
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("Back to normal");

    return 0;
}
