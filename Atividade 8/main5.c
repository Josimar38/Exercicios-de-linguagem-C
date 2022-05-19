	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que imprima na tela a tabuada da 5.  */
	
	int main(int argc, char *argv[]) {
		int contador = 0, numero = 5, multiplica;
		
		while(contador <= 10){
			multiplica = numero * contador;
			printf("%d x %d = %d\n", numero, contador, multiplica);
			contador++;
		}
		return 0;
	}
