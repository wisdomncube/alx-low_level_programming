#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function
 * Return: 0
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
