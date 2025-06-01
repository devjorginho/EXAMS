/*Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$*/
#include <unistd.h>

int	u_letter(char *s)
{
	return(*s >= 'A' && *s <= 'Z');
}
int	l_letter(char *s)
{
	return(*s >= 'a' && *s <= 'z');
}
void	rev_all_letters(char *s)
{
	while(*s)
	{
		if(u_letter(s))
			*s += 32;
		else if(l_letter(s))
			*s -= 32;
		write(1, s++, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		rev_all_letters(av[1]);
	write(1, "\n", 1);
}