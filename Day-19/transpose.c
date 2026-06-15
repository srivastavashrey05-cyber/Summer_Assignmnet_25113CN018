#include <stdio.h>

int main() {
    int rows, column;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &column);

    int a[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix is:\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}