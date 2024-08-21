#include<stdio.h>
main()
{
	int n[10]={0,9,8,7,6,5,4,3,2,1},i;
	
	
//	for(i=0;i<=9;i++)
//		n[i] =  0;	
//		printf("%s%13s\n", "Elemet","Value");
		
		
	for (i = 0 ; i <= 9 ; i++)
		printf("%7d %13d\n", i, n[i]);
		
	return 0;
}
