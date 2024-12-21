#include <stdio.h> 
int main() { 
 int num, reversed = 0, remainder, original; 
 // Input the number 
 printf("Enter an integer: "); 
 scanf("%d", &num); 
 original = num; // Store the original number for comparison 
 // Reverse the number 
 while (num != 0) { 
 remainder = num % 10; // Get the last digit
 reversed = reversed * 10 + remainder; // Append it to the reversed number 
 num /= 10; // Remove the last digit 
 } 
 // Check if the number is a palindrome 
 if (original == reversed) { 
 printf("%d is a Palindrome Number.\n", original); 
 } else { 
 printf("%d is Not a Palindrome Number.\n", original); 
 } 
 return 0; 
} 

/*
INPUT
    Enter an integer: 151
OUTPUT
    151 is a Palindrome Number.
*/