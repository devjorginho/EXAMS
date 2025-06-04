/*Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$*/

#include <unistd.h>

int ft_atoi(char *s)
{
	int result;

	result = 0;
	while(*s >= '0' && *s <= '9')
	{
		result = result * 10;
		result = result + *s - '0';
		s++;
	}
	return(result);
}
void	int_to_hex(int nb)
{
	if(nb >= 16)
		int_to_hex(nb / 16);
	write(1, &"0123456789abcdef"[nb % 16], 1);
}
int main(int ac, char **av)
{
	if(ac == 2)
		int_to_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}