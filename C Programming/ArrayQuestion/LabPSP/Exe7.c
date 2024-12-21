#include <stdio.h> 
#include <ctype.h> // Include for character checking functions 
int main() { char ch;
  
 // Input the character 
 printf("Enter a character: "); 
 scanf("%c", &ch); 
 // Check if the character is alphabetic 
 if (isalpha(ch)) { 
 printf("%c is an Alphabetic Character.\n", ch); 
 } 
 // Check if the character is numeric 
else if (isdigit(ch)) { 
 printf("%c is a Numeric Character.\n", ch); 
 } 
 // Check if the character is a special character 
 else { 
 printf("%c is a Special Character.\n", ch); 
 } 
 return 0; 
} 

/*
INPUT
    Enter a character: 8
OUTPUT
    8 is a Numeric Character.
*/