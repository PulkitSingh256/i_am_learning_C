#include <stdio.h>
#include <math.h>

int a,b,c,d,e,m,i,x,row;

int main()
{
	printf("Enter The Number of rows for Pascal triangle: ");
	scanf("%d",&row);
	for (a=0;a<=row;a++)
	{
		for (b=row-a;b>=1;b--)
		{
			printf(" ");
		}
		for (c=0;c<=a;c++)
		{	
			e = a-c;
			d = factorial(a)/(factorial(c)*factorial(e));
			printf("%d ",d);
		}printf("\n");
	}
	
}

int factorial(x)
{
	
	m=1;
	for (i=1;i<=x;i++)
	{
		m=m*i;
	}
	return m;
}