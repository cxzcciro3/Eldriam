#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

//0.2
int main(){

	setlocale(LC_ALL, "Portuguese");

	//cores - parte do codigo que fine funcionalidade das cores no windows
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	
	int manterMenu = 1;
	int selecionado = 0;
	int selecao = 1;
	char escolha;
	void strat(void);
	while(manterMenu == 1){

		printf("---menu--- \n\n");
		if(selecao == 1){
			SetConsoleTextAttribute(hConsole, 3);
			printf("1-Strat \n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else{
			printf("1-Strat \n");
		}
		if(selecao == 2){
			SetConsoleTextAttribute(hConsole, 3);
			printf("2-Options \n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else{
			printf("2-Options \n");
		}
		if(selecao == 3){
			SetConsoleTextAttribute(hConsole, 3);
			printf("3-Quit \n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
		}
		else{
			printf("3-Quit \n");
		}

		printf("\n******************************************* \n");
		

		escolha = getch();
   			

		if(escolha == 'w' && selecao > 1){
			selecao = selecao - 1;
		}
		else if(escolha == 's' && selecao < 3){
			selecao = selecao + 1;
		}
		else if(escolha == 32){
			selecionado = selecao;
		}
		else{
				
		}
		if(selecionado == 1){
			strat();
		}
		else if(selecionado == 2){
			printf("Opcaos\nNo momento não há opções\n");
			system("pause");
		}
		else if(selecionado == 3){
			manterMenu = 0;
		}
		else{
		
		}
		system("cls");
	}
}


// -
// -

void strat(void){
	srand(time(NULL));
	int a = 1, b = 0, c = 1;
	int batHP1 = 50, batHP2 = 50, HP = 200, danoEspada, danoEscudo, danoBat1, danoBat2, dano, escolha;
	while(a == 1){
		printf("-- \n");
		printf("hp: %d \n",HP);
		printf("1- espada: 4 - 10 \n");
		printf("2- escudo 50%  2-6 \n");
		printf(" \n");
		scanf("%d", &b);
		c = 1;
		system("cls");
		while(c == 1){
			c = 0;
			
			if(b == 1){
				danoEspada = (rand() %7) + 4;
				dano = danoEspada;

				danoBat1 =(rand() %3) + 2;
				danoBat2 =(rand() %3) + 2;
				
				if(batHP1 > 0){HP = HP - danoBat1;}
				if(batHP2 > 0){HP = HP - danoBat2;}
				c = 0;
			}

		
			else if(b == 2){ 
				danoEscudo = (rand() %5) + 2;
				dano = danoEscudo;

				danoBat1 =(rand() %2) + 1;
				danoBat2 =(rand() %2) + 1;

				if(batHP1 > 0){HP = HP - danoBat1;}
				if(batHP2 > 0){HP = HP - danoBat2;}
				c = 0;	
			}
			

			else{c = 1;}

		}

			c = 1;
			while(c == 1){
					
				if(batHP1 > 0){printf("1- bat: %d \n",batHP1);}else{printf("1- bat: 0\n");}
				if(batHP2 > 0){printf("2- bat: %d \n",batHP2);}else{printf("2- bat: 0\n");}
				scanf("%d",&b);

				danoEspada = (rand() %7) + 4;
				if(b == 1 && batHP1 > 0){
					escolha = 1;
					batHP1 = batHP1 - dano;
					c = 0;
				}
				else if(b == 2 && batHP2 > 0){
					escolha = 2;
					batHP2 = batHP2 - dano;
					c = 0;
				}
				else if(batHP2 < 0 && batHP2 < 0 ){c = 0;}
				else{system("cls");}
			}


	
		system("cls");
		if(batHP1 > 0){printf("bat1 dano: %d \n",danoBat1);}
		if(batHP2 > 0){printf("bat2 dano: %d \n",danoBat2);}
		if(escolha == 1){printf("voce causou %d de na em Bat1 ele tem %d agora\n ", dano, batHP1);}
		if(escolha == 2){printf("voce causou %d de na em Bat2 ele tem %d agora\n ", dano, batHP2);}
		system("pause");
		system("cls");

		if(HP<1) {
			a = 0;
			printf("you died \n");
		}
		else if (batHP1 < 1 && batHP2 < 1){
			a = 0;
			printf("you win! \n");
		}
		
		
	}

}

