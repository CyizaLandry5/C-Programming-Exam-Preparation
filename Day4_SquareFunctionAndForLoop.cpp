#include <stdio.h>

int square(int y)
{
	return y*y;
}

int main() 
{
   int x;
   for(x=1;x<=10;x++)
   {
   	printf("The square of %d is %d\n",square(x));
   	printf("\n");
   }

    return 0;
    
}

