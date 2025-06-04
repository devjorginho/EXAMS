/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/

#include <stdlib.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;
	const char *ptr;

	i = 0;
	j = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				ptr = &s1[i];
				return((char *)ptr);
			}
			j++;
		}
		i++;
	}
	return(NULL);
}
#include <stdio.h>
int main()
{
	char s1[] = "Ola Mundo";
	char s2[] = "UxiTMundo";
	printf("%s", ft_strpbrk(s2,s1));
}