#include<stdio.h>

#define SIZE 12
main()
{
	int n[SIZE]={0,9,8,7,6,5,4,3,2,1,2,3};
	int i, total = 0;
	
		
		
	for (i = 0 ; i <= SIZE - 1 ; i++)
	total += n[i];

	printf("Total of array element values is %d\n",total);
		
	return 0;
}
