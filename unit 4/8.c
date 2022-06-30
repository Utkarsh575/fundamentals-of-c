#include <stdio.h> 
#define ROWS 4
#define COLS 3
int main ()
{
// matrix of 4 rows and 3 columns
int matrix[ROWS][COLS] = {{1, 2, 3},
{4, 5, 6},
{7, 8, 9},
{10, 11, 12}};
int** pmat = (int **)matrix;
printf("&matrix[0][0] = %u\n", &matrix[0][0]);
printf("&pmat[0][0] = %u\n", 
&pmat[0][0]); return 0;
}
