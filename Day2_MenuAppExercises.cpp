#include<stdio.h>
main()
{
	int module_number, oopprice=5Nu0000,oop ,go_tovar, money=0;

	cyiza:
	printf("\t\t UoK MODULES MENU\n \n");
	printf("SELECT ANY MODULE YOU WANT TO LEARN FROM THE FOLLOWING LIST:\n\n");
	printf("1. PROGRAMMING IN C Language        = 50k\n");
	printf("2. PROBABILITY AND STATISTICS       = 40k\n");
	printf("3. PYTHON FUNDAMENTALS              = 45k\n");
	printf("4. OOP USING JAVA                   = 55k\n\n");
	
	printf("ENTER ANY MODULE NUMBER YOU WANT TO LEARN ");
	scanf("%d",&module_number);
	
	switch (module_number)
	{
		case 1:
			printf("\n\nYOU HAVE CHOOSEN TO STUDY PROGRAMMING IN C Language\n\n");
			
			printf("Enter amount of money you want to pay");
			scanf("%", &oopprice);
			
			//printf("");
		
			if (oopprice>50000)
				printf("You can not pay money above 50k");
			else if (oopprice==50000)
				printf("Module paid successfully");
				
		break;
		
		case 2:
			printf("\n\nYOU HAVE CHOOSEN TO STUDY PROBABILITY AND STATISTICS\n\n");
		break;
		
		case 3:
			printf("\n\nYOU HAVE CHOOSEN TO STUDY PYTHON FUNDAMENTALS\n\n");
		break;
		
		case 4:
			printf("\n\nYOU HAVE CHOOSEN TO STUDY OOP USING JAVA\n\n");
		break;
	}
}
