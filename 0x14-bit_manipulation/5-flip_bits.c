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
	unsigned int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += (xor & 1UL);
		xor >>= 1UL;
	}
	return (count);
}


