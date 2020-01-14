#include <stdio.h>

int count,counter1,i,sum,tri_number,j;

int main()
{

    scanf("%d",&count);
    printf("\n===============\n");
    sum=0;
    tri_number=1;
    i=1;
    for (counter1=1;counter1<=count;counter1++)
    {
        for (j=1;j<=counter1;j++)
        {
            for (;i<=count;i++)
            {
                sum=sum+i;
                for(;tri_number<=sum;tri_number++)
                {
                    printf("%d ",tri_counter1mber);
                }
                printf("\n");
            }
        }
    }
}
