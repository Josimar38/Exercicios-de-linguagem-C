			#include <stdio.h>
			#include <stdlib.h>
			
			/* run this program using the console pauser or add your own getch, system("pause") or input loop */
			
			int main(int argc, char *argv[]) {
				int codigo, quantidade, operacao, balas, chocolate, chicletes, salgadinho;
				     float valorBalas, valorChocolate, valorChicletes, valorSalgadinho, totalPagar;
				
				 do{
				 	printf("\n            MENU:\n");
			        printf("\n 0 - Sair");
			        printf("\n 1 - Vender produto");
			        printf("\n 2 - Mostrar a quantia total vendida em REAIS");
			        printf("\n 3 - Mostrar a quantia vendida por cada produto em REAIS");
			        printf("\n 4 - Mostrar a quantidade vendida por cada produto em UNIDADES");
			        
			        printf("\n Digite a operacao desejada: ");
			        scanf("%d", &operacao);
				       
				        
				       switch(operacao){
				       	     case 1:
				       	     	printf("\n Catalogo      de                    produtos");
				                printf("\n Codigo     Nome                  Preco em R$");
				                printf("\n 123        Balas                     R$ 0,20");
				                printf("\n 124        Barra de chocolate        R$ 2,50");
				                printf("\n 125        Chicletes                 R$ 0,25");
				                printf("\n 126        Salgadinho                R$ 4,00\n");
				     
				                printf("\n Digite o codigo do produto: ");
				                scanf("%d", &codigo);
				                if(codigo < 123 || codigo >126){
				       	        printf("\n Codigo invalido digite um codigo do catalago:\n");
				       	        continue;
					              }
				                printf("\n Digite a quantidade que voce vai comprar: ");
				                scanf("%d", &quantidade);
				       
				                if(codigo == 123){
				                		valorBalas = quantidade * 0.20;
				                		balas += quantidade;
								  } if(codigo == 124){
				                		valorChocolate = quantidade * 2.50;
				                		chocolate += quantidade;
				                	} if(codigo == 125){
				                		valorChicletes = quantidade * 0.25;
				                		chicletes += quantidade;
				                	} if(codigo == 126){
				                		valorSalgadinho = quantidade * 126;
				                		salgadinho += quantidade;
				                	}
							  break;
				       	     case 2:
				       	     	 totalPagar = valorBalas + valorChocolate + valorChicletes + valorSalgadinho;
				       	     	printf("\n O valor que voce vai pagar eh R$ %.2f.", totalPagar);
				       	     break;
				       	     case 3: 
				       	         printf("\n A quantidade vendida de balas eh R$ %.2f.", valorBalas);
				       	         printf("\n A quantidade vendida de chocolate eh R$ %.2f.", valorChocolate);
				       	         printf("\n A quantidade vendida de chicletes eh R$ %.2f.", valorChicletes);
				       	         printf("\n A quantidade vendida de salgadinhos eh R$ %.2f.\n", valorSalgadinho);
				       	     break;
				       	     case 4: 
				       	         printf("\n A quantidade vendida em uidades de balas eh %d.", balas);
				       	         printf("\n A quantidade vendida em unidades de chocolate eh %d.", chocolate);
				       	         printf("\n A quantidade vendida em unidades de chicletes eh R$ %d.", chicletes);
				       	         printf("\n A quantidade vendida em unidades de salgadinhos eh %d.\n", salgadinho);
				       	     break;
					   }
					  
				     }while(operacao != 0);
				 
				return 0;
			}
