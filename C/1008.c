/* 
   * (🐺) Exercicio 1008 - Beecrowd - "Salário"
*/

// Inclusão de Arquivo(s) e Biblioteca(s)
#include <stdio.h>

int main()
{
   // Variáveis
   int n_fuc, n_hrs;
   float v_phr, sal;

   // Entrada de Dados
   scanf("%d", &n_fuc);
   scanf("%d", &n_hrs);
   scanf("%f", &v_phr);

   // Sálario
   sal = v_phr * n_hrs;

   // Imprimindo Resultado
   printf("NUMBER = %d\n", n_fuc);
   printf("SALARY = U$ %.2f\n", sal);
   
   return 0;
}

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //