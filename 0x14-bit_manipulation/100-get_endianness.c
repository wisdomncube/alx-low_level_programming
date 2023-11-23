#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;

	a = a >> 1;
	if (a != 0)
		return (0);
	return (1);
}
