#include <stdio.h>
int main()
{

int num, temp, rem, i = 1, sum = 0;
printf("Enter any decimal number: ");
scanf("%d", &num);
temp = num;

while (temp != 0)
{
    rem = temp % 8;
    sum = sum + i * rem;
    i = i * 10;
    temp = temp / 8;
}

printf("Decimal to 0ctal number is: %d", sum);
}