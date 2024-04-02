#include <stdio.h>

void suma(int num1, int num2){
	int suma;
	float promedio;
	
	
	
	suma = num1 + num2;
	printf("La suma de los numero que escribio es...\n");
	printf ("%d + %d = %d\n",num1,num2,suma);
	
	promedio = suma/2;
	printf("El promedio de la suma  es...%.2f\n",promedio);
	
}
	
	void nombre_usuario(int nombre){
		printf("hola%d\n",nombre);
		printf("\n");
	}

int main(int argc, char *argv[]) {
	int nombre;
	int num1, num2;
	
	
	printf("Por favor escriba un numero entero\n");
	scanf ("%d", &num1);
	
	printf("Por favor escriba un numero entero\n");
	scanf ("%d", &num2);
	
	printf("Hola podrias escribir tu nombre\n");
	scanf("%d",&nombre);
	

	suma(num1,num2);
	nombre_usuario(nombre);
	
	return 0;
}

