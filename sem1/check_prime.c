#include <stdio.h>
#include <math.h>

int main()
{
    double input;
    double i=2.00;
    printf("Enter The Number To Test its Primality: ");
    scanf("%lf",&input);
    for(;i<input;i++)
    {
        if(fmod(input,i)==0)
        {
            printf("The Number %.2lf is Divisible By %.2lf And Hence Not a Prime Number\n",input,i);
            break;
        }
        else
        {
            printf("The Number %.2lf is a Prime Number\n",input);
            break;

        }
    }
}
