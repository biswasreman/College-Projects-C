#include <stdio.h>
int main()
{
    int num1, num2, lcm;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (lcm = 1; lcm < num1 * num2; lcm++)
        if (lcm % num1 == 0 && lcm % num2 == 0)
            break;

    printf("LCM is %d", lcm);
}


