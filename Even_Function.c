#include<stdio.h>
int even(int x)
{
	if(x%2==0) return x ;
}
void main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",n);
	for(i=1;i<=n;i++){
	int ans=even(n);
	printf("%d",ans);
	}
}
