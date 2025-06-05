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

#define MAX_Y 1000
#define MAX_X 1000

void	putstr(char *s)
{
	while(*s)
		write(1, s++, 1);
}
char **ft_split(char *str)
{
	int i;
	int j = 0;
	char **result;

	result = malloc(sizeof(char **) * MAX_X);
	while(*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	while(*str)
	{
		if(*str > 32)
		{
			i = 0;
			result[j] = malloc(sizeof(char) * MAX_Y);
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
int main(int ac, char **av)
{
	if(ac > 1)
	{
		int i = 0;
		char **result = ft_split(av[1]);
		while(result[i])
			i++;
		i--;
		while(i > 0)
		{
			putstr(result[i]);
			write(1, " ", 1);
			i--;
		}
		putstr(result[0]);
	}
	write(1, "\n", 1);
}
