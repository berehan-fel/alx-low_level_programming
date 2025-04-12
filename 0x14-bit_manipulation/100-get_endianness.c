/**
 * get_endianness - checks if the system is little or big endian.
a*/
int get_endianness(void)
{
	int x = 1;
	char *s = (char *)&x;

	return (*s);
}
