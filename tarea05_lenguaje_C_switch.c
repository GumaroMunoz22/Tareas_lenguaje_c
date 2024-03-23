#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int opcion,saldo, retiro, abono,resta, suma;
	saldo = 3000;
	
	do{
		printf("\n-----MENU PRINCIPAL-----\n");
		printf("Bienvenido ¿Que Desea Realizar?\n");
		printf("1 Retiro\n");
		printf("2 Abonar\n");
		printf("3 SALIR\n");
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			system("clear ||cls");
			printf("Su saldo Actual es de $ %d\n",saldo);
			
			printf("¿Que cantidad desea Retirar?\n");
			scanf("%d",&retiro);
			
			resta = saldo -retiro;
			printf("Retiro exitoso su saldo actual es $%d \n",resta);
			printf("****************\n\n");
			
	
			break;
			
		case 2:
			system("clear ||cls");
			printf("Su saldo Actual es de $ %d\n",saldo);
			
			printf("¿Que cantidad desea Depositar?\n");
			scanf("%d",&abono);
			
			suma = saldo + abono;
			printf("Deposito exitoso su saldo actual es $%d \n",suma);
			printf("****************\n\n");
			
			break;
		case 3:
			printf("Nos Vemos Pronto..\n");
			break;
		default:
			printf("La opcion no es valida\n");
		}
	} while(opcion !=3);
	
	return 0;
}

