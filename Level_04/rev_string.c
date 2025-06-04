/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_space(char *c)
{
	return(*c <= 32);
}

int	count_words(char *s)
{
	int count = 0;

	while(*s)
	{
		while(*s && is_space(s))
			s++;
		if(*s && !is_space(s))
			count++;
		while(*s && !is_space(s))
			s++;
	}
	return(count);
}
void	alloc_matrix(char **lst, char *s)
{
	int i = -1;
	int size;

	while(*s)
	{
		size = 0;
		while(*s && is_space(s))
			s++;
		if(*s && !is_space(s))
			i++;
		while(*s && !is_space(s))
		{
			size++;
			s++;
		}
		if(size > 0)
		{
			lst[i] = malloc((size + 1) * sizeof(char));
			lst[i][size] = '\0';
		}
	}
}
void	copy_to_matrix(char **lst, char *s)
{
	int count = 0;
	int i = 0;
	while(*s)
	{
		while(*s && is_space(s))
			s++;
		if(*s && !is_space(s))
			count++;
		while(*s && !is_space(s))
			lst[count - 1][i++] = *s++;
	}
}
char **ft_split(char *s)
{
	int nb = count_words(s);
	char **result;
	alloc_matrix(result, s);
	copy_to_matrix(result, s);
	result[nb] = NULL;
	return(result);
}
int main(int ac, char **av)
{
	if(ac == 2)
		ft_split(av[1]);
	write(1, "\n", 1);
}
