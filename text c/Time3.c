
#include <stdio.h>
#include <time.h>

int main() {

	int progresoP = 0;
	int progresoM1 = 0;
	int progresoM2 = 0;
	int estatos = 0;
	int manter = 1;
	srand(time(NULL));

	while(manter == 1){
		
		system("cls");
		
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
  		
  		printf("\n");

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
  		
		printf("\n");

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
  		Sleep(500);
  		
		if(progresoP >= 2000){
			system("cls");
			printf("sua vez!!! \n");
			Sleep(2500);
			progresoP = 0;
		}
		if(progresoM1 >= 2000){
			system("cls");
			printf("vez do mostro 1\n ");
			Sleep(2500);
			progresoM1 = 0;
		}
		if(progresoM2 >= 2000){
			system("cls");
			printf("vez do mostro 2\n ");
			Sleep(2500);
			progresoM2 = 0;
		}

		progresoP = progresoP + (rand() %(200+100)) + 20;
		progresoM1 = progresoM1 + (rand() %(200+100)) + 20;
		progresoM2 = progresoM2 + (rand() %(200+100)) + 20;
		
  	}

    return 0;
}
