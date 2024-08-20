#include<stdio.h>
main()
{
	int value;
	for(value=100; value>=0; value--)
	{
		if(value%2==0){
		
		printf("The even numbers are %d\n" ,value);
		}
//		else if(value%2!=0)
//		{
//					printf("The odd numbers are %d\n" ,value);
//
//		}
		
		
	}
	return 0;
}
