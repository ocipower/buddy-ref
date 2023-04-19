#include <stdio.h>
#include <string.h>


void sort_str(char *str, int len);
int main(int argc, char const *argv[])
{
	char *str[] = {"grandnut", "soya", "cinamon", "banana", "apple"};
	sort_str(str, 5);
	return 0;
}

void sort_str(char *str, int len)
{
	if (!str)
		return;
	int i, j, min_idx;
	char * temp;

	for (i = 0; i < len - 1; ++i)
	{
		min_idx = i;
		for (j = i + 1; j < len; ++j)
		{
			if (strcmp(str[j], str[min_idx]) < 0)
			{
				temp = malloc(sizeof(char) * strlen(str[j]));
				strcpy(temp, str[j]);
				strcpy(str[j], str[min_idx]);
				strcpy(str[min_idx], temp);
			}
		}
	}
}