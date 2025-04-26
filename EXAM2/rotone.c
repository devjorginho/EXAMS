//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho


#include <unistd.h>
#include <string.h>

int	islletter(char c)
{
	return(c >= 'a' && c <= 'z');
}

int	isuletter(char c)
{
	return(c >= 'A' && c <= 'Z');
}
char	*plusletter(char *s)
{
	char	*start;

	start = s;
	while(*s)
	{
		if(isuletter(*s))
		{
			if(*s == 'Z')
				*s = 'A';
			else
				*s = *s + 1;
		}
		else if(islletter(*s))
		{
			if(*s == 'z')
				*s = 'a';
			else
				*s = *s + 1;
		}
		s++;
	}
	return(start);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		write(1, plusletter(argv[1]), strlen(argv[1]));
	}
}