#include "shell.h"

/**
* _strcmp - compares 2 strings
* @s1: first string
* @s2: second string
* Return: 0 if success
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			val = 0;
		else
		{
			val = (s1[i] - '0') - (s2[i] - '0');
			return (val);
		}
		i++;
	}

	return (val);
}
/**
* _strcpy - function that copies a string
* @dest: destination of the copied string
* @src: string to copy
* Return: dest string
*/
char *_strcpy(char *dest, char *src)
{
	int x, j;

	for (x = 0; src[x] != '\0'; x++)
	{
	}
	for (j = 0; j < x; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);

}
/**
* _strcat - function that concatenates two strings
* @string: original string
* @stradd: string to be added
* Return: concatenated string
*/
char *_strcat(char *string, char *stradd)
{
	int i = 0, j = 0;

	while (string[i] != '\0')
		i++;
	while (stradd[j] != '\0')
	{
		string[i] = stradd[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}
/**
* sp_string - Splits string with strtok function
* @string: string to be splitted
* @del: delimiter for the string
* Return: pointer to the string splitted
*/
char **sp_string(char *string, char *del)
{
	char **tokens;
	char *tok;
	int i = 0;

	tokens = (char **) malloc(sizeof(char *) * 1024);
	if (tokens == NULL)
	{
		return (NULL);
	}
	tok = strtok(string, del);
	while (tok != NULL)
	{
		tokens[i] = tok;
		tok = strtok(NULL, del);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
