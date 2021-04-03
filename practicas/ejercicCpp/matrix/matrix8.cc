#include <string.h>

const int X_SIZE = 60;
const int Y_SIZE = 30;

int matrix[X_SIZE][Y_SIZE];

inline void init_matrix(void)
{
    memset(matrix, -1, sizeof(matrix));
}
