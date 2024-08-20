#include<stdio.h>
#include<math.h>

main()
{
	int a,b;
	printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter number: ");
    scanf("%d",&b);
    // a power b
    int r=pow(a,b);
	printf("rsult=%d",r);
}
