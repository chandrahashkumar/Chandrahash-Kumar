#include <stdio.h> 
int main() { 
 char str[100], reversed[100]; 
 int i, length = 0; 
 // Input the string 
 printf("Enter a string: "); 
 scanf("%s", str); // Note: scanf does not handle spaces in strings 
 // Calculate the length of the string 
 while (str[length] != '\0') { 
 length++; 
 } 
 // Reverse the string 
 for (i = 0; i < length; i++) { 
 reversed[i] = str[length - i - 1]; 
 }
 reversed[length] = '\0'; // Add null terminator to the reversed string 
 // Display the reversed string 
 printf("Reversed string: %s\n", reversed); 
 return 0; 
} 
