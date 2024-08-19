#include <stdio.h>

int main(void) {
    char name[45];
    int mark1, mark2;
    int sum, average;

    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your marks: ");
    scanf("%d%d", &mark1, &mark2);

    // Calculating sum and average
    sum = mark1 + mark2;
    average = sum / 2;

    if (average >= 70 && average <= 100) {
        printf("%s, your Grade is A\n", name);
    }
    else if (average >= 60 && average < 70) {
        printf("%s, your Grade is B. Average: %d\n", name, average);
    }
    else if (average >= 50 && average < 60) {
        printf("%s, your Grade is C\n", name);
    }
    else if (average >= 40 && average < 50) {
        printf("%s, your Grade is D. Average: %d\n", name, average);
    }
    else if (average >= 0 && average < 40) {
        printf("%s, your Grade is E\n", name);
    }
    else {
        printf("Invalid Marks\n");
    }
    
    return 0;
}

