/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>
int	ft_atoi(char *s)
{
	int result;

	result = 0;
	while(*s >= '0' && *s <= '9')
	{
		result = result * 10;
		result = result + (*s -'0');
		s++;
	}
	return(result);
}
void	putnbr(int nb)
{
	char c;

	if(nb > 9)
		putnbr(nb / 10);
	c =  nb % 10 + '0';
	write(1, &c, 1);
}
int	is_prime(int nb)
{
	int i;

	i = 2;
	if(nb < 2)
		return(0);
	while(i * i <= nb)
	{
		if(nb % i == 0)
			return(0);
		i++;
	}
	return (i);
}
int main(int ac, char **av)
{
	if(ac == 1)
	{
		putnbr(0);
		write(1, "\n", 1);
		return(0);
	}
	if(ac == 2)
	{
		long int nb = ft_atoi(av[1]);
		long int i = 0;
		while(nb)
		{
			if(is_prime(nb))
				i += nb;
			nb--;
		}
		putnbr(i);
	}
	write(1, "\n", 1);
}
