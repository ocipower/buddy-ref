#include <stdio.h>
#include <string.h>

int ispalindrome(char *str);
int main()
{
	int ispal;
	char *str = "racecar";
	ispal = ispalindrome(str);
	printf("%d\n", ispal);
	return 0;
}

int ispalindrome(char *str)
{
	int start, end;
	

	if (!str)
		return -1;

	start = 0;
	end = strlen(str) - 1;
	while (start < end)
	{
		if (str[start] != str[end])
			return -1;

		start++;
		end--;
	}
	return 1;
}
	