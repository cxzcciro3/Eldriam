//iprimir um texto pergunttar genero perguntar clase perguntar talento
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int a = 1, b = 0;
	void strat(void);
	while(a == 1){
		printf("---menu--- \n\n");
		printf("1-Strat newgame \n");
		printf("2-Strat oldgame\n");
		printf("3-Options \n");
		printf("4-Quit \n");
		printf("\n******************************************* \n");
		scanf("%d",&b);
		if(b == 1){
			strat();
		}
		else if(b == 4){a = 0;}
		else{}
		system("cls");
	}
}

void strat(void){
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
	printf(" \n");
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
