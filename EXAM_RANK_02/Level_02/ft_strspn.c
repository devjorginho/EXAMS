/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);*/

#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while(s[i] && accept[j])
	{
		while(accept[j])
		{
			while(s[i] == accept[j])
			{
				count++;
				i++;
			}
			j++;
		}
	}
	return(count);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Hello";
	char s2[] = "Hel123";
	printf("%zu\n", ft_strspn(s2,s1));
	printf("%zu\n", strspn(s2,s1));
}