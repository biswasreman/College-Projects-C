#include <stdio.h>
int main()
{

    int arr[2][3], i, j;

    printf("Enter number in matrix : ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Display in matrix form : ");
    printf("\n");
    printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", arr[i][j]);
            printf("\n");
    }
}

