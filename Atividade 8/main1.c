#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa na linguagem C, capaz de imprimir na tela em sequ�ncia todos os n�meros de 10 a 5000. */

int main(int argc, char *argv[]) {
	int numero = 10;
	
	while(numero <= 5000){
		printf(" %d\n", numero);
		numero++;
	}
	return 0;
}
