/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	int i;
	int len;

	len = end - start;
	if(len < 0 )
		len = -len;
	i = 0;
	range = malloc((len + 1) * sizeof(int));
	if(!range)
		return(NULL);
	if(end < start)
	{
		while(start >= end)
			range[i++] = start--;
	}
	else
	{
		while(start <= end)
		range[i++] = start++;
	}
	
	return(range);
}
#include <stdio.h>

int main()
{
	int i = 0;
	int *nb = ft_range(0,4);
	
	while(i < 4)
		printf("%d\n", nb[i++]);
}
