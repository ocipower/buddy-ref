#include <stdio.h>
#include <string.h>

void bubble_sort(char *array[], size_t size)
{
    size_t i, j;
    char *temp;
    for (i = 0; i < size - 1; ++i)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(array[j], array[i]) < 0)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void print_array(char *array[], int len)
{
    int i;

    if (!array)
        return;

    for (i = 0; i < len; ++i)
    {
        printf("%s ", array[i]);
    }
    printf("\n");
}

int main()
{
    char *array[] = {"banana", "apple", "orange", "date", "cherry"};
    size_t array_size = sizeof(array) / sizeof(array[0]);

    // TEST BUBBLE_SORT
    bubble_sort(array, array_size);

    // PRINT_ARRAY TEST
    print_array(array, array_size);

    return 0;
}
