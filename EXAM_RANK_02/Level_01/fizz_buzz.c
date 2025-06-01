/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>*/
#include <unistd.h>

void	putnbr(int nb)
{
	char c;
	if(nb > 9)
		putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
void	fizz_buzz(void)
{
	int nb;
	
	nb = 1;
	while(nb <= 100)
	{
		if(nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(nb % 3 == 0)
			write(1, "fizz", 4);
		else if(nb % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(nb);
		nb++;
		write(1, "\n", 1);
	}
}
int main()
{
	fizz_buzz();
	return(0);
}
