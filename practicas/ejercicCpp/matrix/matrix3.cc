const int X_SIZE = 60;
const int Y_SIZE = 30;

int matrix[X_SIZE][Y_SIZE];

void init_matrix(void)
{
    register int x,y;    // current element to initialize 

    for (y = 0; y < Y_SIZE; ++y) {
	for (x = 0; x < X_SIZE; ++x) {
            matrix[x][y] = -1;
        }
    }
}
