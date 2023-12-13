#include "shell.h"

/**
 * bfree - Frees memory pointed to by a pointer and sets it to NULL.
 * @ptr: Address of the pointer to free.
 * Return: 1 if successful, 0 otherwise.
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
