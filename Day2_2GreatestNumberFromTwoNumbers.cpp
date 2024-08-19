#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Enter value of N1, N2 and N3 ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	/*printf("Enter value of N2 ");
	scanf("%d", &n2);
	printf("Enter value of N3 ");
	scanf("%d", &n3);*/
	
	if(n1>n2&&n1>n3)
		printf("N1 is the greatest");
		
	else if(n2>n1&&n2>n3)
		printf("N2 is the greatest");
			
	else if (n3>n1&&n3>n2)
		printf("N3 is the greatest ");
			
	return 0;

}
