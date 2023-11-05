// Print Transpose of a matrix.
#include <stdio.h>
int main() {
    int i,j,rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i=0;i<rows;i++)
	{
        for (j=0;j<cols;j++)
		{
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (i=0;i<rows;i++)
	{
        for (j=0;j<cols;j++)
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix:\n");
    for (j=0;j<cols;j++)
	{
        for (i=0;i<rows;i++)
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

