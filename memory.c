#include "shell.h"

/**
 * bfree - frees a Pointer and NULLs the address
 * @ptr: address of the Pointer to free
 *
 * Return: 1 if Freed, Otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
