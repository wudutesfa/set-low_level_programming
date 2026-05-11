#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total;
    unsigned int i;
    char *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total = nmemb * size;
    ptr = malloc(total);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total; i++)
        ptr[i] = 0;

    return (ptr);
}
