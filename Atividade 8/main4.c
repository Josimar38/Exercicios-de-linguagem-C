	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que leia 10 n�meros e imprima a soma deles.  */
	
	int main(int argc, char *argv[]) {
		int contador = 0, numero, soma = 0;
		
		while(contador < 10){
			printf(" Digite dez numeros inteiros: ");
			scanf("%d", &numero);
			soma += numero;
			contador++;
		}
		printf(" Os numeros somados deu %d.", soma);
		return 0;
	}
