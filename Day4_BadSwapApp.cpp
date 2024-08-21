#include<stdio.h>
void badSwap (int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("%d %d \n", a,b);
	
}

main()
{
int x = 3, y = 5;

printf("%d %d \n" ,x,y);

badSwap(x,y);

printf("%d %d \n", x,y);
return 0;
}
