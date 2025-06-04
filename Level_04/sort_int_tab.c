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
	while(i <= size - 1)
	{
		if(tab[i] > tab[i + 1])
			ft_swap(&tab[i], &tab[i + 1]);
		i++;
	}
}
#include <stdio.h>
int main()
{
	int i = 0;
	int size = 5;
	int nb[] = {-1, 33, 21, 0, 44};
	sort_int_tab(nb, size);
	while(i < size)
	{
		printf("%d\n", nb[i]);
		i++;
	}
}
