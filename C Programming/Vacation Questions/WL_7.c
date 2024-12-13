/* 7. Create a program using a while loop to find the largest digit in a 
number. */

#include <stdio.h>

int main(){
    int num,largestdigit = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!= 0){
        int digit = num %10;
        if(digit>largestdigit){
            largestdigit = digit;
        }
        num /=10;
    }printf("Given number of largest digit is : %d",largestdigit);
}