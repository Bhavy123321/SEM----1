//Perform Addition of two matrices.
#include <stdio.h>
int main() {
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];
    int i, j, n;
    printf("Enter elements for mat1:\n");
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            printf("Element - mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements for mat2:\n");
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            printf("Element - mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nSum of two matrices:\n");
    for (i=0;i<3;i++)
	{
        for (j=0;j<3;j++)
		{
            printf("%d   ", sum[i][j]);
            if (j == 2)
			{
                printf("\n");
            }
        }
    }
}
