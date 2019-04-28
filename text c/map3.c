#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int a = 0, b = 0, x = 2, y = 2, w = 125 , exit = 0, escolhaExit = 0;
	char escolha;
	while(exit == 0){
		while(a < 5){
			while(b < 10){
			if(a == (y / 2) && b == x){
				SetConsoleTextAttribute(hConsole, w);
				if((y % 2) == 1){
					printf("%c",220);
				}
				else{
					printf("%c",223);
				}
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else{
				printf("%c",219);
			}
			b = b + 1;
			}
			b = 0;
		printf("\n");
		a = a + 1;
		}
		a = 0;
		printf("\n\n%d",w);
		printf("\n\nx %d",x);
		printf("\n\ny %d",y);
		
		
			
   			escolha = getch();
   			

			if(escolha == 'w'){
				y = y - 1;
			}
			else if(escolha == 'd'){
				x = x + 1;
			}
			else if(escolha == 'a'){
				x = x - 1;
			}
			else if(escolha == 's'){
				y = y + 1;
			}
			else if(escolha == 32){
				w = w + 1;
			}
			else{
				
			}
			if(x < 0){
				x = x + 1;
			}
			if(y < 0){
				y = y + 1;	
			}
			if(x > 9){
				x = x - 1;
			}
			if(y > 9){
				y = y - 1;
			}
		
			

		system("cls");
		
		
	}
}
