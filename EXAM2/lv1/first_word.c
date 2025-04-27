//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

char *firstword(char *str)
{
	while(*str == '\t' || *str == ' ')
		str++;
	while(*str && *str != '\t' && *str != ' ')
		write(1, str++, 1);

}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		firstword(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}