#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    printf("Enter Three Sides of the triange: ");
    scanf("%f %f %f",&a, &b, &c);
    printf("Given Sides of Triangle are\nA=%f\nB=%f\nC=%f\n", a, b, c);
    if((a+b)>c)
     {
        printf("The Given Sides Makes a Valid Triangle\n");
     }
    else
     {
        printf("The Sides Does Not Make a Valid Triangle\n");
     }

}
