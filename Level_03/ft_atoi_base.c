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

int get_digit(char c)
{
	if(c >= '0' && c <= '9')
		return(c - '0');
	else if(c >= 'A' && c <= 'F')
		return(c - 55 + 10);
	else if(c >= 'a' && c <= 'f')
		return(c - 87 + 10);
	return(-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int digit;
	int result;
	int sign;

	sign = 1;
	while(*str == ' ' || *str == '\t')
		str++;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign = -sign;
		str++;
	}
	while(*str && *str > 32)
	{
		if(get_digit(*str))
		{
			result = result * str_base;
			result = get_digit(*str);
		}
		str++;
	}
	return(result * sign);
}
int main()
{
	printf("%d", ft_atoi_base("ff", 16));
}