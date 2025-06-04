/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
char    *ft_strrev(char *str)
{
	int i;
	int j;
	char ptr[ft_strlen(str) + 1];

	i = 0;
	j = 0;
	while(str[i])
		i++;
	i -= 1;
	while(i >= 0)
		ptr[j++] = str[i--];
	ptr[j] = '\0';
	j = 0;
	i = 0;
	while(ptr[i])
		str[j++] = ptr[i++];
	return(str);
}

#include <stdio.h>
int main()
{
	char s1[] = "HELLO";
	char *s2 = ft_strrev(s1);
	printf("%s\n", s2);
}