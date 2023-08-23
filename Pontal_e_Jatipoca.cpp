#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	int e1 = 0, e2 = 0, x, valor = 0;
	
	
	printf(" -=-=-=-=-= <-> Sistema de Estoque Jatiboca <-> =-=-=-=-=- \n");
	
	printf("\nEntre com o estoque inicial de açúcar da empresa 1 -> Jatiboca: \n");
	scanf("%d", &e1);
	
	printf("Entre com o estoque inicial de açúcar da empresa 2 -> Pontal: \n");
	scanf("%d", &e2);
	printf("\n \n");
	
	do{
		
		printf("|------------------------------| \n");
		printf("|                              | \n");	
		printf("| O Que deseja Fazer?          | \n");		
		printf("| 1 - Entrada de Estoque       | \n");
		printf("| 2 - Saída de Estoque        | \n");
		printf("| 3 - Transferência de Estoque|\n");
		printf("| 4 - Consulta Estoque         | \n");
		printf("| 5 - Finalizar                | \n");
		printf("|                              | \n");
		printf("|------------------------------| \n");
		
		sprintf("Opção -> ");
		scanf("%d", &x);
		
		switch(x) {
		case 1:
			printf("Qual empresa:\n 1 - Jatiboca\n 2 - Pontal\n");
			printf("Opção -> ");
			scanf("%d", &x);
			
			if(x == 1) {
				printf("\nQual a quantidade de Entrada de açúcar em Jatiboca -> ");
				scanf("%d", &valor);
				estoque1 += valor;
				printf("\nEstoque Atualizado em Jatiboca -> %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Entrada de açúcar em Pontal -> ");
				scanf("%d", &valor);
				estoque2 += valor;
				printf("\nEstoque Atualizado em Pontal -> %d\n", estoque2);
			} else {\
				printf("Opção inválida!\n");
			} break;
		
		case 2:
			printf("Qual empresa:\n 1 - Jatiboca\n 2 - Poupança\n");
			printf("Opção -> ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual a quantidade de Saída de açúcar em Jatiboca -> ", estoque1);
				scanf("%d", &valor);
				estoque1 -= valor;
				printf("\nEstoque Atualizado em Jatiboca -> %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Saída de açúcar em Pontal -> ", estoque2);
				scanf("%d", &valor);
				estoque2 -= valor;
				printf("\nEstoque Atualizado em Pontal -> %d\n", estoque2);
			} else {\
				printf("Opção inválida!\n");
			} break; 
		
		case 3:
			printf("Qual empresa:\n 1 – Jatiboca -> Pontal\n 2 – Pontal -> Jatiboca\n");
			printf("Opção -> ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQuantidade de transferência de açúcar - Jatiboca para Pontal -> ");
				scanf("%d", &valor);
				if(valor > estoque1)
					printf("Impossível transferir de Pontal para Jatiboca, estoque insuficiente!\n");
				else {
					printf("\nTransferência realizada!!!\n");
					estoque1 -= valor;
					estoque2 += valor;
				}
			} else if(x == 2) {
				printf("\nQuantidade de transferência de açúcar - Pontal para Jatiboca -> ");
				scanf("%d", &valor);
				if(valor > estoque2)
					printf("Impossível transferir de Pontal para Jatiboca, estoque insuficiente!\n");
				else {
					printf("\nTransferência realizada!!!");
					estoque2 -= valor;
					estoque1 += valor;
				}
			} else {
				printf("Opção inválida!\n");
			}
			printf("\nEstoque Atualizado em Jatiboca -> %d", estoque1);
			printf("\nEstoque Atualizado em Pontal -> %d", estoque2);
			break;
		
		case 4:
			printf("Estoque em Jatiboca -> %d\n", estoque1);
			printf("Estoque em Pontal -> %d\n", estoque2);
			break;
		
		case 5:
			printf("Agradecemos por utilizar nosso sistema! !!!\n           equipe1\n");
			break;
		default:
			printf("Utilize apenas os números mostrados no menu!");
		}
		
	} while(x != 5);
	
}
