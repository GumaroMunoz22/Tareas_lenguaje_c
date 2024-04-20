#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion;
	
		printf("---Elija una opcion----\n");
		printf("Opcion 1\n");
		printf("Opcion 2\n");
		printf("Opcion 3\n");
		printf("Opcion 4\n");
		printf("Opcion 5\n");
		printf("Opcion 6\n");
		printf("Opcion 7\n");

		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			printf("Lunes");
			break;
		case 2:
			printf("Martes");
			break;
			
		case 3:
			printf("Miercoles");
			break;
			
		case 4:
			printf("Jueves");
			break;
			
		case 5:
			printf("Viernes");
			break;
			
		case 6:
			printf("Sabado");
			break;
			
		case 7:
			printf("Domingo");
			break;
			
		default:
				printf("Numero de dia invalido\n");
			
		}
	
	
	
	return 0;
}

