//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//      devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	found;
	
	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			 {
				found = 1;
				break;
			 }
			j++;
		}
		if (!found)
			break;
		i++;
	}
	return (i);
}
#include <stdio.h>
int main()
{
	char *s = "fz";
	char *accept = "abcdef";
	printf("%zu", ft_strspn(s,accept));
}