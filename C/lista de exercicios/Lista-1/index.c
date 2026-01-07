#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TFP 10
#define TFC 30
#define TFV 50

int main(void)
{
	char opcao,Produto[TFP][30],Cliente[TFC][30], AuxCli[30];
	int Estoque[TFP], c TLP=0,TLC=0,TLV=0;
	float Preco[TFP];
	
	do
	{
		system("cls");
		printf("\n### M E N U ###\n");
		printf("[A] Cadastrar Clientes\n");
		printf("[B] Exibir Clientes\n");
		printf("[C] Cadastrar Produtos\n");
		printf("[D] Exibir Produtos\n");
		printf("[E] Consultar Estoque de Produtos\n");
		printf("[F] Alterar Estoque de Produtos\n");
		printf("[G] Excluir Produtos\n");
		printf("[H] Realizar Vendas\n");
		printf("[I] Exibir Vendas (Completo)\n");
		printf("[ESC] Finalizar\n");
		printf("\nOpcao desejada: ");
		opcao = toupper(getche()); 
		switch(opcao)
		{
			case 'A':  
            printf("\n## Cadastro de Clientes ##\n");

            if(TLC == TFC)
            {
                  printf("\nVetor de Clientes Cheio!\n");
                  getch();
            }
            else
            {
               printf("Nome do Cliente [%d]: ",TLC);
               fflush(stdin);
               gets(AuxCli);

               while(TLC < TFC && strcmp(AuxCli,"\0") != 0)
               {
                  strcpy(Cliente[TLC],AuxCli);
                  TLC++;

                  if(TLC == TFC)
                  {
                     printf("\nVetor de Clientes Cheio!\n");
                     getch();
                  }
                  else
                  {
                     printf("\nNome do Cliente [%d]: ",TLC);
                     fflush(stdin);
                     gets(AuxCli);
                  }
                     
               }
            }
            
            break;
			
			case 'B':  
            printf("\n## Relatorio de Clientes ##\n");
            getch();
            break;
		}
	} while(opcao != 27);
	
	return 0;
}