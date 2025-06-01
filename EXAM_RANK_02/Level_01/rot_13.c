/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
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
void	rot_this(char *s)
{
	while(*s)
	{
		if(u_letter(s))
			*s = ((*s - 'A' + 13) % 26) + 'A';
		else if(l_letter(s))
			*s = ((*s - 'a' + 13) % 26) + 'a';
		write(1, s++, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		rot_this(av[1]);
	write(1, "\n", 1);
}