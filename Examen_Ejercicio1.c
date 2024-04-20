#include <stdio.h>

int main(int argc, char *argv[]) {
	int calificacion;
	
	printf("Escriba la calificacion obtenida..\n");
	scanf("%d",& calificacion);
	
	if(calificacion >= 90){
		printf("Su calificacion es...A\n");
	}else if(calificacion >= 80){
		printf("Su calificacion es...B\n");
	}else if (calificacion >= 70){
		printf("Su calificacion es...C\n");
	}else if(calificacion >= 60){
		printf("Su calificacion es...D\n");
	}else if(calificacion < 60){
		printf("Su calificacion es...F\n");
	}
	
	return 0;
}

