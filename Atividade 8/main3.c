		#include <stdio.h>
		#include <stdlib.h>
		
		/* Fa�a um programa na linguagem C que imprime na tela em sequ�ncia todos os n�meros impares de 1 a 
		1000. */
		
		int main(int argc, char *argv[]) {
			int numero= 1;
			
			while(numero <= 1000){
				printf("%d\n", numero);
				numero+=2;
			}
			return 0;
		}
