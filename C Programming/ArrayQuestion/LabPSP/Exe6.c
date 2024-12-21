#include <stdio.h> 
// Function to calculate factorial 
int factorial(int n) { 
 int fact = 1; 
 for (int i = 1; i <= n; i++) { 
 fact *= i; // Multiply fact with the current number i 
 } 
 return fact; // Return the factorial 
}
int main() { 
 int num; 
 // Input the number 
 printf("Enter a positive integer: "); 
 scanf("%d", &num); 
 // Check if the number is non-negative 
 if (num < 0) { 
 printf("Factorial is not defined for negative numbers.\n"); 
 } else { 
 // Call the factorial function and display the result 
 printf("Factorial of %d is %d\n", num, factorial(num)); 
 } 
 return 0; 
} 


/*
INPUT 
    Enter a positive integer: 6
OUTPUT
    Factorial of 6 is 720
*/