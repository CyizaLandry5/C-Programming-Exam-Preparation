#include<stdio.h>
//#include<conio.h>
main()
{
	int number,mult;
	printf("Enter a number:");
	scanf("%d",&number);
	
	for(mult=0; mult<=12; mult++)
	{
		printf("%d*%d=%d\n",number,mult,number*mult);
		
	}
//	getch();
	return 0;
}
