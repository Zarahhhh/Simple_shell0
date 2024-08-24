#include "shell.h"

/**
 *free_arraybid - this frees a array bidimentional
 *@array: a double pointer that point at address of memory of a array
 */

void free_arraybid(char **array)

{
	int i;

	for (i = 0; array[i] != NULL; i++)
		free(array[i]);
	free(array);
}
