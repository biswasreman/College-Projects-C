#include <stdio.h>
int main()
{

    int num, i = 1, sum = 0;
    printf("Enter any integer number: ");
    scanf("%d", &num);
    do
    {
        sum = sum + i;
        i++;

    } while (i <= num);

    printf("the sum of all the given numbers is: %d", sum);

    return 0;
}
