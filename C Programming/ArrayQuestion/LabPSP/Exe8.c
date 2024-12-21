#include <stdio.h> 
int main() { 
 int n, i; 
 int even_sum = 0, odd_sum = 0; 
 // Input the number of elements in the array 
 printf("Enter the number of elements: "); 
 scanf("%d", &n); 
 int arr[n]; // Declare an array of size n 
 // Input array elements
 printf("Enter %d elements: \n", n); 
 for (i = 0; i < n; i++) { 
 scanf("%d", &arr[i]); 
 } 
 // Compute the sum of even and odd numbers 
 for (i = 0; i < n; i++) { 
 if (arr[i] % 2 == 0) { 
 even_sum += arr[i]; // Add to even sum if the number is even 
 } else { 
 odd_sum += arr[i]; // Add to odd sum if the number is odd 
 } 
 } 
 // Display the results 
 printf("Sum of Even Numbers: %d\n", even_sum); 
 printf("Sum of Odd Numbers: %d\n", odd_sum); 
 return 0; 
} 

/*
INPUT
    Enter the number of elements: 5
    Enter 5 elements: 
    7 10 12 5 3
OUTPUT
    Sum of Even Numbers: 22
    Sum of Odd Numbers: 15
*/