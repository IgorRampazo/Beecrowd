/* 
   * (🐺) Exercicio 1009 - Beecrowd - "Salário com Bônus"
*/

// Inclusão de Arquivo(s) e Biblioteca(s)
#include <stdio.h>
#include <string.h>

int main()
{
   // Variáveis
   char nome[50];
   double sal_fixo, val_vendas, total;

   // Entrada de Dados
   fgets(nome, 50, stdin);
   scanf("%lf", &sal_fixo);
   scanf("%lf", &val_vendas);

   // Sálario c/ bonus
   total = sal_fixo + (val_vendas * 0.15);
   
   // Imprimindo Resultado
   printf("TOTAL = R$ %.2lf\n", total);
   
   return 0;

   // Imprimindo Resultado

   
   return 0;
}

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //