#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	is_space(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int	word_count(char *s)
{
	int count;

	count = 0;
	while(*s)
	{
		while(*s && is_space(*s))
			s++;
		if(*s && !is_space(*s))
			count++;
		while(*s && !is_space(*s))
			s++;
	}
	return(count);
}

char	**alloc_split(char *s)
{
	char	**result = NULL;
	int		size = 0;
	int		i = 0;
	int		k = 0;
	int		words = word_count(s);

	result = malloc(sizeof(char *) * (words + 1));
	while(s[i])
	{
		while(s[i] && is_space(s[i]))
			i++;
		size = i;
		while(s[i] && !is_space(s[i]))
			i++;
		result[k] = malloc(sizeof(char) * ((i - size) + 1));
		k++;
	}
	return (result);
}

char	**ft_split(char *s)
{
	char **result = NULL;
	int i = 0;
	int k = 0;
	int j;

	if(!s || !*s)
		return(NULL);
	result = alloc_split(s);
	while(s[i])
	{
		j = 0;
		while(s[i] && is_space(s[i]))
			i++;
		while(s[i] && !is_space(s[i]))
		{
			result[k][j] = s[i];
			j++;
			i++;
		}
		result[k][j] = '\0';
		k++;
	}
	result[k] = NULL;
	return(result);
}
int main()
{
	int i = 0;
	char **result = ft_split(NULL);
	while(result && result[i])
		printf("%s\n", result[i++]);
}