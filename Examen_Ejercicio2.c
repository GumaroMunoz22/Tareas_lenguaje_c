#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero,i;
	printf("Escriba un numero entero positivo\n");
	scanf("%d",&numero);
	
	for(i=1; i<=numero; i++){
		printf ("Numero %d \n",i);
		
	}
	return 0;
}

