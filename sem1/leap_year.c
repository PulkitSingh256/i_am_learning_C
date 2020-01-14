#include <stdio.h>

/* The Conditions for a given year To be a Leap year are as Following
    1) If the year is Completly Divisible By 4, it is a Leap Year
    2) If the year is Completly Divisible By 400, it is a Leap Year
    3) If the year is Completly Divisible By 100, it is not a Leap Year */

int main()
{
    int year,result;
    result = (   (year%4)==0 || (year%400)==0    );
    printf("Enter The Year\n");
    scanf("%d", &year);
    if((year%4==0||year%400==0)&&year%100!=0)
    {
        printf("%d is a Leap Year\n",year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
}
