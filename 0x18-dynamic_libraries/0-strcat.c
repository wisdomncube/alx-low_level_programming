#include "main.h"
/**
 * _strcat - merges 2 strings
 * @dest: pointer to the first string
 * @src: source string to be appended
 *
 * Return: pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;

		count++;
		count2++;
	}
	return (dest);
}
