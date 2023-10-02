#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return:  converted number
 */
unsigned int binary_to_uint(const char *t)
{
	int i;
	unsigned int dec_val = 0;

	if (!t)
		return (0);

	for (i = 0; t[i]; i++)
	{
		if (t[i] < '0' || t[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (t[i] - '0');
	}

	return (dec_val);
}
