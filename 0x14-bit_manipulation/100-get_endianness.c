/**
 * get_endianness - checks if the system is little or big endian.
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x = 1;
	char *s = (char *)&x;

	return (*s);
}
