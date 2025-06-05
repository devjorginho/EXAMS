/*Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	while(i < size)
	{
		int j = 0;
		while (j < size - 1)
		{
			if(tab[j] > tab[j + 1])
			{
				int temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
int main()
{
	int i = 0;
	int nb[] = {5,6,4,1,2,3};
	sort_int_tab(nb, 6);
	while(i < 6)
	{
		printf("%d ", nb[i]);
		i++;
	}
}