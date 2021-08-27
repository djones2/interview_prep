#include <stdio.h>
#include <stdint.h>

/*
 * Function that retrieves the Hamming Weight of an unsigned 32 bit integer.
 */


int main()
{
	uint32_t n = 0;
	int hamming_weight;
	for (hamming_weight = 0; n != 0; n >>=1) {
		if (n & 1) {
			hamming_weight++;
		}
	}
	printf("%d\n", hamming_weight);
	return 0;
}



/*
 * Function that reverses the the bit order of an unsigned 32 bit integer.
 */
/*
int main()
{
	uint32_t n = 0000000000000000010101000000;
	uint32_t reverse_n = n;
	int count = 32;
	if (!n) {
		return reverse_n;
	} else {
		while (n) {
			reverse_n <<= 1;
			reverse_n |= n & 1;
			n >>= 1;
			count--;
		}
	}
	reverse_n <<= count;
	printf("%d\n", reverse_n);
	return reverse_n;
} */