//Inicio 0.3
  //Necessario especificar qual o sexo do perssonagem
  //Necessario especificar qual o classe do perssonagem
  //Necessario especificar qual o talento do perssonagem
  
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	void menu(void);
	
	
	setlocale(LC_ALL, "Portuguese");
	menu();

}

void menu(void){
	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;	
	void start(void);
	
	while(mantemLoopMenu == 1){
		printf("********************Menu******************\n");
		printf("1-Start New Game\n");
		printf("x2-Start Load Game\n");
		printf("x3-Options\n");
		printf("4-Quit\n");
		printf("*******************************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			system("cls");
			start();
			mantemLoopMenu = 0;
		}else if(opcaoUsuarioMenu == 2){
			
		}else if(opcaoUsuarioMenu == 3){
		
		}else if(opcaoUsuarioMenu == 4){
			mantemLoopMenu = 0;
		}
		system("cls");
	}
}

void start(void){
	int sex;
	int classe;
	int talent;
	void permanentSave(int sex, int classe, int talent);
	void characterSave(int classe);
	
	printf("****************************************\n");
	printf("Você esta começando uma nova aventura...\n");
	printf("antes de qualquer aventura é necesario preparação.\n");
	printf("eentão por favor me reponda...\n");
	printf("*******************************************\n");
		
	sex = choiceSex();
	classe = choiceclasse();
	talent = choiceTalent();
	
	permanentSave(sex, classe, talent);
	characterSave(classe);
	
	system("pause");
}

int choiceSex(void){
	int mantemLoopSex = 1; 
	int opcaoUsuarioSex;
	
	while(mantemLoopSex == 1){
		printf("\nSelecione seu sexo?\n1-Menino\n2-Menina\n");
		
		scanf("%d",&opcaoUsuarioSex);
		
		if(opcaoUsuarioSex == 1){
			return 1;
		
		}else if(opcaoUsuarioSex == 2){
			return 2;
		}
	}
}

int choiceclasse(void){
	int mantemLoopClasse = 1;
	int opcaoUsuarioClass;
	
	while(mantemLoopClasse == 1){
		printf("\nSelecione sua classe:\n1-Guerreiro\n2-Arqueiro\n3-Mago\n4-Ladrão\n5-Templario\n");
		scanf("%d",&opcaoUsuarioClass);
		
		if(opcaoUsuarioClass == 1){
			return 1;
		}else if(opcaoUsuarioClass == 2){
			return 2;
		}else if(opcaoUsuarioClass == 3){
			return 3;
		}else if(opcaoUsuarioClass == 4){
			return 4;
		}else if(opcaoUsuarioClass == 5){
			return 5;
		}
	}
}

int choiceTalent(void){
	int mantemLoopTalento = 1;
	int opcaoUsuarioTalento;

	while(mantemLoopTalento == 1){
		printf("\nSelecione seu talento:\n1-Fogo\n2-Agua\n3-Vento\n4-Luz\n5-Trevas\n");
		
		scanf("%d",&opcaoUsuarioTalento);
		
		if(opcaoUsuarioTalento == 1){
			return 1;
		}else if(opcaoUsuarioTalento == 2){
			return 2;
		}else if(opcaoUsuarioTalento == 3){
			return 3;
		}else if(opcaoUsuarioTalento == 4){
			return 4;
		}else if(opcaoUsuarioTalento == 5){
			return 5;
		}else if(opcaoUsuarioTalento == 6){
			return 6;
		}
	}
}
void permanentSave(int sex, int classe, int talent){

FILE *file;

file = fopen("PermanentSave.txt","w");
fprintf(file,"%d %d %d", sex, classe, talent);
fclose(file);

}
void characterSave(int classe){
	FILE *file;

	file = fopen("CharacterSave.txt","w");

	if(classe == 1){
		fprintf(file,"5 3 3 5 1 1 \n");
		fprintf(file,"%d %d %d %d %d",classe, classe, classe, classe, classe);
	}else if(classe == 2){
		fprintf(file,"2 4 6 1 2 2 \n");
		fprintf(file,"%d %d %d %d %d",classe, classe, classe, classe, classe);
	}else if(classe == 3){
		fprintf(file,"1 2 4 2 6 4 \n");
		fprintf(file,"%d %d %d %d %d",classe, classe, classe, classe, classe);
	}else if(classe == 4){
		fprintf(file,"4 6 3 2 2 2 \n");
		fprintf(file,"%d %d %d %d %d",classe, classe, classe, classe, classe);
	}else if(classe == 5){
		fprintf(file,"2 1 2 3 3 6 \n");
		fprintf(file,"%d %d %d %d %d",classe, classe, classe, classe, classe);
	}
	
	fclose(file);
}
void calculoDano(void){
	int i, lixo, arma, forca, dexteza, danoArma, cadencia, danoMaximo, danoMinimo;
	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",forca);
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",dexteza);
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",arma);
	fclose(file);
	if(arma == 1){danoArma = 30;cadencia = 50;}
	else if(arma == 2){danoArma = 20;cadencia = 75;}
	else if(arma == 3){danoArma = 5;cadencia = 100;}
	else if(arma == 4){danoArma = 15;cadencia = 80;}
	else if(arma == 5){danoArma = 25;cadencia = 40;}
	else if(arma == 6){danoArma = 75;cadencia = 60;}
	else if(arma == 7){danoArma = 100;cadencia = 70;}
	else if(arma == 8){danoArma = 80;cadencia = 50;}
	else if(arma == 9){danoArma = 10;cadencia = 100;}
	else if(arma == 10){danoArma = 100;cadencia = 60;}
	else if(arma == 11){danoArma = 50;cadencia = 60;}
	else if(arma == 12){danoArma = 300;cadencia = 10;}
	else if(arma == 13){danoArma = 150;cadencia = 80;}
	else if(arma == 14){danoArma = 150;cadencia = 50;}
	else if(arma == 15){danoArma = 300;cadencia = 50;}
	else{danoArma = 0;cadencia = 50;}
	danoMaximo = danoArma + (forca * 0.2) + (dexteza * 0.2);
	danoMinimo = (danoArma * cadencia)/100;

	file = fopen("danoSave.txt","w");
	fprintf(file,"%d %d", danoMaximo, danoMinimo);
	fclose(file);
}
int calculoArmadura(void){
	int a = 0;
	int lixo , forca, agilidade, constituição, capacete, armadura, luvas, botas, capaceteV, armaduraV, luvasV, botasV, capaceteA, armaduraA, luvasA, botasA;
	FILE *file;
	file = fopen("CharacterSave.txt","r");



	file = fopen("Capacete.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",capaceteA);
	fscanf(file,"%d",capaceteV);
	a = 0;
	fclose(file);

	file = fopen("Armadura.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",armaduraA);
	fscanf(file,"%d",armaduraV);
	a = 0;
	fclose(file);

	file = fopen("Luvas.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",luvasA);
	fscanf(file,"%d",luvasV);
	a = 0;
	fclose(file);

	file = fopen("Botas.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",botasA);
	fscanf(file,"%d",botasV);
	fclose(file);
}
int calculoVida(void){
	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fclose(file);
}
int calculoVelocidade(void){
	int a = 0;
	int lixo , capaceteV, armaduraV, luvasV, botasV, armaV; 
	FILE *file;
	file = fopen("CharacterSave.txt","w");
	file = fopen("Armas.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",armaV);
	fscanf(file,"%d",lixo);
	a = 0;
	fclose(file);
	
	file = fopen("Capacete.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",capaceteV);
	a = 0;
	fclose(file);

	file = fopen("Armadura.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",armaduraV);
	a = 0;
	fclose(file);

	file = fopen("Luvas.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",luvasV);
	a = 0;
	fclose(file);
	
	file = fopen("Botas.txt","r");
	while(a < b){
		fscanf(file,"%d",lixo);
		fscanf(file,"%d",lixo);
		a = a + 1;
	}
	fscanf(file,"%d",lixo);
	fscanf(file,"%d",botasV);
	fclose(file);
}