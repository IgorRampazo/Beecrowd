#include <stdio.h>
#include <string.h>

int main() 
{
   int testCases, fits;
   char num1[1001], num2[1001];
   scanf("%d", &testCases);

   while (testCases--) 
   {
      scanf("%s %s", num1, num2);

      int len1 = strlen(num1);
      int len2 = strlen(num2);
      fits = 1;

      if (len2 > len1) fits = 0;
      else 
      {for (int i = len1 - 1, j = len2 - 1; j >= 0; i--, j--) if (num1[i] != num2[j]) {fits = 0;break;}}

      if (fits) printf("encaixa\n");
      else printf("nao encaixa\n");
   }

   return 0;
}