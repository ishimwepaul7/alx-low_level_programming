/**
 * get_bit - gets the value of a bit at index,
 * starting from least bit at 0
 *
 * @i: number og get bit
 * @index: index of bite
 *
 * Return: value of bit, or -1 if error
 */
int get_bit(unsigned long int i, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	return ((i & k) > 0);
}
