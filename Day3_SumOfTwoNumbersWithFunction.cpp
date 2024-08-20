#include <stdio.h>
//Function with a return type must have *int different from void
int summm(int a, int b) {
    return a + b;
}

 main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Call the sum function and print the result
    printf("Sum of %d and %d is %d\n", num1, num2, summm(num1,num2));
}

