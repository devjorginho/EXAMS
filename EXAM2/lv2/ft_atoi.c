//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//      devjorginho 😎 | GitHub: https://github.com/devjorginho

int	ft_atoi(const char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		*str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str1 = "-1234";
	char *str2 = "1234";
	char *str3 = "heos1234";
	char *str4 = "++-hh11234";
	
	printf("My atoi\n\n");
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n\n", ft_atoi(str4));
	
	printf("Original atoi\n\n");
	printf("%d\n", atoi(str1));
	printf("%d\n", atoi(str2));
	printf("%d\n", atoi(str3));
	printf("%d\n", atoi(str4));
}