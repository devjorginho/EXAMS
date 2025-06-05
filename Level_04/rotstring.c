/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_X 1000
#define MAX_Y 1000

void	ft_putstr(char *s)
{
	while(*s)
		write(1, s++, 1);
}
char **ft_split(char *s)
{
	int i;
	int j = 0;
	char **result;
	
	result = malloc(sizeof(char **) * MAX_Y);
	while(*s == '\t' || *s == '\n' || *s == ' ')
		s++;
	while(*s)
	{
		if(*s > 32)
		{
			i = 0;
			result[j] = malloc(sizeof(char) * MAX_X);
			while(*s > 32)
				result[j][i++] = *s++;
			result[j][i] = '\0';
			j++;
		}
		else
			s++;
	}
	result[j] = 0;
	return(result);
}
int main(int ac, char **av)
{
	if(ac > 1)
	{
		int i = 1;
		char **result = ft_split(av[1]);
		while(result[i])
		{
			ft_putstr(result[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(result[0]);
	}
	write(1, "\n", 1);
}
