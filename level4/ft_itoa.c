//Assignment name  : ft_itoa
//Expected files   : ft_itoa.c
//Allowed functions: malloc
//--------------------------------------------------------------------------------

//Write a function that takes an int and converts it to a null-terminated string.
//The function returns the result in a char array that you must allocate.

//Your function must be declared as follows:

//char	*ft_itoa(int nbr);

#include <stdio.h>
#include <stdlib.h>

int	count_digits(int nb)
{
	int count = 0;

	if(nb <= 0)
		count++;
	while(nb)
	{
		nb /= 10;
		count++;
	}
	return(count);
}

char	*ft_itoa(int nbr)
{
	char	*s = NULL;
	int		size  = count_digits(nbr);
	long n = nbr;

	s = malloc(sizeof(int) * size + 1);
	if(n == 0)
		return("0\0");
	if(n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[--size] = '\0';
	while(n)
	{
		s[size] = (n % 10) + '0';
		size--;
		n /= 10;
	}
	return(s);
}
int main()
{
	printf("%s", ft_itoa(-1651651234));
}