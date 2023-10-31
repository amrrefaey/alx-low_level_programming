#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing the concatenated arguments
 *         with newlines, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	 int i, j;
	 int total_length = 0;
	 char *result;
	 int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
		total_length++;
	}

	result = (char *) malloc(total_length + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[pos++] = av[i][j];
			pos++;
		}
		result[pos++] = '\n';
		pos++;
	}

	result[pos] = '\0';

	return (result);
}
