#include <stdio.h>
int main()
{

    int arr[15], num, i, j;
    i = 0;
    printf("Enter any decimal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Decimal to Binary number is: ");

    for (j = i - 1; j >= 0; j--)

        printf("%d", arr[j]);
}