#include<stdio.h>
int main() 
{
    int num1,num2,sum;
    goto second;
    first:
    	printf("\nEnter the value of Num1: ");
    	scanf("%d", &num1);
    goto ending;
	second:
		printf("\nEnter the value of Num2: ");
		scanf("%d", &num2);
	goto first;
	ending:
		sum = num1 + num2;
		printf("%d Is the sum", sum);
    return 0;   
    
}

