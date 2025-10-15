/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, k;
    int mat[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (k = 0; k <= rows + cols - 2; k++) {
        for (i = 0; i < rows; i++) {
            j = k - i;
            if (j >= 0 && j < cols) {
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}