#include <stdio.h>
int main()
{
    int sum = 0, i, j, k;
    int a[3][3], b[3][3], result[3][3];

    printf("Enter the first matrix : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &b[i][j]);

        }

    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    printf("Display in matrix form : ");
    printf("\n");
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", result[i][j]);
            printf("\n");
    }
    return 0;
}
