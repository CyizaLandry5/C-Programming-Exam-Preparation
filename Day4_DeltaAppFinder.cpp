#include <stdio.h>
#include <math.h> 
// Include the math library for sqrt()

int main() {
    double a, b, c, discriminant, root1, root2;

    // Prompt user to enter coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Check the discriminant and calculate the roots accordingly
    if (discriminant >= 0) {
        // Real roots (either distinct or repeated)
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        if (discriminant == 0) {
            printf("Roots are real and the same: %.2lf\n", root1);
        } else {
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
        }
    } else {
        // Complex roots
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0; 
	// Indicate successful completion
}

