#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, numerotabla, resultado;
	i = 1;
	
	printf("--En esta atividad realizaremos las tablas de mutiplicar--- \n");
	
	printf("Escriba el numero que desea multiplicar \n");
	scanf("%d", &numerotabla);
	
	for (i=1; i<=10; i++){
		
		resultado = i * numerotabla;
		
		printf( "\n   %d * %d = %d", numerotabla, i, resultado );
		
		
	}
	
	return 0;
}

