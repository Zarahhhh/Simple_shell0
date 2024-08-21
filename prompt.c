#include "shell.h"

/**
* prompt - function that prints prompt
* Return: Nothing
*/
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
