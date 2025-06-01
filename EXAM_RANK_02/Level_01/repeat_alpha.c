/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/
#include <unistd.h>

int	u_letter(char *s)
{
	return(*s >= 'A' && *s <= 'Z');
}
int	l_letter(char *s)
{
	return(*s >= 'a' && *s <= 'z');
}
void	rep_that(char *s)
{
	int nb;

	nb = 0;
	while(*s)
	{
		if(u_letter(s))
			nb = (*s - 'A' + 1);
		else if(l_letter(s))
			nb = (*s - 'a' + 1);
		else
			write(1, s, 1);
		if(nb > 0)
		{
			while(nb--)
				write(1, s, 1);
		}
		s++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		rep_that(av[1]);
	write(1, "\n", 1);
}