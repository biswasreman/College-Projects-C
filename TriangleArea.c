#include <stdio.h>
int main()
{

    float base, height;

    printf("Enter the given base: ");
    scanf("%f", &base);

    printf("Enter the given height: ");
    scanf("%f", &height);

    printf("The area of triangle is %f", 0.5 * base * height);

    return 0;
}
