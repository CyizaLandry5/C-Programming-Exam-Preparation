#include<stdio.h>

int main()
{
    char name[45];
    int mark1, mark2;
    int sum, average;
    int number;

    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your number: ");
    scanf("%d", &number);
    
    printf("Enter your marks \n of two modules: ");
    scanf("%d%d", &mark1, &mark2);
    
    // Calculating sum and average
    sum = mark1 + mark2;
    average = sum / 2;
    
    
    printf("\n\nStudent Name: %s\n", name);
	printf("Student Number: %d \n", number);
    printf("Student Marks: %d, %d\n", mark1, mark2);
    printf("Sum of the Marks: %d\n", sum);
    printf("Average of the Marks: %d\n", average);
    
    
    if (average >= 70 && average <= 100)
        printf("Grade A\n");
    else if (average >= 60 && average < 70)
        printf("Grade B\n");
    else if (average >= 50 && average < 60)
        printf("Grade C\n");
    else if (average >= 40 && average < 50)
        printf("Grade D\n");
    else if (average >= 0 && average < 40)
        printf("Grade E\n");
    else 
        printf("Invalid Marks\n");
    
    return 0;
}

