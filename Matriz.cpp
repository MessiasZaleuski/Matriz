#include<stdio.h>
main()
{
	int matriz[8][8],linha,coluna,soma,l1,c1,l2,c2;
	for (linha=0; linha<8; linha++)
	{
		for (coluna=0; coluna<8; coluna++)
		{
			
		printf("Digite os valores da matriz[%d][%d]: ",linha, coluna);
		scanf("%d",&matriz[linha][coluna]);
			}
		}
			printf("Digite a posicao da linha: ");
			scanf("%d",& l1);
			
			printf("Digite a posicao da coluna: ");
			scanf("%d",& c1);
			
			printf("Digite a posicao da linha: ");
			scanf("%d",& l2);
			
			printf("Digite a posicao da coluna:\n ");
			scanf("%d",& c2);
			
			soma=(matriz[l1][c1]) + (matriz [l2][c2]);
			
			{
				printf("A soma dos valores eh: %d ", soma);
			}
			
			
			return(0);
		}

