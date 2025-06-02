/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/

int		max(int* tab, unsigned int len)
{
	int i;
	int big;

	if(!tab || len == 0)
		return(0);
	i = 0;
	big = tab[i];
	while(i < len)
	{
		if(tab[i] > big)
			big = tab[i];
		i++;
	}
	return(big);
}
#include <stdio.h>
int main()
{
	int nba[6] = {};
	printf("%d", max(nba, 4));
}
