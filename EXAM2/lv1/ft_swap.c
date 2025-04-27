//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n1 = 42;
	int n2 = 43;

	printf("Values before the function\n\n");
	printf("Value of n1: %d\n", n1);
	printf("Value of n2: %d\n\n", n2);
	ft_swap(&n1,&n2);
	printf("Values after the function\n\n");
	printf("Value of n1: %d\n", n1);
	printf("Value of n2: %d\n", n2);
}