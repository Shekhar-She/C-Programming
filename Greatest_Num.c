//Print elements greater than x.X is a number of user.
#include<stdio.h>
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10},x,i;
	printf("Enter the Value of X: ");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(arr[i]<x)
		{
			continue;
		}
		else
		{
			printf("%d \n",arr[i]);
		}
		
	}
}
