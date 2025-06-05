/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/

#include <stdio.h>

int	ft_atoi_base(const char *s, int str_base)
{
	int sign = 1;
	int result = 0;
	(void) str_base;

	if(*s == '-' || *s == '+')
	{
		if(*s == '-')
			sign = -sign;
		s++;
	}
	while((*s >= '0' && *s <= '9') || (*s >= 'a' && *s <= 'f') || (*s >= 'A' && *s <= 'F'))
	{
		result = result * str_base;
		if (*s >= '0' && *s <= '9')
			result = result + *s - '0';
		else if (*s >= 'a' && *s <= 'f')
			result = result + *s - 'a' + 10;
		else if (*s >= 'A' && *s <= 'F')
			result = result + *s - 'A' + 10;
		s++;
	}
	return(result * sign);
}

int main()
{
	printf("%d", ft_atoi_base("FFFFFFF", 10));
}