	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que leia a idade de 10 pessoas. Calcule quantos são idosos, quantos são 
	adultos e quantos são menores de idade. Depois mostre na tela o quantitativo de cada idade. Abaixo é 
	apresentada a classificação por idade que você deve utilizar
	
	  */
	
	int main(int argc, char *argv[]) {
		int idade, idoso, adulto, menor, contador = 0;
		
		printf(" Classificacao Faixa etaria.\n Idoso 60 ou mais anos.\n Adulto 18 ate 59.\n Menor 0 ate 17.\n");
		
		while(contador < 10){
			printf(" Digite a idade de dez pessoas que as classificaremos por faixa etaria: ");
			scanf("%d", &idade);
			
			if(idade >= 60){
				idoso++;
			} if(idade >= 18 && idade <= 59){
				adulto++;
			} if(idade >= 0 && idade <= 17){
				menor++;
			}
			contador++;
		}
		    printf("\n A quantidade de idoso eh %d", idoso);
		    printf("\n A quantidade de adulto eh %d", adulto);
		    printf("\n A quantidade de menor eh %d", menor);
		return 0;
	}
