/**
 * flip_bits - returns the number of bits you would need to flip,
 *             to get from one number to another.
 * @n: one of the numbers.
 * @m: the other number
 *
 * Return: number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned int i;

	for (i = 0; i < sizeof(n) * 8 - 1; i++)
		bits += ((m >> i) & 1UL) ^ ((n >> i) & 1UL);

	return (bits);
}


