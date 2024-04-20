#include <stdio.h>
int esPar(int numero){
	return numero %2 ==0;
}

int main(int argc, char *argv[]) {
	int numero;
	do{
		printf("\nEsccriba un numero entero positivo\n");
		scanf ("%d",&numero);
		
		if (esPar(numero)){
			printf("Numero par ingresado\n");
		}else{
			printf("Numero impar ingresado. Intentalo de nuevo\n");
		}
	} while(numero %2!=0);
	
	return 0;
}

