// Perform Multiplication of two matrices. 
#include <stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d",&n);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d",&p);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d",&q);

    if (n!=p)
	{
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    int firstMatrix[m][n];
    int secondMatrix[p][q];
    int resultMatrix[m][q];
    printf("Enter the elements of the first matrix:\n");
    for (i=0;i<m;i++)
	{
        for (j=0;j<n;j++)
		{
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i=0;i<p;i++)
	{
        for (j=0;j<q;j++)
		{
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    for (i=0;i<m;i++)
	{
        for (j=0;j<q;j++)
		{
            resultMatrix[i][j] = 0;
        }
    }
    for (i=0;i<m;i++)
	{
        for (j=0;j<q;j++)
		{
            for (k=0;k<n;k++)
			{
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    printf("Result Matrix (after multiplication):\n");
    for (i=0;i<m;i++)
	{
        for (j=0;j<q;j++)
		{
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }
}
