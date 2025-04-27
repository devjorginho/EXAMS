//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
void	ft_putnbr(unsigned int nb)
{
	char	c;

	if(nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
int main()
{
	char *s = "hello world !";
	ft_putnbr(ft_strlen(s));
	write(1, "\n", 1);
}