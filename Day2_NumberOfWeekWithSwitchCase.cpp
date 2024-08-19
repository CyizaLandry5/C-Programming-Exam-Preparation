//Days of weekProgram

#include<stdio.h>
main()
{
	int choice;
	printf("Enter your number from 1-7");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Monday");
		break;
		case 2:
			printf("Tuesday");
		break;
		case 3:
			printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
		break;
		case 5:
			printf("Vespers");
		break;
		case 6:
			printf("Sabbath");
		break;
		case 7:
			printf("Sunday");
		break;
		default:
			printf("Wrong choice is entered!");
		
	}
}
