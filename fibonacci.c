#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,i,n;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	printf("\n %d %d",n1,n2);
	for(i=2;i<n;i++)
	{
		n3=n1+n2;
		printf("\t %d",n3);
		n1=n2;
		n2=n3;
	}
}