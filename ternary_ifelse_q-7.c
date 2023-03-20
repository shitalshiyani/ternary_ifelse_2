#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("Enter Value of A=");
	scanf("%d",&a);
	printf("Enter Value of B=");
	scanf("%d",&b);
	printf("Enter Value of C=");
	scanf("%d",&c);
	printf("Enter Value of D=");
	scanf("%d",&d);
	printf("Enter Value of E=");
	scanf("%d",&e);
	
	    
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is Max"):printf("E is Max"):(d>e)?printf("D is Max"):printf("E is Max"):(c>d)?(c>e)?printf("C is Max"):printf("E is Max"):(d>e)?printf("D is Max"):printf("E is Max")
		 :(b>c)?(b>d)?(b>e)?printf("B is Max"):printf("E is Max"):(d>e)?printf("D is Max"):printf("E is Max"):(c>d)?(c>e)?printf("C is Max"):printf("E is Max"):(d>e)?printf("D is Max"):printf("E is Max");
}
