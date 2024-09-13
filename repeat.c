// Duplicate Elements.
#include<stdio.h>
void main()
{
	int array[10]={1,2,3,4,10,6,7,8,9,10},i,j;
		for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(array[i]==array[j])
			{
			printf("Duplicate Element is %d", array[i]);
			}
			
		}
	}

}
