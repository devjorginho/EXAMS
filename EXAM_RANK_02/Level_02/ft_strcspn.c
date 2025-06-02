/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);*/
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t j;
	size_t i;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}
#include <stdio.h>
int main()
{
	char teste1[] = "Jorginho";
	char teste2[] = "Klorginho";
	printf("%zu\n", ft_strcspn(teste2,teste1));
}