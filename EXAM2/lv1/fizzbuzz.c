//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>

void	ft_putnbr(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
void ismultiple(void)
{
	int nb;

	nb = 1;
	while(nb <= 100)
		{
			if(nb % 3 == 0 && nb % 5 == 0)
				write(1, "fizzbuzz", 8);
			else if(nb % 3 == 0)
				write(1, "fizz", 4);
			else if(nb % 5 == 0)
				write(1, "buzz", 4);
			else
				ft_putnbr(nb);
			nb++;
			write(1, "\n", 1);
		}
}
int main(void)
{
	ismultiple();
}

