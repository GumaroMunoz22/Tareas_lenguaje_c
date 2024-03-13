#include <stdio.h>

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int num3;
	
	printf("Por favor escriba tres numeros enteros\n");
	scanf ("%d", &num1);
	scanf ("%d", &num2);
	scanf ("%d", &num3);
	
	if (num1>num2 && num1>num3){
		printf("El numero mayor de los tres es %d ", num1);
	}else if (num2>num1 && num2>num3){
		printf("El numero mayor de los tres es %d ", num2);
	}else if (num3>num1 && num3>num2){
		printf("El numero mayor de los tres es %d ", num3);
	}else if (num1==num2 && num1==num3){
		printf("Los tres numeros son iguales ");
	}else if(num1==0 && num2==0 && num3==0){
		printf("Los numeros son iguales y nulos ");
	}
	
	return 0;
}

