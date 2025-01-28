unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned	int i = 8;

	while (i--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
#include <stdio.h>
int main()
{
    unsigned char result = reverse_bits(4);
    printf("Reversed bits of 3: %u\n", result);
    return 0;
}