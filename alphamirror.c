//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho


// I made this program to train for the exam rank2
// a = 97
// z = 122
// A = 65
// Z = 90

#include <unistd.h>

size_t	lenjorginho(char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
int	Uletter(char c)
{
	return(c >= 'A' && c <= 'Z');
}
int	Lletter(char c)
{
	return(c >= 'a' && c <= 'z');
}
char *blackmirror(char *str)
{
	const char *start;

	start = str;
	while(*str)
	{
		if(Lletter(*str))
			*str = 'z' - (*str - 'a');
		if(Uletter(*str))
			*str = 'Z' - (*str - 'A');
		str++;
	}
	return (start);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		write(1, blackmirror(argv[1]), lenjorginho(argv[1]));
	write(1, "\n", 1);
}