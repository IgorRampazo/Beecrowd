#include <stdio.h>
#define max 12

int main()
{
    int a, i, j;
    float soma=0, s1=0, num[max][max], s2=0;
    char letra;

    scanf("%d", &a);
    scanf(" %c", &letra);

    for(i = 0;i < max; i++) for(j = 0; j < max; j++) scanf("%f", &num[i][j]);
    for(i = 0; i < max; i++) for(int j=0; j<max; j++) soma += num[i][j];

    if(letra=='S')
    {
        for(j = 0; j < max; j++) s1 += num[j][a];
        printf("%.1f\n", s1);
    } 
    else if(letra=='M')
    {
        for(j = 0; j < max; j++) s2+=num[j][a];
        printf("%.1f\n", s2/max);
    }
    
    return 0;
}