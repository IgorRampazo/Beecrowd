/* 
   * (🐺) Exercicio 1010 - Beecrowd - "Cálculo Simples"
*/

// Inclusão de Arquivo(s) e Biblioteca(s)
#include <stdio.h>

int main()
{
   // Variáveis
   int codp_1, npec_1, codp_2, npec_2;
   double vupp_1, vupp_2, vtt;

   // Entrada de Dados
   scanf("%d %d %lf", &codp_1, &npec_1, &vupp_1);
   scanf("%d %d %lf", &codp_2, &npec_2, &vupp_2);

   // Cálculo Simples
   vtt = (npec_1 * vupp_1) + (npec_2 * vupp_2);

   // Imprimindo Resultado
   printf("VALOR A PAGAR: R$ %.2lf\n", vtt);
   
   return 0;
}

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //