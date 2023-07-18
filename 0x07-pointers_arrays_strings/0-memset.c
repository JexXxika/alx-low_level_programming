#include "main.h"
/**
 * _memset - fill blocks of memory with a specific value
 * @s: starting addresses of memory to be filled
 * @b: desired value
 * @n: numbers of byte to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
