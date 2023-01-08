#include <stdio.h>
int main()
{

    int arr[15], num, i, j;
    i = 0;
    printf("Enter any decimal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        arr[i] = num % 16;
        num = num / 16;
        i++;
    }
    printf("Decimal to Hexadecimal number is: ");

    for (j = i - 1; j >= 0; j--)

        if (arr[j] < 10)
            printf("%d", arr[j]);

        else
            printf("%c", arr[j] + 55);

    return 0;
}
