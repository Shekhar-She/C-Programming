//Find the Maximum Element in Given Array.
#include<stdio.h>
void main()
{
	int max_arr[5]={1,500,200,6,7},max=0,i=0;
	for(i;i<5;i++)
	{
		if( max<max_arr[i])
		{
			max=max_arr[i];
		}
	}
	printf("Biggest Element is : %d",max);
}
