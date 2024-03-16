#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2, suma;
	suma =0;
	n1 = 1;
	n2 = 5;
	
	printf("Secuencia de el numero 1 hasta el numero 5 \n");
	
	while(n1<=n2){
		
		printf("Numero %d \n", n1);
		
		
		if (n1 % 2 == 0){
			suma = suma + n1;
		}
		
		n1 ++;
		
		
	}
	printf("La suma de los numeros pares en esta secuencia %d ", suma);

	
	return 0;
}

