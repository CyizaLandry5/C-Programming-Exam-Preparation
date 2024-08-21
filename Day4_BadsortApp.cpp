#include<stdio.h>
void badsort (int a, int b)
{
	int temp;
	if (a>b)
	{
	printf("%d %d \n", b , a );
	}
	else
	{
	printf("%d %d\n", a , b);
	}	
}

main()
{
int x = 3, y = 5;
badsort(10,9);
badsort(y, x+4);
return 0;
}
