	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que imprime na tela em sequ�ncia todos os n�meros de -100 � -1000. */
	
	int main(int argc, char *argv[]) {
		int numero = -100;
		
		while(numero >= -1000){
			printf("%d\n", numero);
			numero--;
		}
		return 0;
	}
