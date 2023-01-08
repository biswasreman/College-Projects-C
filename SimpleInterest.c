#include <stdio.h>
int main()
{

    int p, r, t;

    printf("Enter the given Principle: ");
    scanf("%d", &p);

    printf("Enter the given rate: ");
    scanf("%d", &r);

    printf("Enter the given time: ");
    scanf("%d", &t);

    printf("The simple interest is: %d", (p*r*t)/100 );

    return 0;

}

