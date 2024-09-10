#include<stdio.h>
void main(){
    int array[10];
int i;
    for( i=0;i<10;i++)
    {
        printf("Enter the Number:%d ",i+1);
        scanf("%d",&array[i]);
    }
    printf("::::::::::::::Your Reverse Number is ::::::::::::::");
    for (i=10;i>0;i--)
    {
        printf(" \n Reverse Number is :: %d",array[i]);
    }
}
