//Inicio
  //Necessario especificar qual classe será utilizada como heroi principal
  //Necessario especificar qual o sexo do perssonagem

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	menu();

}

void menu(void){
	int a = 1, b = 0;	
	
	while(a == 1){
		printf("-----Menu----- \n\n");
		printf("1-Start New Game\n");
		printf("x2-Start Load Game\n");
		printf("x3-Options\n");
		printf("4-Quit\n");
		printf("\n******************************************* \n");
		
		scanf("%d",&b);
		
		if(b == 1){
			start();
		}
		
		else if(b == 4){
			a = 0;
		}
		system("cls");
	}
}


void start(void){
	int a, b, c, sex, talent, clssA;
	int choiceSex(void), choiceTalent(void), choiceClssA(void);
	printf("Você esta começando uma nova aventura...\n");
	printf("antes de todo aventura e necesario preparação.\n");
	printf("então por favor me reponda...\n");

	printf("\n");
	sex = choiceSex();
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	clssA = choiceClssA();

	printf("\n");
	printf("\n");
	printf("\n");
	talent = choiceTalent();

	printf("\n");
	printf("\n");
	printf("\n");
}

int choiceSex(void){
	int a = 1, b;
	while(a == 1){
		printf("qual seu sexo?\n-1-male\n-2 -Female\n");
		scanf("%d",&b);
		if(b == 1){a = 0;}
		else if(b == 2){a = 0;}
		else{system("cls");}
	}
}

int choiceClssA(void){
	int a = 1, b;
	while(a == 1){
		printf("Selecione ua classe:\n1-gerreiro\n2-arqueiro\n3-mago\n4-ladão\n5-teplario\n");
		scanf("%d",&b);
		if(b == 1){a = 0;}
		else if(b == 2){a = 0;}
		else if(b == 3){a = 0;}
		else if(b == 4){a = 0;}
		else if(b == 5){a = 0;}
		else{system("cls");}
	}
}

int choiceTalent(void){
	int a = 1, b;
	while(a == 1){
		printf("\n");
		scanf("%d",&b);
		if(b == 1){a = 0;}
		else if(b == 2){a = 0;}
		else if(b == 3){a = 0;}
		else if(b == 4){a = 0;}
		else if(b == 5){a = 0;}
		else if(b == 6){a = 0;}
		else{system("cls");}
	}
}
