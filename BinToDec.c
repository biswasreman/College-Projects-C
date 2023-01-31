#include <stdio.h>
#include <math.h>
int main()
{

    int num, rem, sum=0, i=0, temp;

    printf("Enter the binary number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) 
    {

        rem = num % 10;
        sum = sum + rem * pow(2,i);
        i++;
        num = num / 10;

    }

 printf("Decimal equivalent of %d is: %d", temp, sum);

}
