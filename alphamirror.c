// I made this program to train for the exam rank2
// a = 97
// z = 122
// A = 65
// Z = 90

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*blackmirror(char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'z' - (s[i] - 'a');
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 'Z' - (s[i] - 'A');
		i++;
	}
	return(s);
}

int main(int argc, char *argv[])
{
	char *str = blackmirror(argv[1]);
	if (argc == 2)
	{
		while(*str)
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}