//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//      devjorginho 😎 | GitHub: https://github.com/devjorginho

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char *str1 = "Hello";
	char *str2 = "hello";
	char *str3 = "hello";
	char *str4 = "Hello";

	printf("My fuc: %d\n\n", ft_strcmp(str1, str2));
	printf("Original fuc: %d\n\n", strcmp(str1, str2));
	printf("My fuc: %d\n\n", ft_strcmp(str3, str4));
	printf("Original fuc: %d\n\n", strcmp(str3, str4));
}