#include <stdio.h>

#define max 12

int main()
{
   char letra;
   float soma1=0, soma4=0, numero[max][max];
   scanf(" %c", &letra);

   for (int i = 0; i < max; i++) for (int j = 0; j < max; j++) scanf("%f", &numero[i][j]);

   if(letra == 'S')
   {
      for(int i = 0; i < max; i++) for(int j = 0; j < max; j++) if(i + j >= 12) soma4 += numero[i][j];
      printf("%.1f\n", soma4);
   } 
   else
   {
      for(int i = 0;i < max; i++) for(int j = 0; j < max; j++) if(i + j >= 12) soma1 += numero[i][j];
      printf("%.1f\n", soma1/66.0);
   } 
   
   return 0;
}