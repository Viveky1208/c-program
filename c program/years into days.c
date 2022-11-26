#include<stdio.h>
#include<conio.h>
void main()
{
	int days,year,x;
	printf("total number of days=");
	scanf("%d",&days);
	year=days/365;
	x=days%365;
	printf("years=%d \n days=%d",year,days);
}