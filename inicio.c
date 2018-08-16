//Inicio 22
  //Necessario especificar qual classe serÃ¡ utilizada como heroi principal
  //Necessario especificar qual o sexo do perssonagem

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	menu();

}

void menu(void){
	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;	
	
	while(mantemLoopMenu == 1){
		printf("********************Menu****************** \n\n");
		printf("1-Start New Game\n");
		printf("x2-Start Load Game\n");
		printf("x3-Options\n");
		printf("4-Quit\n");
		printf("\n*******************************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			system("cls");
			start();
		}else if(opcaoUsuarioMenu == 2){
			
		}else if(opcaoUsuarioMenu == 3){
		
		}else if(opcaoUsuarioMenu == 4){
			mantemLoopMenu = 0;
		}
		system("cls");
	}
}

void start(void){
	int a;
	int b;
	int c;
	int sex;
	int talent;
	int clssA;
	
	//int choiceSex(void)
	//choiceTalent(void)
	//choiceClssA(void);
	
	printf("Você esta começando uma nova aventura...\n");
	printf("antes de todo aventura e necesario preparação.\n");
	printf("entÃ£o por favor me reponda...\n");

	sex = choiceSex();
	clssA = choiceClssA();
	talent = choiceTalent();
}

int choiceSex(void){
	int a = 1, b;
	while(a == 1){
		printf("qual seu sexo?\n-1-male\n-2 -Female\n");
		scanf("%d",&b);
		if(b == 1){a = 0;return 1;}
		else if(b == 2){a = 0;return 2;}
		else{system("cls");}
	}
}

int choiceClssA(void){
	int a = 1, b;
	while(a == 1){
		printf("Selecione ua classe:\n1-gerreiro\n2-arqueiro\n3-mago\n4-ladÃ£o\n5-teplario\n");
		scanf("%d",&b);
		if(b == 1){a = 0;return 1;}
		else if(b == 2){a = 0;return 2;}
		else if(b == 3){a = 0;return 3;}
		else if(b == 4){a = 0;return 4;}
		else if(b == 5){a = 0;return 55;}
		else{system("cls");}
	}
}

int choiceTalent(void){
	int a = 1, b;
	while(a == 1){
		printf("\n");
		scanf("%d",&b);
		if(b == 1){a = 0;return 1;}
		else if(b == 2){a = 0;return 2;}
		else if(b == 3){a = 0;return 3;}
		else if(b == 4){a = 0;return 4;}
		else if(b == 5){a = 0;return 5;}
		else if(b == 6){a = 0;return 6;}
		else{system("cls");}
	}
}
