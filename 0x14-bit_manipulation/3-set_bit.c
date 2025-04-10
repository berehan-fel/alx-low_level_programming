/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: points to the number to manipulate.
 * @index: the index at which to change the bit.
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	(*n) |= (1UL << index);
	return (1);
}
