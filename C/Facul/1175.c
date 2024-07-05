#include <stdio.h>
#define TF 20

int main()
{
   int n[TF], i, temp;

   for (i = 0; i < TF; i++)
      scanf("%d", &n[i]);

   for (i = 0; i < TF / 2; i++)
   {
      temp = n[i];
      n[i] = n[TF - 1 - i];
      n[TF - 1 - i] = temp;
   }

   for (i = 0; i < TF; i++)
      printf("N[%d] = %d\n", i, n[i]);

   return 0;
}