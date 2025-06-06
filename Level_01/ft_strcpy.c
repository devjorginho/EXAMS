/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

char    *ft_strcpy(char *s1, char *s2)
{
	char *ptr;

	ptr = s1;
	while(*s2)
		*ptr++ = *s2++;
	ptr = '\0';
	return(s1);
}