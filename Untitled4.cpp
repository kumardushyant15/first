#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter any number");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf(" factorial of %d is:=%d",n,fact);
	return 0;
}


