#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

//0.7
int cor = 3;
int intervalo = 250;
int main(){

	setlocale(LC_ALL, "Portuguese");

	//cores - parte do codigo que define funcionalidade das cores no windows
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	//-
	
	// Variaveis do menu
	int manterMenu = 1;
	int selecionado = 0;
	int selecao = 1;
	char escolha;
	// -
	// Funcoes do programa
	void strat(void);
	void options(void);
	// - 
	// Menu Principal
	while(manterMenu == 1){
		// Imprecão
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
		// -
		// Capitura
		escolha = getch();
   		// -
		
		// Oque fazer com produto caputurado
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
		//-
		// Oque fazer quando algo é selecionado
		if(selecionado == 1){
			system("cls");
			strat();
			selecionado = 0;
		}
		else if(selecionado == 2){
			system("cls");
			options();
			selecionado = 0;
		}
		else if(selecionado == 3){
			manterMenu = 0;
		}
		else{
		
		}
		// -
		system("cls");
	}
	// -
}


// -
// -

void strat(void){
	
	//cores - parte do codigo que define funcionalidade das cores no windows
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	// -
	
	// Variaveis do menu
	int manterMenu = 1;
	int selecionado = 0;
	int selecao = 1;
	char escolha;
	// -
	// Define os estatos dos invouvidos no combate
	srand(time(NULL));
	int a = 1;
	int i;
	int MonstroHP1 = 50, MonstroHP2 = 50, HP = 200, danoEspada, danoEscudo, danoBat1, danoBat2, dano, acao, alvo, vez = 1, vezMonstro1, vezMonstro2;
	int progresoP = 0;
	int progresoM1 = 0;
	int progresoM2 = 0;
	int estatos = 0;
	int manter = 1;
	//-
	
	// Define os nomes (Classes e Inimigos)
	char nomeMonstro1[100] = "Mostro1";
	char nomeMonstro2[100] = "Mostro2";
	char nome[100] = "";
	char classe1[100] = "Mestre";
	char classe2[100] = "Cavaleiro";
	char classe3[100] = "Bruxo";
	char classe4[100] = "Aqueiro";
	char classe5[100] = "Assassino";
	// -
	// Menu de seleção de classe
	while(manterMenu == 1){
	printf("Selecione sua classe\n\n");
		if(selecao == 1){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("%s \n", classe1);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 2){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("%s \n", classe2);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 3){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("%s \n", classe3);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 4){
			SetConsoleTextAttribute(hConsole, cor);
		}
			printf("%s \n", classe4);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 5){
			SetConsoleTextAttribute(hConsole, cor);
		}
			printf("%s \n", classe5);
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
			for (i = 0; i < 99; i++){
				nome[i] = classe1[i];
			}
		}
		else if(selecionado == 2){
			manterMenu = 0;
			for (i = 0; i < 99; i++){
				nome[i] = classe2[i];
			}
		}
		else if(selecionado == 3){
			manterMenu = 0;
			for (i = 0; i < 99; i++){
				nome[i] = classe3[i];
			}
		}
		else if(selecionado == 4){
			manterMenu = 0;
			for (i = 0; i < 99; i++){
				nome[i] = classe4[i];
			}
		}
		else if(selecionado == 5){
			manterMenu = 0;
			for (i = 0; i < 99; i++){
				nome[i] = classe5[i];
			}
		}
		else{
		
		}
		system("cls");
	}
	// -
	printf("Este é um protrotico de um sitem de com bate para um jogo\n\n    Presione qualquer botão para continuar");
	escolha = getch();
	system("cls");

	while(a == 1){
		
		selecionado = 0;
		vez = 0;
		vezMonstro1 = 0;
		vezMonstro2 = 0;
		manter = 1;
		alvo = 0;
		// Barras de Turno
		while(manter == 1){
			system("cls");
			// Barra do Jogador
			printf("[");
			estatos = 0;
	    		while(estatos <= progresoP && estatos<2000){
	    			if((progresoP - estatos) >= 100){
	    				printf("*");
					}
	    			estatos=estatos+100;
			}
			estatos = 2000;
			while(estatos > progresoP){
	    			printf(" ");
	    			estatos = estatos -100;
			}
			printf("]");
	  		printf("    %s: %d", nome, HP);
	  		printf("\n");
	  		// -
	  		// Barra do Primero monstro
			if(MonstroHP1 > 0){
				printf("[");
				estatos = 0;
		    		while(estatos < progresoM1 && estatos < 2000){
		    			if((progresoM1 - estatos) >= 100){
		    				printf("*");
						}
		    			estatos = estatos + 100;
				}
				estatos = 2000;
				while(estatos > progresoM1){
		    			printf(" ");
		    			estatos = estatos - 100;
				}
				printf("]");
		  		printf("    %s: %d hp", nomeMonstro1, MonstroHP1);
			}
			// -
			printf("\n");
			// Barra do segundo monstro
			if(MonstroHP2 > 0){
				printf("[");
				estatos = 0;
		    		while(estatos < progresoM2 && estatos < 2000){
		    			if((progresoM2 - estatos) >= 100){
		    				printf("*");
						}
		    			estatos = estatos +100;
				}
				estatos = 2000;
				while(estatos > progresoM2){
		    			printf(" ");
		    			estatos = estatos -100;
				}
				printf("]");
				printf("    %s: %d hp", nomeMonstro2, MonstroHP2);
			}
			//-
			// Tempo entre carregamento de barra
	  		Sleep(intervalo);
	  		// -
	  		// Quebra de loop ao completar barra
	  			//Jogador
			if(progresoP >= 2000){
				vez = 1;
				progresoP = 0;
				manter = 0;
			}
				// -
				// Primeriro monstro
			if(progresoM1 >= 2000){
				vezMonstro1 = 1;
				progresoM1 = 0;
				manter = 0;
			}
				// -
				// Segundo monstro
			if(progresoM2 >= 2000){
				vezMonstro2 = 1;
				progresoM2 = 0;
				manter = 0;
			}
			//-
			// Progreso da Barra
			progresoP = progresoP + (rand() %(50)) + 100;
			progresoM1 = progresoM1 + (rand() %(10)) + 50;
			progresoM2 = progresoM2 + (rand() %(10)) + 50;
			//-
			// Anula qualque entrada durante o caregamento das barras
			while(kbhit()){
   				escolha = getch();
   			}
			// -
		}
		// -
		while(kbhit()){
   			escolha = getch();
   		}
		// Menu de ações
		if(vez == 1){
			manterMenu = 1;
			selecionado = 0;
			selecao = 1;
			while(manterMenu == 1){
				printf("\n-- \n");
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
		}
		// -
		system("cls");

		if(vez == 1){
			dano = (rand() %7) + 4;
		}
		if(vezMonstro1 == 1){
			danoBat1 =(rand() %3) + 2;
		}
		if(vezMonstro2 == 1){
			danoBat2 = (rand() %3) + 2;
		}
		if(selecionado == 2){
			danoBat1 = danoBat1 / 2;
			danoBat2 = danoBat2 / 2;
		}
		// menu de escolha de alvo
		if(selecionado == 1){
			selecionado = 0;
			selecao = 1;
			manterMenu = 1;
			while(manterMenu == 1){
				printf("Escolha seu alvo\n\n");
				if(selecao == 1){
					SetConsoleTextAttribute(hConsole, cor);
				}
				printf("1- %s: %d \n", nomeMonstro1, MonstroHP1);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				if(selecao == 2){
					SetConsoleTextAttribute(hConsole, cor);
				}
				printf("2- %s: %d \n", nomeMonstro2, MonstroHP2);
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
					if(MonstroHP1 > 0){
						manterMenu = 0;
						alvo = 1;
					}
					else{
						printf("%s já esta morto", nomeMonstro1);
					}

				}
				else if(selecionado == 2){
					if(MonstroHP2 > 0){
						manterMenu = 0;
						alvo = 2;
					}
					else{
						printf("%s já esta morto", nomeMonstro2);
					}
				}
				else{
			
				}
				system("cls");
			}
				
			if (alvo == 1){
				MonstroHP1 = MonstroHP1 - dano;
			}
			if (alvo == 2){
				MonstroHP2 = MonstroHP2 - dano;
			}	
			if(MonstroHP1 < 0){
				MonstroHP1 = 0;
			}
			if(MonstroHP2 < 0){
				MonstroHP2 = 0;
			}
		}
		// -
		if(MonstroHP1 > 0 && vezMonstro1 == 1){
			HP = HP - danoBat1;
			
		}
		if(MonstroHP2 > 0 && vezMonstro2 == 1){
			HP = HP - danoBat2;
			
		}
	
		system("cls");
		if(MonstroHP1 > 0 && vezMonstro1 == 1){
			printf("%s dano: %d \n", nomeMonstro1, danoBat1);
			escolha = getch();
		}
		if(MonstroHP2 > 0 && vezMonstro2 == 1){
			printf("%s dano: %d \n", nomeMonstro2, danoBat2);
			escolha = getch();
		}
		if(alvo == 1 && vez == 1){
			printf("voce causou %d de na em %s ele tem %d agora\n ", dano, nomeMonstro1, MonstroHP1);
			escolha = getch();
		}
		if(alvo == 2 && vez == 1){
			printf("voce causou %d de na em %s ele tem %d agora\n ", dano, nomeMonstro2, MonstroHP2);
			escolha = getch();
		}
		system("cls");

		if(HP<1) {
			a = 0;
			printf("you died \n");
			escolha = getch();
		}
		else if (MonstroHP1 < 1 && MonstroHP2 < 1){
			a = 0;
			printf("you win! \n");
			escolha = getch();
		}
		
		
	}

}

void options(void){
	
	//cores - parte do codigo que define funcionalidade das cores no windows
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	//-
	
	int manterMenu = 1;
	int selecionado = 0;
	int selecao = 1;
	char escolha;
	// Menu de opções
	while(manterMenu == 1){

		printf("---Options--- \n\n");
		if(selecao == 1){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("cor %d\n", cor);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 2){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("intervalo %d \n", intervalo);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		if(selecao == 3){
			SetConsoleTextAttribute(hConsole, cor);
		}
		printf("Concluir \n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		

		printf("\n******************************************* \n");
		

		escolha = getch();
   			

		if(escolha == 'w' && selecao > 1){
			selecao = selecao - 1;
		}
		else if(escolha == 's' && selecao < 3){
			selecao = selecao + 1;
		}
		else if(escolha == 'd'){
			if(selecao == 1 && cor < 20){
				cor = cor + 1;
			}
			if(selecao == 2 && intervalo < 1000){
				intervalo = intervalo + 50;
			}
		}
		else if(escolha == 'a'){
			if(selecao == 1 && cor > 2){
				cor = cor - 1;
			}
			if(selecao == 2 && intervalo > 100){
				intervalo = intervalo - 50;
			}
		}
		else if(escolha == 32){
			selecionado = selecao;
		}
		else{
				
		}
		if(selecionado == 1){
			
			selecionado = 0;
		}
		else if(selecionado == 2){
			
			selecionado = 0;
		}
		else if(selecionado == 3){
			manterMenu = 0;
		}
		else{
		
		}
		system("cls");
	}
	// -
}
