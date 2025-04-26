//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _strs {
	char *str1;
	char *str2;
} strs;

char *structcat(strs input)
{
	char *str1;
	char *str2;
	char *result;
	int totalsize = strlen(input.str1) + strlen(input.str2);

	result = malloc((totalsize + 1) * sizeof(char));
	if(!result)
		return(NULL);
	char	*ptr = result;
	while(*input.str1)
		*ptr++ = *input.str1++;
	while(*input.str2)
		*ptr++ = *input.str2++;
	*ptr = '\0';
	return(result);
}
int main()
{
	strs input;
	input.str1 = "Hello, ";
	input.str2 = "Jorginho!";
	char *concatenated = structcat(input);
	printf("%s\n", concatenated);
}