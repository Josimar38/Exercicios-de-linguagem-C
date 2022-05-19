#include <stdio.h>
#include <stdlib.h>

/* Faça um programa na linguagem C, capaz de imprimir na tela em sequência todos os números de 10 a 5000. */

int main(int argc, char *argv[]) {
	int numero = 10;
	
	while(numero <= 5000){
		printf(" %d\n", numero);
		numero++;
	}
	return 0;
}
