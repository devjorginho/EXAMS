/*Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$*/
#include <unistd.h>

int u_letter(char c)
{
	return(c >= 'A' && c <= 'Z');
}
char ft_tolower(char c)
{
	if(u_letter(c))
		return(c += 32);
	return (c);
}
void	camel_to_snake(char *s)
{
	while(*s)
	{
		if(u_letter(*s))
		{
			*s = ft_tolower(*s);
			write(1, "_", 1);
			write(1, s, 1);
		}
		else
			write(1, s, 1);
		s++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		camel_to_snake(av[1]);
	write(1, "\n", 1);
}