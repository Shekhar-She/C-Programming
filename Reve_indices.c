//Reverse Array but a given indices. indices 1 to 7; 
#include<stdio.h>
void main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int i=1,j=7,temp;
	while(i<=j)
	{
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
		i++;
		j--;
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d \n ",array[i]);
	}
	
	
}
