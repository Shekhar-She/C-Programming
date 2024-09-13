//Search An Elements in Given Array.
#include<stdio.h>
void main()
{
	int n,array[10]={1,2,3,4,5,6,7,8,9,10},i;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(array[i]==n)
		{
			printf("Your Element is Found Index is : %d \n ",i);
			break;
		}
		else
		{
			printf("Not Found:");
		}
		
	}
	
}
