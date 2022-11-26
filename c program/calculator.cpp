#include<stdio.h>
main()
{
	int a,b,ans,n;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	
	printf("\nSelect the operation to perform:\n\n");
	printf("\n1.Addition \n2.Subtration \n3.Multiplication \n4.Division \n\n");	
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			ans=a+b;
			printf("\nAddition=%d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nSubtration=%d",ans);
			break;
		case 3:
		    ans=a*b;
		    printf("\nMultiplication=%d",ans);
		    break;
		case 4:
			ans=a%b;
			printf("\nDivision=%d",ans);
			break;
		default:
			printf("\nINVALID OUTPUT");
		
	}
}