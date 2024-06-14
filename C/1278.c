#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ML 100
#define MTL 52
int main() 
{
    char text[ML][MTL], aux[MTL], ch;
    int q_linhas, tam_txt, margem = 0, tml, p_let_lid, i, j, q_esp, primeiro_caso = 1;

    while (scanf("%d", &q_linhas) && q_linhas != 0) 
    {
        getchar();

        if (!primeiro_caso) printf("\n");

        primeiro_caso = 0;

        for (tam_txt = 0; tam_txt < q_linhas; tam_txt++) 
        {
            fgets(text[tam_txt], MTL, stdin);
            size_t len = strlen(text[tam_txt]);
            if (len > 0 && text[tam_txt][len - 1] == '\n') text[tam_txt][len - 1] = '\0';
            tml = 0;
            p_let_lid = 0;

            for (i = 0, j = 0; text[tam_txt][i] != '\0'; i++) 
            {
                ch = toupper(text[tam_txt][i]);
                if (ch != ' ' || (text[tam_txt][i + 1] != ' ' && text[tam_txt][i + 1] != '\0' && p_let_lid)) {
                    aux[j++] = ch;
                    tml = j;
                    p_let_lid = 1;
                }
            }

            aux[tml] = '\0';
            strcpy(text[tam_txt], aux);
            margem = (tml > margem) ? tml : margem;
        }

        for (i = 0; i < tam_txt; i++) 
        {
            q_esp = margem - strlen(text[i]);
            for (j = 0; j < q_esp; j++) putchar(' ');
            printf("%s\n", text[i]);
        }

        margem = 0;
    }
    
    return 0;
}