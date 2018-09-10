#include <stdio.h>
#include <windows.h>

int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int a = 0, b = 0, x = 2, y = 2, exit = 0, escolhaExit = 0, escolha = 0;
	while(exit == 0){
		while(a < 5){
			while(b < 5){
			if(a == y && b == x){
				SetConsoleTextAttribute(hConsole, 4);
				printf("* ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
			}
			else{
				printf("* ");
			}
			b = b + 1;
			}
			b = 0;
		printf("\n");
		a = a + 1;
		}
		a = 0;
		escolhaExit = 0;
		while(escolhaExit == 0){
			escolhaExit = 1;
		
			printf("Escolha a direção\n");
			printf("1 - cima\n");
			printf("2 - direita\n");
			printf("3 - esquerda\n");
			printf("4 - baixo\n");
			printf("***\n\n");
			scanf("%d", &escolha);

			if(escolha == 1){
				y = y - 1;
			}
			else if(escolha == 2){
				x = x + 1;
			}
			else if(escolha == 3){
				x = x - 1;
			}
			else if(escolha == 4){
				y = y + 1;
			}
			else{
				escolhaExit = 0;
			}
			if(x < 0){
				x = x + 1;
			}
			if(y < 0){
				y = y + 1;	
			}
			if(x > 4){
				x = x - 1;
			}
			if(y > 4){
				y = y - 1;
			}
		system("cls");
		}
	}
}
