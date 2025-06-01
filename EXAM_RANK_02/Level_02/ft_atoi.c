/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/

int	ft_atoi(const char *str)
{
	int result;
	int sign;

	sign = 1;
	while(*str >= 9 && *str <= 13 || *str == 32)
		str++;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign = -sign;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	return(result * sign);
}
//#include <stdio.h>
//int main()
//{
//	int i = ft_atoi("-123456");
//	printf("%d\n", i);
//}