#include <stdio.h>
#include <string.h>
#define TF 26

int main()
{
    int j;
    char name[100];
    char res[TF], alfa[TF] = "abcdefghijklmnopqrstuvwxyz";

    char ponto[TF][100] = 
    {
    ".", "..", "...",
    ". .", ".. ..", "... ...",
    ". . .", ".. .. ..", "... ... ...",
    ". . . .", ".. .. .. ..", "... ... ... ...",
    ". . . . .", ".. .. .. .. ..", "... ... ... ... ...",
    ". . . . . .", ".. .. .. .. .. ..", "... ... ... ... ... ...",
    ". . . . . . .", ".. .. .. .. .. .. ..", "... ... ... ... ... ... ...",
    ". . . . . . . .", ".. .. .. .. .. .. .. ..", "... ... ... ... ... ... ... ...",
    ". . . . . . . . .", ".. .. .. .. .. .. .. .. .."
    };

    int a;

    while(scanf("%d", &a)!=EOF)
    {
        j=0;
        getchar();
        while(a--)
        {
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            for(int i = 0; i < 26; i++)
            {
                if(strcmp(name, ponto[i]) == 0)
                {
                    res[j] = alfa[i];
                    j++;
                }
            }
        }
        for(int i = 0; i < j; i++)
        {
            printf("%c\n", res[i]);
        }
    }
    return 0;
}