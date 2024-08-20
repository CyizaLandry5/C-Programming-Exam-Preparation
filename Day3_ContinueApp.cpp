#include<stdio.h>
int main() {
    int num;
    for(num =1 ; num <= 10 ; num ++)
    {
    	if (num ==5)
    	{
    		continue;
			
		}
    	printf("%d\n", num);	
	}
	printf("\nBroke out of loop at x ==%d\n", num);
    return 0;   
}

