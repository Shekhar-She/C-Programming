//Print difference b/w odd indexed and even indexed elements
#include<stdio.h>
void main()
{
	printf("Enter the number of Elements:");
	int n;
	scanf("%d",&n);
	int array_num[n],i,sum=0;//12345
	for(i=0;i<n-1;i++)
	{
		printf("Enter the Elements %d :",i+1);
		scanf("%d",&array_num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(i%2==0)
		{
			sum=sum+array_num[i];
			printf("The Sum of Even Indicies is %d \n: ",sum);
			
		}
		else
		{
			sum=sum+array_num[i];
			printf("The sum of Odd Indicies is %d\n ", sum);
			
		}
		
		
	}
}
