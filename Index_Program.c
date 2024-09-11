//Odd index elements is multiple of 2 rest multiple of 10;
#include<stdio.h>
void main()
{
	int array_ind[10]={1,2,3,4,5,6,7,8,9,10},i,mul;
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			mul=array_ind[i]*2;
			printf("%d \n ",mul);
		}
		else
		{
			mul=array_ind[i]*10;
			printf("%d \n ",mul);
		}
	}
}
