//to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("Roots are: x1=%f and x2=%f\n", x1, x2);
    return 0;
}
