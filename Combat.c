#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

//0.5
int cor = 3;
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
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("1-Strat \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 2){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("2-Options \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 3){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("3-Quit \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		

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
			system("cls");
			strat();
			selecionado = 0;
		}
		else if(selecionado == 2){
			system("cls");
			printf("Opcaos\nNo momento não há opções\n");
			system("pause");
			selecionado = 0;
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
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	int manterMenu = 1;
	int selecionado = 0;
	int selecao = 1;
	char escolha;
	
	while(manterMenu == 1){
	printf("Selecione sua classe\n\n");
		if(selecao == 1){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("Mestre\n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 2){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("Cavaleiro \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 3){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("Bruxo \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 4){
			SetConsoleTextAttribute(hConsole, cor);
		}
			printf("Aqueiro\n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 5){
			SetConsoleTextAttribute(hConsole, cor);
		}
			printf("Assassino \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);

		printf("\n******************************************* \n");
		

		escolha = getch();
   			

		if(escolha == 'w' && selecao > 1){
			selecao = selecao - 1;
		}
		else if(escolha == 's' && selecao < 5){
			selecao = selecao + 1;
		}
		else if(escolha == 32){
			selecionado = selecao;
		}
		else{
				
		}
		if(selecionado == 1){
			manterMenu = 0;
		}
		else if(selecionado == 2){
			manterMenu = 0;
		}
		else if(selecionado == 3){
			manterMenu = 0;
		}
		else if(selecionado == 4){
			manterMenu = 0;
		}
		else if(selecionado == 5){
			manterMenu = 0;
		}
		else{
		
		}
		system("cls");
	}
	
	printf("este é um protrotico de um sitem de com bate para um jogo\nPresione qualquer botão para continuar");
	escolha = getch();
	system("cls");
	// define os estatos dos invouvidos no combate
	srand(time(NULL));
	int a = 1, b = 0, c = 1;
	int MostroHP1 = 50, MostroHP2 = 50, HP = 200, danoEspada, danoEscudo, danoBat1, danoBat2, dano, acao, alvo;
	// -
	while(a == 1){
		manterMenu = 1;
		selecionado = 0;
		selecao = 1;
		while(manterMenu == 1){
			printf("-- \n");
			printf("hp: %d \n",HP);
			if(selecao == 1){
				SetConsoleTextAttribute(hConsole, cor);
			}
			printf(" Atacar\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			if(selecao == 2){
				SetConsoleTextAttribute(hConsole, cor);
			}
			printf(" Defender\n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			if(selecao == 3){
				SetConsoleTextAttribute(hConsole, cor);
			}
			printf(" Magia \n");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf(" \n");
			
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
				manterMenu = 0;
				acao = 1;
			}
			else if(selecionado == 2){
				manterMenu = 0;
				acao = 2;
			}
			else if(selecionado == 3){
				printf("Esta opção não esta desponivel no momento\n");
				escolha = getch();
				
			}
			else{
		
			}
			system("cls");
		}

		c = 1;
		system("cls");

		dano = (rand() %7) + 4;
		danoBat1 =(rand() %3) + 2;
		danoBat2 =(rand() %3) + 2;
		if(selecionado == 2){
			danoBat1 = danoBat1 / 2;
			danoBat2 = danoBat2 / 2;
		}
		if(selecionado == 1){
			selecionado = 0;
			selecao = 1;
			manterMenu = 1;
			while(manterMenu == 1){
				printf("Escolha seu alvo\n\n");
				if(selecao == 1){
					SetConsoleTextAttribute(hConsole, cor);
				}
				printf("1- bat: %d \n",MostroHP1);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				if(selecao == 2){
					SetConsoleTextAttribute(hConsole, cor);
				}
				printf("2- bat: %d \n",MostroHP2);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				
				escolha = getch();
	   			
	
				if(escolha == 'w' && selecao > 1){
					selecao = selecao - 1;
				}
				else if(escolha == 's' && selecao < 2){
					selecao = selecao + 1;
				}
				else if(escolha == 32){
					selecionado = selecao;
				}
				else{
					
				}
				if(selecionado == 1){
					manterMenu = 0;
					alvo = 1;
				}
				else if(selecionado == 2){
					manterMenu = 0;
					alvo = 2;
				}
				else{
			
				}
				system("cls");
			}
				
			if (alvo == 1){
				MostroHP1 = MostroHP1 - dano;
			}
			if (alvo == 2){
				MostroHP2 = MostroHP2 - dano;
			}	
		}
		
		if(MostroHP1 > 0){
			HP = HP - danoBat1;
			
		}
		if(MostroHP2 > 0){
			HP = HP - danoBat2;
			
		}
	
		system("cls");
		if(MostroHP1 > 0){
			printf("bat1 dano: %d \n",danoBat1);
		}
		if(MostroHP2 > 0){
			printf("bat2 dano: %d \n",danoBat2);
		}
		if(alvo == 1){
			printf("voce causou %d de na em Bat1 ele tem %d agora\n ", dano, MostroHP1);
		}
		if(alvo == 2){
			printf("voce causou %d de na em Bat2 ele tem %d agora\n ", dano, MostroHP2);
		}
		system("pause");
		system("cls");

		if(HP<1) {
			a = 0;
			printf("you died \n");
		}
		else if (MostroHP1 < 1 && MostroHP2 < 1){
			a = 0;
			printf("you win! \n");
		}
		
		
	}

}
