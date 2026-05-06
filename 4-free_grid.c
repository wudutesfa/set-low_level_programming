cat > /set-low_level_programming/malloc_free/4-free_grid.c << 'EOF'
#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}
EOF
