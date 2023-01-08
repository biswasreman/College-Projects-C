#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter an integer: ");
    scanf("%d", &a);
    c = a;
    b = 0;

    while (a != 0)
    {
        b = b * 10 + a % 10;
        a /= 10;
    }

    if (c == b)
        printf("%d is a palindrome.", c);
    else
        printf("%d is not a palindrome.", c);

    return 0;
}
