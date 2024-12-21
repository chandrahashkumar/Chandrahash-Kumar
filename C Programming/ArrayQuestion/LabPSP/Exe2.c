#include <stdio.h> 
int main() { 
 int n, first = 0, second = 1, next, i; 
 printf("Enter the number of Fibonacci terms to generate: "); 
 scanf("%d", &n); 
 printf("Fibonacci Sequence:\n"); 
 for (i = 1; i <= n; i++) { 
 if (i == 1) { 
 printf("%d ", first); // Print the first term 
 } else if (i == 2) { 
printf("%d ", second); // Print the second term 
 } else { 
 next = first + second; // Calculate the next term 
 printf("%d ", next); 
 first = second; // Update first term 
 second = next; // Update second term 
 } 
 } 
 printf("\n"); 
 return 0; 
} 

/*
INPUT 
    Enter the number of Fibonacci terms to generate: 10
OUTPUT
    Fibonacci Sequence:
    0 1 1 2 3 5 8 13 21 34 
*/