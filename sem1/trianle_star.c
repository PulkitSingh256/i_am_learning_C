#include <stdio.h>

int main()
{
    int rowloop,spacecount,starcount,rowcount;
    printf("Enter the number of rows for triangle: ");
    scanf("%d",&rowcount);
    for(rowloop=1;rowloop<=rowcount;rowloop++)
    {
        for (spacecount=rowcount-rowloop;spacecount>=1;spacecount--)
        {
            printf(" ");
        }
        for (starcount=1;starcount<=(2*rowloop)-1;starcount++)
        {
            printf("*");
        }printf("\n");
    }

}
