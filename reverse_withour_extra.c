#include<stdio.h>
void main()
{
	int array[5]={1,2,3,4,5},i=0,j=4,temp;
	while(i<=j)
	{
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<5;i++)
	{
	   printf("%d \n ",array[i]);
	}
}
