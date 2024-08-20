#include<stdio.h>

int main()
{
    int num = 1;
    int sum = 0;
    while(num <= 20)
	{  
        sum += num;
        num += 2;
    }
    printf("Sum of odd numbers using while loop: %d\n", sum);
    return 0;
}

