#include <stdio.h>
#include <math.h>
int main(){

int a, b, c, d, sol1, sol2;

printf("General form of the Equation is: ax^2 + bx + c = 0 \n");

printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
printf("Enter the value of c: ");
scanf("%d", &c);

d = (b^2) - (4 * a * c);

sol1 = (-b+sqrt(d))/2*a;
sol2 = (-b-sqrt(d))/2*a;

printf("The result of %dx^2 + %dx + %d are: \n", a, b, c);

printf("%d \n", sol1);
printf("%d", sol2);
  
}
