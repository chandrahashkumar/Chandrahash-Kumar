#include <stdio.h> 
#include <math.h> // For sqrt() function 
int main() { 
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: "); 
    scanf("%lf %lf %lf", &a, &b, &c); 

    // Check if a is zero to avoid division by zero
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1; // Exit with error code
    }
    discriminant = (b * b) - (4 * a * c); 
    switch (discriminant >= 0) { 
    case 1: // Real roots exist 
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a); 
    printf("Roots are real: %.2lf and %.2lf\n", root1, root2); 
    break; 
    case 0: // No real roots 
    printf("No real roots possible.\n"); 
    break; 
    } 
 return 0; 
} 

/*************************************************
 INPUT 
    Enter coefficients a, b, c: 1 -2 1

OUTPUT
    Roots are real: 1.00 and 1.00

*************************************************/
