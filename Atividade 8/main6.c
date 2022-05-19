	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que imprima na tela a tabuada de um número lido.  */
	
	int main(int argc, char *argv[]) {
		int contador = 0, numero;
		
		printf("Digite o numero que voce quer a tabuada? ");
		scanf("%d", &numero);
		
		while(contador <= 10){
			printf("%d x %d = %d\n", numero, contador, numero * contador);
			contador++;
		}
		return 0;
	}
