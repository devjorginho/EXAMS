//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

void	snreplace(char *str, char *tosearch, char *toreplace)
{
	while(*str)
	{
		if(*str == *tosearch)
			*str = *toreplace;
		write(1, str++, 1);
	}
}
int main(int ac, char **av)
{
	if (ac == 4)
		snreplace(av[1], av[2], av[3]);
	write(1, "\n", 1);
}