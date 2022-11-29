#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count='A';
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf(" ");
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
	
}