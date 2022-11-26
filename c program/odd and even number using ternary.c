#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter the number=");
	scanf("%d",&n);
	
	(n%2==0) ?
	(printf("%d is even number\n",n)):
	(printf("%d is odd number\n",n));
}