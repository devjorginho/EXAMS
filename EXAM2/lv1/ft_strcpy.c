//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *ptr;

	ptr = s1;
	while(*s2)
		*s1++ = *s2++; 
	*s1 = '\0';
	return(ptr);
}
int main()
{
	char s1[4];
	char *s2 = "egg";
	char *result = ft_strcpy(s1, s2);
	while(*result)
		write(1, result++, 1);
}