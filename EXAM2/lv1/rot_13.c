//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

void	plusmore(char *s)
{
	while(*s)
	{
		if(*s >= 'a' && *s <= 'z')
			*s = ((*s - 'a' + 13) % 26) + 'a';
		else if(*s >= 'A' && *s <= 'Z')
			*s = ((*s - 'A' + 13) % 26) + 'A';
		write(1, s, 1);
		s++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		plusmore(av[1]);
	write(1, "\n", 1);
}