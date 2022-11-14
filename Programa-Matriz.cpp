#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#include <D:\CDC UDF\Estrutura de Dados II\Aula 11\matriz.h>

int menu , ordem , matriz[100][100] , vlr , lin , col;

int Menu()
{
	system("cls");
	printf("\n =-=-=-=-=-=-=-= MATRIZ =-=-=-=-=-=-=-= ");
	printf("\n | Escolha uma das opcoes do Menu:    | ");
	printf("\n |____________________________________| ");
	printf("\n |[1] - Iniciar Matriz                | ");
	printf("\n |[2] - Imprimir Matriz               | ");
	printf("\n |[3] - Inserir dados a Matriz        | ");
	printf("\n |                                    | ");
	printf("\n |[4] - Fechar Programa               | ");
	printf("\n |____________________________________| ");
	printf("\n - Sua opcao: ");
	scanf("%d" , &menu);
}

void IniciarMatriz()
{
	int NumCol, NumLin;
	
	printf("\n =-=-=-=-=-=-=-=-=-= Opcao 1 =-=-=-=-=-=-=-=-=-= ");
	printf("\n |Inicializacao da Matriz:                     | ");
	printf("\n |_____________________________________________| ");
	printf("\n |- Insira o tamanho da Matriz:  ");
	scanf("%d" , &ordem);
	printf("\n |_____________________________________________| ");
	
	matriz[ordem][ordem];
	
	printf("\n |- Matriz criada!!                            | ");
	printf("\n |- Matriz com o tamanho de %d X %d              | " , ordem , ordem);
	printf("\n |_____________________________________________| ");
	getch();
	
}

void ImprimirMatriz()
{
	printf("\n =-=-=-=-=-=-=-=-=-= Opcao 2 =-=-=-=-=-=-=-=-=-= ");
	printf("\n |Imprimir Matriz:                             | ");
	printf("\n |_____________________________________________| ");
	printf("\n |                                             | ");
	printf("\n");
	
	for(int linha = 1; linha <= ordem; linha++)
	{
		if(linha == 1)
		{
			for(int coluna = 0; coluna <= ordem; coluna++)
				if(coluna == 0)
					printf(" |    ");
				else if(coluna < 10)
		    			printf(" 0%d " , coluna);
		    		else
		    			printf(" %d " , coluna);
		    		
		    	printf("\n");
		}
		if(linha < 10)
			printf(" | 0%d " , linha);
		else
			printf(" | %d " , linha);
			
	    for(int coluna = 1; coluna <= ordem; coluna++)
	    {
	    	if (linha == coluna)
	    		printf(" XX ");
	    	else
			{
				//printf(" 0%d " , matriz[linha][coluna]);
				if(vlr < 10)
					printf(" 0%d " , matriz[linha][coluna]);
				else
					printf(" %d " , matriz[linha][coluna]);	
			}
	    }
	    printf("\n");
	}
	printf("\n");
	printf("\n |_____________________________________________| ");
	getch();
}

void InserirDadosMatriz()
{
    printf("\n =-=-=-=-=-=-=-=-=-= Opcao 3 =-=-=-=-=-=-=-=-=-= ");
	printf("\n |Inserir Dados na Matriz:                     | ");
	printf("\n |_____________________________________________| ");
	printf("\n |- Informe a posicao da Linha:                | ");
	printf("\n | ");
	scanf("%d" , &lin);
	printf("\n |- Informe a posicao da Coluna:               | ");
	printf("\n | ");
	scanf("%d" , &col);
	printf("\n |- Qual eh o valor a ser inserido?:           | ");
	printf("\n | ");
	scanf("%d" , &vlr);
	
	matriz[lin][col] = vlr;
	
	printf("\n |- Aresta inserida                            | ");
	printf("\n |- Com o valor de %d nas posicoes [%d , %d] | " , vlr , lin , col);
	printf("\n |_____________________________________________| ");
	getch();
}

int main ()
{
	do
	{
		Menu();
		
		switch (menu)
		{
			case 1: {
				IniciarMatriz();
				break;
			};
			case 2: {
			    ImprimirMatriz();
				break;
			};
			case 3: {
			    InserirDadosMatriz();
				break;
			};
			case 4: {
			    
				break;
			};
		}
	}while(menu != 4);
	
	printf("\n | - Programa finalizado...           | ");
	printf("\n |____________________________________| ");
}
