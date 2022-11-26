#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	printf("Enter the number whose factorial you want=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is=%d",n,fact);
}