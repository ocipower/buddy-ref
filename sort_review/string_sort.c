#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_str(char **str, int len);

int main(int argc, char const *argv[])
{
	char **ptr_to_arr_of_ptr;

	ptr_to_arr_of_ptr = malloc(sizeof(char *) * 5);

	ptr_to_arr_of_ptr[0] = "grandnut";
	ptr_to_arr_of_ptr[1] = "soya";
	ptr_to_arr_of_ptr[0] = "cinamon";
	ptr_to_arr_of_ptr[0] = "banana";
	ptr_to_arr_of_ptr[0] = "apple";

    //char *str[] = {"soya", "cinamon", "banana", "apple"};
    int len = sizeof(ptr_to_arr_of_ptr)/sizeof(ptr_to_arr_of_ptr[0]);

    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", ptr_to_arr_of_ptr[i]);
    }

    sort_str(ptr_to_arr_of_ptr, 5);

    printf("\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", ptr_to_arr_of_ptr[i]);
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
