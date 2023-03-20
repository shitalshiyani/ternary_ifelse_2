#include<stdio.h>


main()
{
	int a,b,c,d;
	printf("Enter Value of A=");
	scanf("%d",&a);
	printf("Enter Value of B=");
	scanf("%d",&b);
	printf("Enter Value of C=");
	scanf("%d",&c);
	printf("Enter Value of D=");
	scanf("%d",&d);
	
    (a>b)?(a>c)?(a>d)?printf("A is Max"):printf("D is Max"):(c>d)?printf("C is Max"):printf("D is Max")
	     :(b>c)?(b>d)?printf("B is Max"):printf("D is Max"):(c>d)?printf("C is Max"):printf("D is Max");
}
