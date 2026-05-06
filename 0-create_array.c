cat > /set-low_level_programming/malloc_free/0-create_array.c << 'EOF'
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return (NULL);

    arr = malloc(sizeof(char) * size);
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = c;

    return (arr);
}
EOF
