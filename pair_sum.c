//Sum fo pair is equal to number that is given by the user. only two numbers.
#include<stdio.h>
void main()
{
	int n,array_pair[10]={1,2,3,4,5,6,7,8,9,10},i,j,sum=0;
	printf("Enter the Sum of Two Numbers:");
	scanf("%d",&n);
	for(i=0;i<11;i++)
	{
		for(j=i+1;j<11;j++)
		{
			if(array_pair[i]+array_pair[j]==n)
			{
				sum=sum+1;
			}
		}
	}
	printf(" Four Pairs are Present that form sum is %d: %d",n,(sum));
	
	
}
