//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <stdlib.h>
#include <stdio.h>

int	is_del(char *s)
{
	if (!s)
		return (0);
	return (*s == ' ' || *s == '\n' || *s == '\t');
}
int	word_count(char *s)
{
	int count;
	
	count = 0;
	while (*s)
	{
		while (is_del(s))
			s++;
		if (*s && !is_del(s))
			count++;
		while (*s && !is_del(s))
			s++;
	}
	return (count);
}
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
char    **ft_split(char *str)
{
	char	**allstr;
	int		start;
	int		i;
	int		j;

	i = 0;
	if (!str)
		return (NULL);
	allstr = (char **)malloc((word_count(str) + 1) * sizeof(char *));
	if (!allstr)
		return (NULL);
	while(*str)
	{
		while(is_del(str))
			str++;
		if (*str)
		{
			start = 0;
			while (str[start] && !is_del(&str[start]))
				start++;
			allstr[i] = malloc((start + 1) * sizeof(char));
			if (!allstr[i])
				return (NULL);
			j = 0;
			while (j < start)
			{
				allstr[i][j] = str[j];
				j++;
			}
			allstr[i][j] = '\0';
			str = str + start;
			i++;
		}
	}
	allstr[i] = NULL;
	return (allstr);
}
int main()
{
	char *s = "Jorge Luiz De carvalho silva";
	char **fullname;

	fullname = ft_split(s);
	for (int i = 0; fullname[i]; i++)
		printf("%s\n", fullname[i]);
	for (int i = 0; fullname[i]; i++)
		free(fullname[i]);
	free(fullname);
	return (0);
}