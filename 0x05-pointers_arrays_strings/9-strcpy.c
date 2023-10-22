#include "main.h"

/**
*_strcpy - function name
*@dest: function parameter 1
*@src: parameter 2
*Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
