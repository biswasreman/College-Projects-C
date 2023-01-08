#include <stdio.h>
int main()
{

    int num, temp, rem, i = 1, j;
    char hexa[50];
    printf("Enter any decimal number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0)
    {
        rem = temp % 16;
        if (rem < 10)
            rem = rem + 48;
        else
            rem = rem + 55;
        hexa[i] = rem;
        temp = temp / 16;
        i++;
    }
    printf("Hexadecimal number is: ");

    for (j = i - 1; j > 0; j--)
    {
        printf("%c", hexa[j]);
    }

    return 0;
}