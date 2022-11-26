#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,f,l;
	printf("Enter any number to find sum of first and last digit=");
	scanf("%d",&n);
	
	l=n%10;
	f=n;
	
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	sum=f+l;
	printf("sum of first and last digit=%d",sum);
}