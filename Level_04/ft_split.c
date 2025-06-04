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

int is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1); 
	return (0);
}

int count_words(char *s)
{
	int i = 0;
	int num_words = 0;

	while(s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		
		while (s[i] && !is_space(s[i]))
		{
			num_words++;	
			while (s[i] && !is_space(s[i]))
				i++;
		}
	}
	return num_words;

}

int sizes(char **res, char *s)
{
	int i = 0;
	int num_words = 0;
	int size = 0;
	while(s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		
		while (s[i] && !is_space(s[i]))
		{
			num_words++;
			size++;
			while (s[i] && !is_space(s[i]))
			{
				i++;
				size++;
			}
			res[num_words - 1] = malloc(sizeof(char *) * (size + 1));
			res[num_words - 1][size] = '\0';
			size = 0;
		}
	}
	return num_words;
}


int copies(char **res, char *s)
{
	int i = 0;
	int num_words = 0;
	int size = 0;
	while(s[i])
	{
		while (s[i] && is_space(s[i]))
			i++;
		
		while (s[i] && !is_space(s[i]))
		{
			num_words++;
			while (s[i] && !is_space(s[i]))
			{
				res[num_words - 1][size] = s[i];
				i++;
				size++;
			}
			size = 0;
		}
	}
	return num_words;
}

char    **ft_split(char *str)
{
	int num_words = count_words(str);
	char **res = malloc(sizeof(char *) * (num_words + 1));
	res[num_words] = 0;
	sizes(res, str);
	copies(res, str);
	return(res);
}

int main()
{

	char **res = ft_split("  Oi Oii Oiiii   ");
	while(*res)
	{
		printf("(%s)\n", *res);
		res++;
	}
	/*
	printf("%d\n", count_words("     "));
	printf("%d\n", count_words(" Hello World"));
	printf("%d\n", count_words("Hello World "));
	printf("%d\n", count_words("Hello World"));
*/
}