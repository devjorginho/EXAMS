#include <unistd.h>
#include <stdio.h>


unsigned char reverse_bits(unsigned char test)
{
	unsigned char result = 0;
	int i = 8;

	while(i--)
	{
		result = (result << 1) | (test & 1);
		test = (test >> 1);
	}
	return(result);
}
void	print_bits(unsigned char test)
{
	int i = 8;
	unsigned char result = 0;

	while(i--)
	{
		result = (test >> i & 1) + '0';
		write(1, &result, 1);
	}
}
int main()
{
	unsigned char result = 2;
	print_bits(result);
	printf("\n");
	result = reverse_bits(result);
	print_bits(result);
}