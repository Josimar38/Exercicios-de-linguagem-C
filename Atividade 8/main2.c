	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que imprime na tela em sequência todos os números de -100 à -1000. */
	
	int main(int argc, char *argv[]) {
		int numero = -100;
		
		while(numero >= -1000){
			printf("%d\n", numero);
			numero--;
		}
		return 0;
	}
