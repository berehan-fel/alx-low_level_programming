/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number in decimal form.
 * @index: the index at which to extract the bit
 *
 * Return: the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
