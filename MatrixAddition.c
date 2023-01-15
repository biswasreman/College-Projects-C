#include <stdio.h>
int main()
{

    int a[2][3], b[2][3], c[2][3], i, j;

    printf("Enter number in 1st Matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter number in 2nd Matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }


    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    }




    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", c[i][j]);
            printf("\n");
    }
}




