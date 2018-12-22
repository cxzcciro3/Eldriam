//Inicio 0.9
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
	printf("então por favor me reponda...\n");
	printf("*******************************************\n");
	system("cls");	
	sex = choiceSex();
	classe = choiceclasse();
	talent = choiceTalent();
	
	permanentSave(sex, classe, talent);
	characterSave(classe);
	calculoDano();
	calculoArmadura();
	calculoVida();
	calculoVelocidade();
	
	capitulo_01();
	
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

	file = fopen("Exp.txt","w");

	fprintf(file,"0 0 1\n");

	fclose(file);

}
void calculoDano(void){
	int i;
	int lixo; 
	int arma;
	int forca;
	int dexteza;
	int danoArma; 
	int cadencia;
	int danoMaximo;
	int danoMinimo;

	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&forca);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&dexteza);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&arma);
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
void calculoArmadura(void){
	int a = 0;
	int b = 5;
	int lixo;
	int forca;
	int agilidade;
	int constituicao;

	int capacete;
	int armadura;
	int luvas;
	int botas;

	int capaceteV;
	int armaduraV;
	int luvasV;
	int botasV;
	int capaceteA;
	int armaduraA;
	int luvasA;
	int botasA;
	int armaduraTotal;
	int def;
	int velocidadeArmadura;
	
	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&forca);
	fscanf(file,"%d",&agilidade);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&constituicao);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);

	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&capacete);
	fscanf(file,"%d",&armadura);
	fscanf(file,"%d",&luvas);
	fscanf(file,"%d",&botas);
	
	
	fclose(file);
 	capacete = capacete - 1;
	armadura = armadura - 1;
	luvas = luvas - 1;
	botas = botas - 1;

	file = fopen("Capacete.txt","r");
	while(a < capacete){
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		a = a + 1;
	}
	fscanf(file,"%d",&capaceteA);
	fscanf(file,"%d",&capaceteV);
	a = 0;
	fclose(file);

	file = fopen("Armadura.txt","r");
	while(a < armadura){
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		a = a + 1;
	}
	fscanf(file,"%d",&armaduraA);
	fscanf(file,"%d",&armaduraV);
	a = 0;
	fclose(file);

	file = fopen("Luvas.txt","r");
	while(a < luvas){
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		a = a + 1;
	}
	fscanf(file,"%d",&luvasA);
	fscanf(file,"%d",&luvasV);
	a = 0;
	fclose(file);

	file = fopen("Botas.txt","r");
	while(a < botas){
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		a = a + 1;
	}
	fscanf(file,"%d",&botasA);
	fscanf(file,"%d",&botasV);
	fclose(file);
	armaduraTotal = capaceteA + armaduraA + luvasA + botasA;
	velocidadeArmadura = capaceteV + armaduraV + luvasV + botasV;
	def = armaduraTotal + constituicao;
	file = fopen("CharacterSaveDef.txt","w");
	fprintf(file,"%d %d", def, velocidadeArmadura);
	fclose(file);
}
void calculoVida(void){
	int lixo; 
	int constituicao;
	int vida;

	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&constituicao);
	fclose(file);
	
	vida = 10 + 5 * constituicao;	

	file = fopen("VidaSave.txt","w");
	fprintf(file,"%d", vida);
	fclose(file);
}
void calculoVelocidade(void){
	int a = 0;
	int b = 5;
	int lixo; 
	int agilidade;
	int armaduraV;
	int armaV; 
	int arma;
	int velocidade;

	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&agilidade);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&arma);

	fclose(file);
	arma = arma - 1;
	file = fopen("Armas.txt","r");
	while(a < arma){
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		fscanf(file,"%d",&lixo);
		a = a + 1;
	}
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&armaV);
	fscanf(file,"%d",&lixo);
	a = 0;
	fclose(file);
	file = fopen("CharacterSaveDef.txt","r");
	fscanf(file,"%d",&lixo);
	fscanf(file,"%d",&armaduraV);
	fclose(file);
 	velocidade = 100 + armaduraV + armaV;
	file = fopen("CharacterSaveVel.txt","w");
	fprintf(file,"%d", velocidade);
	fclose(file);
}

void menu(){
	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;

	while(mantemLoopMenu == 1){
		printf("**********menu do jogador**********\n");
		printf("1 - continuar\n");
		printf("2 - inventario\n");
		printf("3 - equipamentos\n");
		printf("4 - personagem\n");
		printf("5 - sair para o menu principal\n");
		printf("***********************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			system("cls");
			mantemLoopMenu = 0;
		}else if(opcaoUsuarioMenu == 2){
			inventario();
		}else if(opcaoUsuarioMenu == 3){
			eqipamentos();
		}else if(opcaoUsuarioMenu == 4){
			personagem();
		}
		system("cls");
}

void inventario(){

	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;

	while(mantemLoopMenu == 1){
		printf("**********Inventario**********\n");
		printf("1 - equipamentos\n");
		printf("2 - consumiveis\n");
		printf("3 - itens\n");
		printf("5 - sair\n");
		printf("***********************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			inventarioEquipamentos();
		}else if(opcaoUsuarioMenu == 2){
			inventarioConsumiveis();
		}else if(opcaoUsuarioMenu == 3){
			inventarioItens();
		}else if(opcaoUsuarioMenu == 4){
			system("cls");
			mantemLoopMenu = 0;
		}
		system("cls");
}
void eqipamentos(){

}
void personagem(){
	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;
	int lixo;
	int forca;
	int agilidade;
	int dexteza;
	int constituicao;
	int inteligencia;
	int sabedoria;
	int pontos;
	

	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&forca);
	fscanf(file,"%d",&agilidade);
	fscanf(file,"%d",&dexteza);
	fscanf(file,"%d",&constituicao);
	fscanf(file,"%d",&inteligencia);
	fscanf(file,"%d",&sabedoria);
	fclose(file);

	while(mantemLoopMenu == 1){
		printf("**********personagem**********\n");
		printf("for: %d\n");
		printf("agi: %d\n");
		printf("dex: %d\n");
		printf("com: %d\n");
		printf("int: %d\n");
		printf("sab: %d\n");
		printf("ponts: %d\n");
		printf("******************************\n");

		printf("1 - Almentar estato\n");
		printf("2 - mais informacões\n");
		printf("3 - voltar\n");
		printf("******************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			upStatus();
		}else if(opcaoUsuarioMenu == 2){
			InfomacoesDoPersonagem();
		}else if(opcaoUsuarioMenu == 3){
			system("cls");
			mantemLoopMenu = 0;
		}
		system("cls");
}


void inventarioEquipamentos(){
	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;

	while(mantemLoopMenu == 1){
		printf("**********Inventario**********\n");
		printf("1 - Armas\n");
		printf("2 - Capacetes\n");
		printf("3 - Armaduras\n");
		printf("4 - Luvas\n");
		printf("5 - Botas\n");
		printf("6 - voltar\n");
		printf("******************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			inventarioArmas();
		}else if(opcaoUsuarioMenu == 2){
			inventarioCapacetes();
		}else if(opcaoUsuarioMenu == 3){
			inventarioArmaduras();
		}else if(opcaoUsuarioMenu == 4){
			inventarioLuvas();
		}else if(opcaoUsuarioMenu == 5){
			inventarioBotas();
		}else if(opcaoUsuarioMenu == 6){
			system("cls");
			mantemLoopMenu = 0;
		}
		system("cls");
}
void inventarioConsumiveis(){

}
void inventarioItens(){

}


upStatus(){

	bool mantemLoopMenu = 1;
	int opcaoUsuarioMenu = 0;
	int lixo;
	int forca;
	int agilidade;
	int dexteza;
	int constituicao;
	int inteligencia;
	int sabedoria;
	int pontos;

	int arma;
	int capacete;
	int armadura;
	int luvas;
	int botas;

	int forcaNova;
	int agilidadeNova;
	int dextezaNova;
	int constituicaoNova;
	int inteligenciaNova;
	int sabedoriaNova;
	int pontosNovos;
	

	FILE *file;
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&forca);
	fscanf(file,"%d",&agilidade);
	fscanf(file,"%d",&dexteza);
	fscanf(file,"%d",&constituicao);
	fscanf(file,"%d",&inteligencia);
	fscanf(file,"%d",&sabedoria);

	fscanf(file,"%d",&arma);
	fscanf(file,"%d",&capacete);
	fscanf(file,"%d",&armadura);
	fscanf(file,"%d",&luvas);
	fscanf(file,"%d",&botas);
	fclose(file);

	forca = forcaNova;
	agilidade = agilidadeNova;
	dexteza = dextezaNova;
	constituicao = constituicaoNova;
	inteligencia = inteligenciaNova;
	sabedoria = sabedoriaNova;
	pontos = pontosNovos;

	while(mantemLoopMenu == 1){
		printf("**********personagem**********\n");
		printf("for: %d > for: %d\n",forca,forcaNova);
		printf("agi: %d > agi: %d\n",agilidade,agilidadeNova);
		printf("dex: %d > dex: %d\n",dexteza,dextezaNova);
		printf("com: %d > com: %d\n",constituicao,constituicaoNova);
		printf("int: %d > int: %d\n",inteligencia,inteligenciaNova);
		printf("sab: %d > sab: %d\n",sabedoria,sabedoriaNova);
		printf("ponts: %d\n",pontosNovos);
		printf("******************************\n");

		printf("1 - up for\n");
		printf("2 - up agi\n");
		printf("3 - up dex\n");
		printf("4 - up com\n");
		printf("5 - up int\n");
		printf("6 - up sab\n");
		printf("7 - salvar\n");
		printf("8 - canselar\n");
		printf("9 - voltar\n");
		printf("******************************\n");
		
		scanf("%d",&opcaoUsuarioMenu);
		
		if(opcaoUsuarioMenu == 1){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				forcaNova = forcaNova + 1;
			}
		}else if(opcaoUsuarioMenu == 2){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				agilidadeNova = agilidadeNova + 1;
			}
		}else if(opcaoUsuarioMenu == 3){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				dextezaNova =  dextezaNova + 1;
			}
		}else if(opcaoUsuarioMenu == 4){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				constituicaoNova = constituicaoNova + 1;
			}
		}else if(opcaoUsuarioMenu == 5){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				inteligenciaNova = inteligenciaNova + 1;
			}
		}else if(opcaoUsuarioMenu == 6){
			if(pontosNovos > 0){
				pontosNovos = pontosNovos - 1;
				sabedoriaNova = sabedoriaNova + 1;
			}
		}else if(opcaoUsuarioMenu == 7){
			file = fopen("CharacterSave.txt","w");
			
			fprintf(file,"%d %d %d %d %d %d %d %d %d %d %d",forcaNova, agilidadeNova, dextezaNova, constituicaoNova, inteligenciaNova, sabedoriaNova, arma, capacete, armadura, luvas, botas);

			fclose(file);
			upStatus();
			mantemLoopMenu = 0;
		}else if(opcaoUsuarioMenu == 8){
			upStatus();
			mantemLoopMenu = 0;
		}else if(opcaoUsuarioMenu == 9){
			system("cls");
			mantemLoopMenu = 0;
		}
		system("cls");

}
InfomacoesDoPersonagem(){
	int a = 1;
	int b;
	int vida;
	int dano;
	int defesa;
	int velocidade;

	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&vida);
	fclose(file);
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&dano);
	fclose(file);
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&defesa);
	fclose(file);
	file = fopen("CharacterSave.txt","r");
	fscanf(file,"%d",&velocidade);
	fclose(file);

	while(a == 1){
		printf("****************************************\n");
		printf("vida: %d\n", vida);
		printf("dano: %d\n", dano);
		printf("defesa: %d\n", defesa);
		printf("velocidaade de ataque: %d\n", velocidade);
		printf("critico\n");
		printf("dano critico\n");
		printf("****************************************\n");
		printf("****************************************\n\n\n");
		
		printf("****************************************\n");
		printf("insira 1 para continuar...\n");
		printf("****************************************\n");

		scanf("%d",&b);

		if(b == 1){
			a = 0;
		}
	}

}


void strat(void){
	srand(time(NULL));
	int a = 1, b = 0, c = 1;
	int mostroHP1 , mostroHP2, mostroHP3, mostroHP4, HP, danoEspada, danoEscudo, danomostro1, danomostro2, danomostro3, danomostro4, dano, escolha;
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



void capitulo_01(){
	printf("****************************************\n");
	printf("****************************************\n");
	printf("Voce retoma a consiencia, sente aguas nos pes e areia na sua cara, voce se levanta lentantamnte e obiserva o  terendo em vouta .\n");
	
}
