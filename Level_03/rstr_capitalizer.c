/*Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>*/

#include <stdio.h>
#include <unistd.h>

char *to_low(char *s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	return(s);
}
void	last_cap(char *s)
{
	int i = 0;
	to_low(s);
	while(s[i])
	{
		while(s[i] == ' ' || s[i] == '\t')
			i++;
		while(s[i])
		{
			if(s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0')
			{
				if(s[i] >= 'a' && s[i] <= 'z')		
					s[i] -= 32;
			}
			write(1, &s[i++], 1);
		}
	}
}
int main(int ac, char **av)
{
	int i = 1;
	while(i < ac)
	{
		last_cap(av[i]);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}