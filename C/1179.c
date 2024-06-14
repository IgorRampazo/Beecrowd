#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max 5

int main() 
{
    int array[15], par[max], impar[max];
    int ct_par = 0, ct_impar = 0;
    int i, j;

    for (i = 0; i < 15; i++) 
    {
        scanf("%d", &array[i]);
        
        if (array[i] % 2 == 0) 
        {
            par[ct_par] = array[i];
            ct_par++;
            if (ct_par == max) 
            {
                for (j = 0; j < max; j++) printf("par[%d] = %d\n", j, par[j]);
                ct_par = 0;
            }
        } 
        else 
        {
            impar[ct_impar] = array[i];
            ct_impar++;
            if (ct_impar == max) 
            {
                for (j = 0; j < max; j++) printf("impar[%d] = %d\n", j, impar[j]);
                ct_impar = 0;
            }
        }
    }

    for (i = 0; i < ct_impar; i++) printf("impar[%d] = %d\n", i, impar[i]);
    for (i = 0; i < ct_par; i++) printf("par[%d] = %d\n", i, par[i]);

    return 0;
}