#include<stdio.h>
main()
{
	int a,b,result;
	/*
	int a=5;
	int b=2;
	int result; 
	a=a+1;
	result=a-b;
	*/
	printf("Enter the first value");
	scanf("%d", & a);
	printf("Enter the second value");
	scanf("%d", & b);
	
	result= a+b;
	
	printf("Result is: %d" ,result);
	return 0;
	
}
