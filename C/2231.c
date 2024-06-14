#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 10001

int main() 
{
   int a, b, c = 1, v1[MAX_SIZE], menor, maior;

   while (scanf("%d %d", &a, &b) == 2 && a && b) 
   {
      for (int i = 0; i < a; scanf("%d", &v1[i++]));
   
      menor = INT_MAX;
      maior = INT_MIN;
   
      for (int i = 0; i <= a - b; i++) 
      {
         int sum = 0;
         for (int j = i; j < b + i; sum += v1[j++]);
         if (sum / b < menor) menor = sum / b;
         if (sum / b > maior) maior = sum / b;
      }
   
      printf("Teste %d\n%d %d\n\n", c++, menor, maior);
   } 

   return 0;
}