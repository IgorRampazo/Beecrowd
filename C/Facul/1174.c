#include <stdio.h>
#define TF 100

int main()
{
   float a[TF];
   int i;

   for (i = 0; i < TF; i++)scanf("%f", &a[i]);

   for (i = 0; i < TF; i++) if (a[i] <= 10) printf("A[%d] = %.1f\n", i, a[i]);
   
   return 0;
}