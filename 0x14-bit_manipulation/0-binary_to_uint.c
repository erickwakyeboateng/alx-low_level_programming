#include "main.h"

/**
 * binary_to_uint -  a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return:  NULL, if b contains chars not 0 or 1 - 0 else the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ConvertedNumber = 0, multiplier = 1;
	int ele;

	if (b == '\0')
		return (0);

	for (ele = 0; b[ele];)
		ele++;

	for (ele -= 1; ele >= 0; ele--)
	{
		if (b[ele] != '0' && b[ele] != '1')
			return (0);

		ConvertedNumber += (b[ele] - '0') * multiplier;
		multiplier *= 2;
	}

	return (ConvertedNumber);
}
