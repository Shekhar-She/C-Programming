//Sum Of Array Elements .
#include<stdio.h>
void main()
{
	int num_array;
	printf("Enter the Elements of Array:");
	scanf("%d",&num_array);
	int sum_arr[num_array];
	int sum=0,i=0;
	for(i;i<num_array;i++)
	{
		printf("Enter Elements %d : ",i+1);
		scanf("%d",&sum_arr[i]);
		
	}
	printf("Sum of Array Elements is:");
	for(i;i<num_array;i++)
	{
		sum=sum+sum_arr[i];
	}
	printf("%d",sum);
}
