#include <stdio.h>

void nombre_usuario(char nombre[10]){
	printf("hola Mucho gusto...%s\n ",nombre);
	printf("\n");
}

 void suma(float num1, float num2){
	float suma;
	float promedio;
	
	
	
	suma = num1 + num2;
	printf("La suma de los numero que escribio es...\n");
	printf ("%.0f + %.0f = %.0f\n",num1,num2,suma);
	
	promedio = suma/2;
	printf("El promedio de la suma  es...%.2f\n",promedio);
	
}
	
int main(int argc, char *argv[]) {
	char nombre[10];
	float num1, num2;
	
	printf("Hola podrias escribir tu nombre\n");
	scanf ("%s", &nombre);
	
	printf("Por favor escriba un numero entero\n");
	scanf ("%f", &num1);
	
	printf("Por favor escriba otro un numero entero\n");
	scanf ("%f", &num2);
	
	nombre_usuario(nombre);
	suma(num1,num2);
	
	return 0;
}

