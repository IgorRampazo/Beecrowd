#include <stdio.h>
int main() 
{
    long long int n, n1 = 0, n2 = 1, p;
    int j;

    scanf("%d", &j);

    for (int i = 1; i <= j; i++) 
    {
        scanf("%lld", &n);
        n += 1;
        n1 = 0;
        n2 = 1;

        for (int c = 0; c < n; c++) 
        {
            if (c <= 1)p = c;
            else{
                p = n1 + n2;
                n1 = n2;
                n2 = p;
            }
        }
        printf("Fib(%lld) = %lld\n", n - 1, p);
    }
    
    return 0;
}