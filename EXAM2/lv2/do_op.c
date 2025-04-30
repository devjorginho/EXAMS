//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//      devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	do_op(int a, char op, int b)
{
	if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '+')
		return (a + b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	else
		return (0);
}
int main(int ac, char **av)
{
	if (ac == 4)
		printf("%d", do_op(atoi(av[1]), av[2][0], atoi(av[3])));
	printf("\n");
}