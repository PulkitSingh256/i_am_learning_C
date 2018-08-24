#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float side1;
    float side2;
    float side3;

    printf("Enter Three Sides of the triange: ");
    scanf("%f %f %f",&side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("The Triangle For zero-length Sides is a Point\n");
        exit(0);
    }
    printf("Given Sides of Triangle are\nA=%f\nB=%f\nC=%f\n", side1, side2, side3);

    if((side1+side2)>side3)
     {
        printf("The Given Sides Makes a Valid Triangle\n");
        if(((side1*side1)+(side2*side2)==(side3*side3))||((side1*side1)+(side3*side3)==(side2*side2))||((side3*side3)+(side2*side2)==(side1*side1)))
        {
            printf("The Sides Make Up a Right-Angled Triangle\n");
        }

        if(((side1==side2)||(side2==side3))||(side3==side1))
        {
            if(((side1==side2)&&(side2==side3))&&(side3==side1))
            {
                printf("The Given Sides Make Up an Equilateral Triangle\n");
            }
            else
            {
                printf("The Given Sides Make Up a Isosceles\n");
            }
        }
        else
        {
            printf("The Given Sides Make Up a Scalene Triangle\n");
        }


     }
    else
     {
        printf("The Given Sides Does Not Make a Valid Triangle\n");
     }

}
