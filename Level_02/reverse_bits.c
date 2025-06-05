/*Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
     ||
     \/
 0110  0100*/

 #include <stdio.h>
 #include <unistd.h>

 unsigned char	reverse_bits(unsigned char octet)
 {
	unsigned char bit = 0;
	int i = 0;
	while(i < 8)
	{
		if(octet >> i & 1)
			bit = bit * 10 + 1;
		else
			bit = bit * 10;
					i++;
	}
	return(bit);
 }
 int main()
 {
	unsigned char d = reverse_bits(0b00100110);
	printf("%d", d);
 }


