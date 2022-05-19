	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C capaz de vender os produtos do catálogo de uma loja. Na tabela abaixo, 
	são apresentados os produtos da loja. Portanto, leia do usuário o código e a quantidade do produto. Depois, 
	pergunte ao usuário se ele deseja comprar outro produto (Utilize 1 para sim e 0 para não). Caso ele queira 
	comprar (digitou 1), recomece o processo de venda. Ao final, mostre o valor total a ser cobrado do cliente.
	0
	 */
	
	int main(int argc, char *argv[]) {
	     int codigo, quantidade, continuar = 1;
	     float valorCobrar, totalPagar;
		 
		 do{	
	       printf("\n Catalogo      de                    produtos");
	       printf("\n Codigo     Nome                  Preco em R$");
	       printf("\n 123        Balas                     R$ 0,20");
	       printf("\n 124        Barra de chocolate        R$ 2,50");
	       printf("\n 125        Chicletes                 R$ 0,25");
	       printf("\n 126        Salgadinho                R$ 4,00");
	     
	       printf("\n Digite o codigo do produto: ");
	       scanf("%d", &codigo);
	       if(codigo < 123 || codigo >126){
	       	printf("\n Codigo invalido digite um codigo do catalago:");
	       	continue;
		   }
	       printf("\n Digite a quantidade que voce vai comprar: ");
	       scanf("%d", &quantidade);
	       
	       printf(" Voce quer continuar comprando digite 1 para sim e 0 para nao: ");
	       scanf("%d", &continuar);
	       
	       switch(codigo){
	       	     case 123: valorCobrar = quantidade * 0.20;
	       	     break;
	       	     case 124: valorCobrar = quantidade * 2.50;
	       	     break;
	       	     case 125: valorCobrar = quantidade * 0.25;
	       	     break;
	       	     case 126: valorCobrar = quantidade * 4.00;
	       	     break;
		   }
		   totalPagar += valorCobrar;
	     }while(continuar != 0);
	     
	     printf(" O valor que voce vai pagar eh R$ %.2f", totalPagar);
	 
		return 0;
	}

