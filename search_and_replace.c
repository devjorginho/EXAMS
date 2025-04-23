//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

size_t	avlen(char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
char	*replaced(char *s, char c1, char c2)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c1)
			s[i] = c2;
		i++;
	}
	return(s);
}
int	main(int argc, char *argv[])
{
	size_t i;

	i = 0;
	if(argc == 4) //&& avlen(argv[2]) == 1 && avlen(argv[3]) == 1 i put this protection if have more than 1 char in av2 and av3
		write(1, replaced(argv[1], argv[2][i], argv[3][i]), avlen(argv[1]));
	write(1, "\n", 1);
	return(0);
}