#include <stdio.h>
#include "main.h"
/**
 * memset - fills n bytes of memory pointed to by @s with constant byte @c
 * @s: Pointer
 * @c: character to fill
 * @n: number of byte
 * return: pointer filled @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
