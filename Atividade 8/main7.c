	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C que l� 10 valores inteiros, um de cada vez, e conta quantos destes 
	   valores s�o negativos, escrevendo esta informa��o.*/
	
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
