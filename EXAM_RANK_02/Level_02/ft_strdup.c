/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>
int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
char    *ft_strdup(char *src)
{
	char *ptr;
	char *s;

	ptr = malloc(ft_strlen(src) + 1);
	if(!ptr)
		return(NULL);
	s = ptr;
	while(*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return(s);
}
#include <stdio.h>
int main()
{
	char *s1;
	char s2[] = "Hello";
	s1 = ft_strdup("Hello");
	printf("%s", s1);
}