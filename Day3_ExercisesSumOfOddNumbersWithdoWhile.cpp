#include<stdio.h>

int main() {
    int num = 1;    
    int sum = 0;   

    do 
	{
        sum += num;  
        num += 2;    
    } 
	while(num <= 100);  
    
    printf("Sum of odd numbers using do-while loop: %d\n", sum);  
    return 0;   
}

