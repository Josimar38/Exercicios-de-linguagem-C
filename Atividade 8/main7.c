	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que lê 10 valores inteiros, um de cada vez, e conta quantos destes 
	   valores são negativos, escrevendo esta informação.*/
	
	int main(int argc, char *argv[]) {
		int contador = 0, numero, negativos = 0;;
		
		while(contador < 10){
			printf("Digite dez numeros inteiros? ");
			scanf("%d", &numero);
			if(numero % 2 == 1){
				negativos ++;
			}
			contador++;
		}
		printf("O total de negativos eh %d", negativos);
		return 0;
	}
