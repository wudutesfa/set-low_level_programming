#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space containing a string copy
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
EOF
