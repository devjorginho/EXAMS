/*Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>
#define MAX_Y 1000
#define MAX_X 1000

char    **ft_split(char *str)
{
	int i;
	int j = 0;
	char **result;

	result = malloc(sizeof(char **) * MAX_Y);
	while(*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	while(*str)
	{
		if(*str > 32)
		{
			i = 0;
			result[j] = malloc(sizeof(char) * MAX_X);
			while(*str > 32)
				result[j][i++] = *str++;
			result[j][i] = '\0';
			j++;
		}
		else
			str++;
	}
	result[j] = 0;
	return(result);
}
#include <stdio.h>
int main()
{
	char s[] = "		Hello world jorginho       teste   	      ";
	char **result = ft_split(s);
	while(*result)
		printf("%s\n", *result++);
}