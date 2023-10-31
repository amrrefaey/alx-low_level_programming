#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *s)
{
	int words = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			words++;
		}
		s++;
	}

	return (words);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of words or NULL on failure.
 */
char **strtow(char *str)
{
	int len = 0;
	int words = count_words(str);
	int i, j, k = 0, c = 0, start;
	char **matrix;
	char *tmp;

	if (str == NULL || *str == '\0')
		return (NULL);


	while (str[len])
		len++;

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc((words + 1) * sizeof(char *));

	if (matrix == NULL)
		return (NULL);

	start = 0;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c > 0)
			{

		tmp = (char *)malloc((c + 1) * sizeof(char));

				if (tmp == NULL)
				{
					for (j = 0; j < k; j++)
						free(matrix[j]);
					free(matrix);
					return (NULL);
				}

				for (j = 0; j < c; j++)
					tmp[j] = str[start + j];
				tmp[c] = '\0';

				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;
	return (matrix);
}
