//Inicio 0.12
  //Necessario especificar qual o sexo do perssonagem
  //Necessario especificar qual o classe do perssonagem
  //Necessario especificar qual o talento do perssonagem
  
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#include <conio.h>
#pragma comment(lib,"winmm.lib") 

int cor = 3;
int intervalo = 250;
int classePersonagem = 1;

int eixoX;
int eixoY;

// Declaracão de funções 
void menuPrincipal(void);
void start(void);
void permanentSave(int sex, int classe, int talent);
void characterSave(int classe);
int calculoStatos(int tipoStato);
void menuJogador();
void inventario();
void eqipamentos();
void personagem();
void upStatus();
void InfomacoesDoPersonagem();
void DecidirCombate(void);
void equipamentoNome(int tipo, int equipamentoIP);
void dialogo(int npc, int dialogoIP);
int menu(int menuIP);
int escolhaf(int escolhaIP , int estilo);
void TocarMusica(int MusicaIP);
void jogo(int save);
int mapaf(int mapaIP);
int combate(int monstro1, int monstro2, int classe);
int historia(int saveIP);



int main(){
	
	void menuPrincipal(void);
	
	
	setlocale(LC_ALL, "Portuguese");
	menuPrincipal();

}
void menuPrincipal(void){
	int mantemLoopMenu = 1;
	int opcaoMenu = 0;	
	void start(void);
	int menu(int menuIP);
	TocarMusica(1);
	
	
	
	while(mantemLoopMenu == 1){
		
		opcaoUsuarioMenu = menu(1);
		
		if(opcaoUsuarioMenu == 1){
			system("cls");
			start();
			mantemLoopMenu = 0;
		}else if(opcaoUsuarioMenu == 2){
			
		}else if(opcaoUsuarioMenu == 3){
		
		}else if(opcaoUsuarioMenu == 4){
			mantemLoopMenu = 0;
		}
		else{
			
		}
		system("cls");
	}
}
void start(void){
	int sex;
	int classe;
	int talent;

	
	printf("****************************************\n");
	printf("Você esta começando uma nova aventura...\n");
	printf("antes de qualquer aventura é necesario preparação.\n");
	printf("então por favor me reponda...\n");
	printf("*******************************************\n");
	system("cls");	
	sex = escolhaf(1 , 0);
	classe = escolhaf(2 , 0);
	talent = escolhaf(3 , 0);
	
	permanentSave(sex, classe, talent);
	characterSave(classe);
	
	classePersonagem = classe; // provisorio
	
	jogo(1);
//	calculoDano();
//	calculoArmadura();
//	calculoVida();
//	calculoVelocidade();
	
//	capitulo_01();
	
	system("pause");
}
void permanentSave(int sex, int classe, int talent){

FILE *file;

file = fopen("save\\save1\\PermanentSave.txt","w");
fprintf(file,"%d %d %d", sex, classe, talent);
fclose(file);

}
void characterSave(int classe){
	FILE *file;

	file = fopen("save\\save1\\CharacterSave.txt","w");

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

	file = fopen("save\\save1\\Exp.txt","w");

	fprintf(file,"0 0 1\n");

	fclose(file);

}
void menuJogador(){
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
}
void upStatus(){

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
}
void InfomacoesDoPersonagem(){
	int a = 1;
	int b;
	int vida;
	int dano;
	int defesa;
	int velocidade;
	

	FILE *file;
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
void DecidirCombate(void){
	
}
void equipamentoNome(int tipo, int equipamentoIP){
	char lixo[100] = "";
	char nome[100] = "";
	char invalido[100] = "equipamento_invalido";
	int numero;
	int manter;
	int i;
	int erro = 0;
	
	FILE *file;
	file = fopen("Nova\\arquivo.txt","r");
	
	manter = 1;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/' && lixo[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(lixo[0] == '/' && lixo[1] == '/'){
			fscanf(file,"%d",&numero);
			if(numero == tipo){
				manter = 0;
			}
		}
	}
	if(equipamentoIP != 1 && erro == 0){
		manter = 1;
	}
	while(manter == 1){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(lixo[0] = ':'){
			fscanf(file,"%d",&numero);
			if((numero + 1) == equipamentoIP){
				manter = 0;
				fscanf(file,"%s",&nome);
			}
		}
	}
	fclose(file);
	if(erro == 1){
		for (i = 0; i < 99; i++){
			nome[i] = invalido[i];
		}
	}
	printf("%s", nome);
}
void dialogo(int npc, int dialogoIP){
	
	char nome[100] = "";
	char invalido[100] = "equipamento_invalido";
	int numero;
	int manter;
	int i;
	int erro = 0;
	
	FILE *file;
	file = fopen("Nova\\arquivo.txt","r");
	
	manter = 1;
	while(manter == 1){
		fscanf(file,"%s",&nome);
		if(nome[0] == '/' && nome[1] == '/' && nome[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(nome[0] == '/' && nome[1] == '/'){
			fscanf(file,"%d",&numero);
			fscanf(file,"%s",&nome);
			fscanf(file,"%s",&nome);
			if(numero == npc){
				manter = 0;
			}
		}
	}
	manter = 1;
	while(manter == 1){
		fscanf(file,"%s",&nome);
		if(nome[0] == '/' && nome[1] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(nome[0] = ':'){
			fscanf(file,"%d",&numero);
			if(numero == dialogoIP){
				manter = 0;
			}
		}
	}
	manter = 1;
	while(manter == 1){
		fscanf(file,"%s",&nome);
		if(nome[0] = ':'){
			manter = 0;
		}
		else{
			printf("%s", nome);	
		}
	}
	
	
	fclose(file);
}
int menu(int menuIP){
	
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
	//
	char lixo[100] = "";
	char nome[100] = "";
	char menuNome[100] = "";
	char opcoes[100][20];
	char invalido[100] = "equipamento_invalido";
	int numero;
	int manter;
	// -
	//
	int i;
	int contador;
	int contador2;
	int erro = 0;
	// -
	FILE *file;
	file = fopen("data\\menu.txt","r");
	// Encontar menu
	manter = 1;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/' && lixo[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(lixo[0] == '/' && lixo[1] == '/'){
			fscanf(file,"%d",&numero);
			fscanf(file,"%s",&menuNome);
			fscanf(file,"%s",&lixo);
			if(numero == menuIP){
				manter = 0;
			}
		}
	}	
	// -
	// Armzenar opções do menu
	manter = 1;
	contador = 0;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/'){
			manter = 0;
		}
		else{
			
			for (i = 0; i < 99; i++){
				opcoes[i][contador] = lixo[i];
			}
			contador = contador + 1;
		}
	}
	fclose(file);
	// -
	//
	manterMenu = 1;
	while(manterMenu == 1){
		// Imprecão
		printf("%s \n", menuNome);
		contador2 = 0;
		while(contador2 < contador){
			if(selecao == (contador2 + 1)){
				SetConsoleTextAttribute(hConsole, cor);
			}
			for (i = 0; i < 99; i++){
				 nome[i] = opcoes[i][contador2];
			}
			printf("%s \n", nome);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			contador2 = contador2 + 1;
		}
		
		printf("\n******************************************* \n");
		// -
		// Capitura
		escolha = getch();
   		// -
		// Oque fazer com produto caputurado
		if(escolha == 'w' && selecao > 1){
			selecao = selecao - 1;
		}
		else if(escolha == 's' && selecao < contador){
			selecao = selecao + 1;
		}
		else if(escolha == 32){
			selecionado = selecao;
			manterMenu = 0;
		}
		else{
			
		}
		// -
		system("cls");
	}
	return(selecao);
}
int escolhaf(int escolhaIP , int estilo){
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
	//
	char lixo[100] = "";
	char nome[100] = "";
	char menuNome[100] = "";
	char opcoes[100][20];
	char invalido[100] = "equipamento_invalido";
	int numero;
	int manter;
	// -
	//
	int i;
	int contador;
	int contador2;
	int contador3;
	int erro = 0;
	// -
	int enuciado[100][50];
	
	FILE *file;
	file = fopen("data\\escolhas.txt","r");
	
	manter = 1;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/' && lixo[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(lixo[0] == '/' && lixo[1] == '/'){
			fscanf(file,"%d",&numero);
			fscanf(file,"%s",&menuNome);
			fscanf(file,"%s",&lixo);
			if(numero == escolhaIP){
				manter = 0;
			}
		}
	}	
	contador3 = 0;
	manter = 1;
	erro = 0;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == ':'){
			manter = 0;
		}
		else{
			for (i = 0; i < 99; i++){
				enuciado[i][contador3] = lixo[i];
			}
			contador3 = contador3 + 1;
		}
	}
	
	// Armzenar opções do menu
	manter = 1;
	contador = 0;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/'){
			manter = 0;
		}
		else{ 
		
			for (i = 0; i < 99; i++){
				opcoes[i][contador] = lixo[i];
			}
			contador = contador + 1;
		}
	}
	fclose(file);
	// -
	//
	manterMenu = 1;
	while(manterMenu == 1){
		// Imprecão
		contador2 = 0;
		while(contador2 < contador3){
			for (i = 0; i < 99; i++){
				 nome[i] = enuciado[i][contador2];
			}
			printf("%s ", nome);
			contador2 = contador2 + 1;
		}
		printf("\n");
		contador2 = 0;
		while(contador2 < contador){
			if(selecao == (contador2 + 1)){
				SetConsoleTextAttribute(hConsole, cor);
			}
			for (i = 0; i < 99; i++){
				 nome[i] = opcoes[i][contador2];
			}
			printf("%s \n", nome);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			contador2 = contador2 + 1;
		}
		
		printf("\n******************************************* \n");
		// -
		// Capitura
		escolha = getch();
   		// -
		// Oque fazer com produto caputurado
		if(escolha == 'w' && selecao > 1){
			selecao = selecao - 1;
		}
		else if(escolha == 's' && selecao < contador){
			selecao = selecao + 1;
		}
		else if(escolha == 32){
			selecionado = selecao;
			manterMenu = 0;
		}
		else{
			
		}
		// -
		system("cls");
	}
	return(selecao);	
}
void TocarMusica(int MusicaIP){
	int numero;
	char nome[100];
	int i;
	
	FILE *file;
	file = fopen("data\\lista_musicas.txt","r");
	i = 0;
	while(i < MusicaIP){
		fscanf(file,"%s",&nome);
		i = i + 1;
	}
	fclose(file);
	PlaySound(nome, NULL, SND_FILENAME | SND_ASYNC);
	
}
int mapaf(int mapaIP){
	// necesario para impreção de cores
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	// -

	
	int tamanhoMaximo = 150;
	// variaveis necesarias
	int x = 1, y = 1, exit = 0, escolhaExit = 0;
	int inicilX, inicilY;
	char mapa[tamanhoMaximo][tamanhoMaximo];
	int cor, corx, cory;
	char escolha;
	char mapaPrint[tamanhoMaximo][(tamanhoMaximo / 2)];
	int manter;
	int contador[5];
	int erro = 0;
	int interacao;
	setlocale(LC_ALL, "C");
	// -
	// cores
	int corNPC = 2;
	int corInimigo = 4;
	int corSaida = 3;
	int corParede = 7;
	int corVasio = 0;
	int corPersonagem = 14;
	// - 
	char lixo[100] = "";
	char nome[100] = "";
	char menuNome[100] = "";
	char opcoes[100][20];
	char invalido[100] = "equipamento_invalido";
	int numero;
	
	x = eixoX;
	y = eixoY;
	
	// iguala todos os epasos da matriz mapa[][] a zero
	while(contador[2] < (tamanhoMaximo - 1)){

		while(contador[0] < (tamanhoMaximo - 1)){
			mapa[contador[0]][contador[2]] = '0';
			contador[0] = contador[0] + 1;
		}
		contador[2] = contador[2] + 1;
		contador[0] = 0;
	}
	// -
	FILE *file;
	file = fopen("data\\mapas.txt","r");
	
	// encontra o mapa especificado na fumção
	manter = 1;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&lixo);
		if(lixo[0] == '/' && lixo[1] == '/' && lixo[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(lixo[0] == '/' && lixo[1] == '/'){
			fscanf(file,"%d",&numero);
			fscanf(file,"%s",&menuNome);
			fscanf(file,"%s",&lixo);
			if(numero == mapaIP){
				manter = 0;
			}
		}
	}
	// -
	// lé o mapa do .txt
	contador[0] = 0;
	contador[1] = 0;
	contador[2] = 0;
	contador[3] = 0;
	manter = 1;
	while(manter == 1){
		while(manter == 1){
			fscanf(file,"%s",&lixo[0]);
			mapa[contador[0]][contador[2]] = lixo[0];
			
			
			if(mapa[contador[0]][contador[2]] == ':'){
				manter = 0;
				if(contador[0] > contador[1]){
					contador[1] = contador[0];
				}
			}
			contador[0] = contador[0] + 1;
		}
		manter = 1;
		contador[2] = contador[2] + 1;
		
		
		if(lixo[0] == ':' && lixo[1] == ':'){
			manter = 0;
			contador[3] = contador[2];
		}
		contador[0] = 0;
	}
	// - 
	fclose(file);
	
	contador[0] = 0;
	contador[2] = 0;
	
	while(contador[2] < ((contador[3] / 2) + (contador[3] % 2))){
		while(contador[0] < contador[1]){
			
			if(mapa[contador[0]][(contador[2] * 2)] == '3'){
				corx = corSaida;
			}
			else if(mapa[contador[0]][(contador[2] * 2)] == '1'){
				corx = corParede;
			}
			else if(mapa[contador[0]][(contador[2] * 2)]  == '5'){
				corx = corInimigo;
			}
			else{
				corx = corVasio;
				if(mapa[contador[0]][(contador[2] * 2)] == '2'){
					x = contador[0];
					y = contador[2] * 2;
					inicilX = x;
					inicilY = y;
				}
			}
				
				
			if(mapa[contador[0]][(contador[2] * 2 + 1)] == '3'){
				cory = corSaida;
			}
			else if(mapa[contador[0]][(contador[2] * 2 + 1)]  == '1'){
				cory = corParede;
			}
			else if(mapa[contador[0]][(contador[2] * 2 + 1)]  == '5'){
				cory = corInimigo;
			}
			else{
				cory = corVasio;
				if(mapa[contador[0]][(contador[2] * 2 + 1)]  == '2'){
					x = contador[0];
					y = (contador[2] * 2 + 1);
					inicilX = x;
					inicilY = y;
				}
			}
			
			mapaPrint[contador[0]][contador[2]] = corx + (cory * 16);
			
			contador[0] = contador[0] + 1;
		}
		
		contador[0] = 0;
		contador[2] = contador[2] + 1;
	}

	contador[0] = 0;
	contador[2] = 0;
	
	while(exit == 0){
		while(contador[2] < ((contador[3] / 2) + (contador[3] % 2))){
			while(contador[0] < contador[1]){
				// imprecão da localização do personagem 
				if(contador[2] == (y / 2) && contador[0] == x){
					if((y % 2) == 0){
						corx = corPersonagem;
						
						if(mapa[contador[0]][(contador[2] * 2 + 1)] == '3'){
							cory = corSaida;
						}
						else if(mapa[contador[0]][(contador[2] * 2 + 1)]  == '1'){
							cory = corParede;
						}
						else if(mapa[contador[0]][(contador[2] * 2 + 1)]  == '5'){
							cory = corInimigo;
						}
						else{
							cory = corVasio;
						}
					}
					else{
						cory = corPersonagem;
						if(mapa[contador[0]][(contador[2] * 2)] == '3'){
							corx = corSaida;
						}
						else if(mapa[contador[0]][(contador[2] * 2)] == '1'){
							corx = corParede;
						}
						else if(mapa[contador[0]][(contador[2] * 2)]  == '5'){
							cory = corInimigo;
						}
						else{
							corx = corVasio;
						}
					}
					SetConsoleTextAttribute(hConsole, (corx + (cory * 16)));
				}
				// - 
				// impreção do resto do mapa
				else{
					SetConsoleTextAttribute(hConsole, mapaPrint[contador[0]][contador[2]]);
				}
				// -
				printf("%c",223);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				contador[0] = contador[0] + 1;
			}
			contador[0] = 0;
			printf("\n");
			contador[2] = contador[2] + 1;
		}
		contador[2] = 0;
		printf("\n\nx %d",x);
		printf("\n\ny %d",y);
		printf("\n\nc1 %d",contador[1]);
		
			
   		escolha = getch();
   			

		if(escolha == 'w' && mapa[x][(y - 1)] != '1'){
			y = y - 1;
		}
		else if(escolha == 'd' && mapa[(x + 1)][y] != '1'){
			x = x + 1;
		}
		else if(escolha == 'a' && mapa[(x - 1)][y] != '1'){
			x = x - 1;
		}
		else if(escolha == 's' && mapa[x][(y + 1)] != '1'){
			y = y + 1;
		}
		else if(escolha == 32){
			exit = 1;
			if(mapa[x][y] == '3'){
				interacao = 0;
			}
			else if(mapa[x][y] == '4'){
				interacao = 2;
			}
			else{
				interacao = 0;
				exit = 0;
			}
		}
		else{
			
		}
		if(x < 0){
			x = x + 1;
		}
		if(y < 0){
			y = y + 1;	
		}
		if(x > (contador[1] - 1) ){
			x = x - 1;
		}
		if(y > (contador[3] - 1) ){
			y = y - 1;
		}
		
		if(mapa[x][y] == '5'){
			interacao = 3;
			exit = 1;
		}
			

		system("cls");
		
		
	}
	eixoX = x;
	eixoY = y;
	setlocale(LC_ALL, "Portuguese");
	return(interacao);
}
void jogo(int save){
	
	setlocale(LC_ALL, "Portuguese");
	int manter = 1;
	int estado = 2;
	int opcaoUsuarioMenu = 0;

	eixoX = 1;
	eixoY = 1;
	


	while(manter == 1){
		
		// historia
		if(estado == 1){
			estado = historia(save);
		}
		// mapa
		if(estado == 2){
			estado = mapaf(1);
		}
		// combate
		if(estado == 3){
			estado = combate(1, 2, classePersonagem);
		}
		// menu
		if(estado == 4){
			
			opcaoMenu = menu(2);
			
			if(opcaoMenu == 1){
				estado = 2;
			}
			else if(opcaoMenu == 2){
				
			}
			else if(opcaoMenu == 3){
				
			}
			else if(opcaoMenu == 4){
				
			}
			else if(opcaoMenu == 5){
				
			}
			else if(opcaoMenu == 6){
				
			}
			else if(opcaoMenu == 7){
				estado = 0;
			}
		}
		
		
		if(estado == 0){
			manter = 0;
		}
		
	}

}
int combate(int monstro1IP, int monstro2IP, int classe){
	
	//cores - parte do codigo que define funcionalidade das cores no windows
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	// -
	FILE *file;
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
	int MonstroHP1 = 50, MonstroHP2 = 50, HP = 200, acao, alvo, magia = 0, vez = 1, vezMonstro1, vezMonstro2, danoMagico;
	int dano, danoMaximo = 25, danoMinimo = 10;
	int danoBat1, danoMaximoMonstro1 = 5, danoMinimoMonstro1 = 2, danoBat2, danoMaximoMonstro2 = 5, danoMinimoMonstro2 = 2;
	int velocidadeMaxima = 150, velocidadeMinima = 100;
	int velocidadeMaximaMonstro1 = 80, velocidadeMinimaMonstro1 = 50;
	int velocidadeMaximaMonstro2 = 80, velocidadeMinimaMonstro2 = 50;
	int criticoChance, criticoDano, critico;
	int progresoP = 0;
	int progresoM1 = 0;
	int progresoM2 = 0;
	int estatos = 0;
	int manter = 1;
	int lixo;
	int contador = 0;
	int retorno;
	
	//-
	
	// Define os nomes (Classes e Inimigos)
	char nomeMonstro1[100] = "Mostro1";
	char nomeMonstro2[100] = "Mostro2";
	char nome[100] = "";
	char classe1[100] = "";
	char classe2[100] = "";
	char classe3[100] = "";
	char classe4[100] = "";
	char classe5[100] = "";
	char lixoN[100];
	// -
	file = fopen("data\\provisorio\\classe.txt","r");
	fscanf(file,"%s", &classe1);
	fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	fscanf(file,"%s", &classe2);
	fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	fscanf(file,"%s", &classe3);
	fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	fscanf(file,"%s", &classe4);
	fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	fscanf(file,"%s", &classe5);
	fclose(file);
	
	if(classe == 1){
		for (i = 0; i < 99; i++){
			nome[i] = classe1[i];
		}
	}
	if(classe == 2){
		for (i = 0; i < 99; i++){
			nome[i] = classe2[i];
		}
	}
	if(classe == 3){
		for (i = 0; i < 99; i++){
			nome[i] = classe3[i];
		}
	}
	if(classe == 4){
		for (i = 0; i < 99; i++){
			nome[i] = classe4[i];
		}
	}
	if(classe == 5){
		for (i = 0; i < 99; i++){
			nome[i] = classe5[i];
		}
	}
	
	// -
	
	file = fopen("data\\provisorio\\classe.txt","r");
	fscanf(file,"%s", &lixoN);
	if(classe == 1){
		fscanf(file,"%d %d %d %d %d %d %d", &HP, &danoMaximo, &danoMinimo, &velocidadeMaxima, &velocidadeMinima, &criticoChance, &criticoDano);
	}
	else{
		fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	}
	fscanf(file,"%s", &lixoN);
	if(classe == 2){
		fscanf(file,"%d %d %d %d %d %d %d", &HP, &danoMaximo, &danoMinimo, &velocidadeMaxima, &velocidadeMinima, &criticoChance, &criticoDano);
	}
	else{
		fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	}
	fscanf(file,"%s", &lixoN);
	if(classe == 3){
		fscanf(file,"%d %d %d %d %d %d %d", &HP, &danoMaximo, &danoMinimo, &velocidadeMaxima, &velocidadeMinima, &criticoChance, &criticoDano);
	}
	else{
		fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	}
	fscanf(file,"%s", &lixoN);
	if(classe == 4){
		fscanf(file,"%d %d %d %d %d %d %d", &HP, &danoMaximo, &danoMinimo, &velocidadeMaxima, &velocidadeMinima, &criticoChance, &criticoDano);
	}
	else{
		fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	}
	fscanf(file,"%s", &lixoN);
	if(classe == 5){
		fscanf(file,"%d %d %d %d %d %d %d", &HP, &danoMaximo, &danoMinimo, &velocidadeMaxima, &velocidadeMinima, &criticoChance, &criticoDano);
	}
	else{
		fscanf(file,"%d %d %d %d %d %d %d", &lixo, &lixo, &lixo, &lixo, &lixo, &lixo, &lixo);
	}
	
	fclose(file);
	
	
	file = fopen("data\\provisorio\\monstros.txt","r");
	contador = 0;
	while(contador < monstro1IP){
		fscanf(file,"%s %s %s %s %s %s", &lixoN, &lixoN, &lixoN, &lixoN, &lixoN, &lixoN);
		contador = contador + 1;
	}
	fscanf(file,"%s %s %s %s %s %s", &lixoN, &lixoN, &lixoN, &lixoN, &lixoN, &lixoN);
	fclose(file);
	
	file = fopen("data\\provisorio\\monstros.txt","r");
	contador = 0;
	while(contador < monstro2IP){
		fscanf(file,"%s %s %s %s %s %s", &lixoN, &lixoN, &lixoN, &lixoN, &lixoN, &lixoN);
		contador = contador + 1;
	}
	fscanf(file,"%s %s %s %s %s %s", &lixoN, &lixoN, &lixoN, &lixoN, &lixoN, &lixoN);
	fclose(file);
	
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
			progresoP = progresoP + (rand() %(1 + velocidadeMaxima - velocidadeMinima)) + velocidadeMinima;
			progresoM1 = progresoM1 + (rand() %(1 + velocidadeMaximaMonstro1 - velocidadeMinimaMonstro1)) + velocidadeMinimaMonstro1;
			progresoM2 = progresoM2 + (rand() %(1 + velocidadeMaximaMonstro2 - velocidadeMinimaMonstro2)) + velocidadeMinimaMonstro2;
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
			critico = 0;
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
			dano = (rand() %(1 + danoMaximo - danoMinimo)) + danoMinimo;
		}
		if(magia != 0){
			dano = (dano * danoMagico) / 100;
		}
		if(criticoChance > rand() %100){
			critico = 1;
		}
		if(critico == 1){
			dano = (dano * criticoDano) / 100;
		}
		if(vezMonstro1 == 1){
			danoBat1 =(rand() %(1 + danoMaximoMonstro1 - danoMinimoMonstro1)) + danoMinimoMonstro1;
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
		if(critico == 1 && alvo != 0){
			printf("Critico!/n");
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
			retorno = 0;
		}
		else if (MonstroHP1 < 1 && MonstroHP2 < 1){
			a = 0;
			printf("you win! \n");
			escolha = getch();
			retorno = 2;
			
		}
		
		
	}
	return(retorno);
}

int historia(int saveIP){
	
	
	int npc;
	int mapa = 1;
	int manter;
	int numero;
	char nome[100];
	
	int testeX;
	int testeY;
	
	int erro;
	int contador; 
	int contador2;
	 
	file = fopen("data\\provisorio\\classe.txt","r");
	manter = 1;
	while(manter == 1 && erro == 0){
		fscanf(file,"%s",&nome);
		if(nome[0] == '/' && nome[1] == '/' && nome[2] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(nome[0] == '/' && nome[1] == '/'){
			fscanf(file,"%d",&numero);
			fscanf(file,"%s",&nome);
			fscanf(file,"%s",&nome);
			if(numero == mapa){
				manter = 0;
			}
		}
	}
	
	contador = 0;
	manter = 1;
	while(manter == 1){
		fscanf(file,"%s",&nome);
		if(nome[0] == '/' && nome[1] == '/'){
			manter = 0;
			erro = 1;
		}
		else if(nome[0] == '/'){
			fscanf(file,"%s",&nome);
			fscanf(file,"%s",&nome);
			contador = contador + 1;
		}
		else if(nome[0] == ':'){
			fscanf(file,"%d",&npc); 
			fscanf(file,"%d",&testeX);
			fscanf(file,"%d",&testeY);	
		}
		if(testeX == eixoX && testeY == eixoY){
			manter = 0;
		}
	}
	
	fclose(file);
	
	if(contador == 1){
		
	}
	else if(contador == 2){
		
	}
	else if(contador == 3){
		
	}
	
	// se evento
	if(){
		// checar evento
		// checar se evento ja aconteceu
		// checar roteiro do evento 
		// realizar evento 
	}
	// se npc
	if(){
		// checar npc
		// checar se o npc ja foi contatado
		// checar roteiro do npc
		// imprime os dialogos
	}
	
	// mandar kogadoe paa o mapa ou combate
}

int mundoSave(int saveIP){
	
	
	
	int manter;
	char nome[100];
	
	file = fopen("data\\provisorio\\classe.txt","r");
	if(saveIP == 1){
		file1 = fopen("save\\save1\\mundo_save.txt","w");	
	}
	else if(saveIP == 2){
		file1 = fopen("save\\save2\\mundo_save.txt","w");
	}
	else if(saveIP == 3){
		file1 = fopen("save\\save3\\mundo_save.txt","w");
	}
	
	
	
	manter = 1;
	while(manter == 1){
		fscanf(file,"%s", &nome);
		if(nome[0] == '/' && nome[1] == '/' && nome[2] == '/'){
			fprintf(file1, "\n\n///");
			manter = 0;
		}
		else if(nome[0] == '/' && nome[1] == '/'){
			fscanf(file,"%d", &numero);
			fprintf(file1,"// ");
			fprintf(file1,"%d \n\n", numero);
			cont = 0;
		}
		else if(nome[0] == '/')){
			if(cont > 3){
				fprintf(file1, "/ ");
			}
			cont ++;
		}
		else if(':'){
			if(cont > 3){
				fprintf(file1, "1 ");
			}
		}
	}
}
//int introducao(){
//	printf("****************************************\n");
//	printf("****************************************\n");
//	printf("Voce retoma a consiencia, sente aguas nos pes e areia na sua cara, voce se levanta lentantamnte e obiserva o  terendo em vouta .\n");
	
//}
