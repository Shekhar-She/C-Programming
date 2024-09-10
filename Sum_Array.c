#include<stdio.h>
void main()
{
	int sum_arr[5]={1,2,3,4,5};
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+sum_arr[i];
	}
	printf("Sum of Array: %d",sum);
}
