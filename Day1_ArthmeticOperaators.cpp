//Arthmethmetic Operators
#include<stdio.h>
main()
{
	int a,b, sum, division,mult;
	float mod;
	printf("Enter value of a");
	scanf("%d", &a);
	printf("Enter value of b");
	scanf("%d", &b);
	
	sum = a+b;
	division = a/b;
	mult = a*b;
	mod = a%b;
	
	printf("Sum is: %d \n", sum);
	printf("Division is: %d \n" , division);
	printf("Mult is: %d \n", mult);
	printf("Mod is: %f \n", mod);
	return 0;
}
	

