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

#include <stdio.h>
#include <stdlib.h>

int	count_words(char *s)
{
	int count = 0;
	while(*s)
	{
		while(*s && *s == '\t' || *s == ' ')
			s++;
		if(*s && *s != '\t' && *s != ' ')
			count++;
		while(*s && *s != '\t' && *s != ' ')
			s++;
	}
	return(count);
}
void	alloc_matrix(char **lst, char *s)
{
	int i = 0;
	int size = 0;
	while(*s)
	{
		size = 0;
		while(*s && *s == '\t' || *s == ' ')
			s++;
		if(*s && *s != '\t' && *s != ' ')
			i++;
		while(*s && *s != '\t' && *s != ' ')
		{
			size++;
			s++;
		}
		if(size > 0)
		{
			lst[i - 1] = malloc((size + 1) * sizeof(char));
			lst[i -1][size] = '\0';
		}
	}
}
void	copy_to_matrix(char **lst, char *s)
{
	int i = 0;
	int size = 0;
	while(*s)
	{
		size = 0;
		while(*s && *s == '\t' || *s == ' ')
			s++;
		if(*s && *s != '\t' && *s != ' ')
			i++;
		while(*s && *s != '\t' && *s != ' ')
		{
			lst[i - 1][size] = *s;
			size++;
			s++;
		}
	}
}


char    **ft_split(char *str)
{
	char **result;
	int nb = count_words(str);
	result = malloc((nb + 1) * sizeof(char *));
	result[nb] = NULL;
	alloc_matrix(result, str);
	copy_to_matrix(result, str);
	return(result);
}
int main()
{
	char s[] = "     Ola jorge tudo bem?   ";
	char **result = ft_split(s);
	char **ptr = result;
	while(*ptr != NULL)
		printf("%s\n", *ptr++);
	free(result[0]);
	free(result[1]);
	free(result[2]);
	free(result[3]);
	free(result);
}