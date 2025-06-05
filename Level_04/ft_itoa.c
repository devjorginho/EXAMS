/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>

int count_digits(int nb)
{
	int count = 0;
	if(nb == 0)
		return(1);
	if(nb < 0)
		nb = -nb;
	while(nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return(count);
}
char	*ft_itoa(int nbr)
{
	char *s;
	int digits = count_digits(nbr);
	int negative = nbr < 0 ? 1 : 0;
	int i = digits + negative;
	long int n = nbr;

	s = malloc(i + 1);
	s[i] = '\0';
	if(n == 0)
	{
		s[0] = '0';
		return(s);
	}
	if(negative)
	{
		s[0] = '-';
		n = -n;
	}
	while(n > 0)
	{
		s[--i] = (n % 10) + '0';
		n /= 10;
	}
	return(s);
}
#include <stdio.h>

int main()
{
	int nb = 230;
	printf("%s", ft_itoa(nb));
}