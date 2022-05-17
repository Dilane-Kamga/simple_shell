#include "holberton.h"

/**
 * _getenv - retrieves env variable that matches input string
 * @input: pointer to input string
 * @environ: double pointer to local environmental variables
 * Return: string of env variable
 */
char *_getenv(char *input, char **environ)
{
	register int i = 0;
	char *tok, *right;

	while (environ[i])
	{
		tok = _strtok(environ[i], "=");
		if (_strcmp(tok, input) == 0)
		{
			right = _strtok(NULL, "=");
			return (right);
		}
		i++;
	}
	return (NULL);
}
