//WAP to copy elements of array to another array in reverse order.
#include<stdio.h>
void main()
{
	int array1[5]={1,2,3,4,5}, array2[5],i;
	for (i=0;i<5;i++)
	{
		array2[i]=array1[4-i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d",array2[i]);
	}
	
	
}
