/*Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>*/

#include <unistd.h>

void	expand_str(char *s)
{
	int first_word;

	first_word = 1;
	while(*s)
	{
		while(*s <= 32)
			s++;
		if(*s == '\0')
			break;
		if(!first_word)
			write(1, "   ", 3);
		first_word = 0;
		while(*s && *s > 32)
			write(1, s++, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
}