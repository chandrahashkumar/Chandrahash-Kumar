#include <stdio.h> 
int main() { 
 int num, i, isPrime = 1; 
 // Input a number 
 printf("Enter a positive integer: "); 
 scanf("%d", &num); 
 if (num <= 1) { 
 isPrime = 0; // Numbers less than or equal to 1 are not prime 
 } else { 
 for (i = 2; i <= num / 2; i++) { 
 if (num % i == 0) {
    isPrime = 0; // Number is divisible by 'i', so not prime 
 break; 
 } 
 } 
 } 
 // Output result 
 if (isPrime) { 
 printf("%d is a Prime Number.\n", num); 
 } else { 
 printf("%d is Not a Prime Number.\n", num); 
 } 
 return 0; 
} 


/*
INPUT
    Enter a positive integer: 11

OUTPUT
    11 is a Prime Number.
*/