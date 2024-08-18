#include<stdio.h>
#include<conio.h>
main()	
{
	
	int client_choice,selected_quantity;
	int a,net=0;
	Restart:
	printf("\t\t\t MENU\n\n");
	printf("\n1. logement+Dinner");
	printf("\n2. Fresh-Juice");
	printf("\n------Enter a number:Select your choice");
	printf("\n-------------------------Enter a choice");
	
	//
	scanf("%d",&client_choice);
	switch(client_choice)
		{	//
			case 1:
			printf("\n\t You selected LODGE");
			printf("\n\t Don't worry about today's dinner");
			printf("\n\t How many days will you spend?");
			scanf("%d", &selected_quantity);	
			printf("\n\t Total Ammount%d",(selected_quantity*10000));
			net=net + (selected_quantity*10000);
			break;
			//
			case 2:
			printf("\n\t You selected Juice");
			printf("\n\t Don't worry it is fresh");
			printf("\n\t How many Juices you will take?");
			scanf("%d", &selected_quantity);	
			printf("\n\t Total Ammount%d",(selected_quantity*10000));
			net=net + (selected_quantity*10000);
			break;
			
			//
			default:
				printf("\n Please try agan, right choice");
			break;
			
			
		}	
			printf("\n Press 1 to continue \t Press 0 to exit");
			scanf("%d", &a);
			if (a==1)
				{
					goto Restart;
				}
			printf("\n Grand Total:%d ", net);
			printf("\n Welcome back again! ");
			
			return 0;	
			getch();
	//printf("1. cofee");	
}
