//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

void	rep_a(char *s)
{
	int n;

	n = 0;
	while(*s)
	{
		if(*s >= 'A' && *s <= 'Z')
			n = (*s - 'A') + 1;
		else if(*s >= 'a' && *s <= 'z')
			n = (*s - 'a') + 1;
		else
			n = 1;
		while(n--)
			write(1, s, 1);
		s++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		rep_a(av[1]);
	write(1, "\n", 1);
}