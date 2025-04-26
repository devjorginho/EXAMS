//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int	sum(const int count, ...)
{
	va_list	args;
	int i;
	int n;
	int plusall;
	va_start(args, count);

	i = 0;
	plusall = 0;
	while(i < count)
	{
		n = va_arg(args, int);
		plusall = plusall + n;
		i++;
	}
	va_end(args);
	return(plusall);
}
int main()
{
	int n;
	n = sum(10, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
	printf("%d", n);
	return(0);
}
