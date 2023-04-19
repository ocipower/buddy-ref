#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_str(char **str, int len);

int main(int argc, char const *argv[])
{
    char gra[] = "grandnut";
    char soya[] = "soya";
    char cina[] = "cinamon";
    char bana[] = "banana"; 
    char appl[] = "apple"; 
    char str[5][6];  /*{gra, soya, cina, bana, appl};*/
    
    str[0] = gra;
    str[1] = soya;
    str[2] = cina;
    str[3] = gra;
    str[4] = appl;
    //int len = sizeof(str)/sizeof(str[0]);

    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", str[i]);
    }

    sort_str(str, 5);

    printf("\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}

void sort_str(char **str, int len)
{
    if (!str)
        return;
    int i, j, min_idx;

    for (i = 0; i < (len - 1); i++)
    {
        min_idx = i;
        for (j = i + 1; j < len; j++)
        {
            if (strcmp(str[j], str[min_idx]) < 0)
                min_idx = j;
        }
        if (min_idx != i)
        {
            char *temp = malloc(sizeof(char) * (strlen(str[i]) + 1));
            strcpy(temp, str[i]);
            strcpy(str[i], str[min_idx]);
            strcpy(str[min_idx], temp);
            free(temp);
        }
    }
}
