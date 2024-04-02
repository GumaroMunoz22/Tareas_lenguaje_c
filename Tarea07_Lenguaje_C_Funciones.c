#include <stdio.h>

void ciclo(int numero){
	int suma,n1;
	suma =0;
	n1 = 1;
	
	printf("Secuencia de el numero 1 hasta el numero  %d",numero);
	printf("\n");
	
	while(n1<=numero){
		
		printf("Numero %d \n", n1);
		
		if (n1 % 2 != 0){
			suma = suma + n1;
		}
		
		n1 ++;
		
	}
	printf("La suma de los numeros impares en esta secuencia es.. %d ", suma);
}

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Hola escribe un numero entero para que sea el fin del ciclo.\n");
	scanf("%i",&numero);
	
	ciclo (numero);
	
	return 0;
}

