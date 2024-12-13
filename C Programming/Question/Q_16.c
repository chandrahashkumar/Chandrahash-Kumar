/** WAP to check if a number is positive or negatige if number is positive 
    so, that print number is even or add number using nested if-else?
**/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0){
        printf("%d is a positive number.\n",num);
        if(num % 2 == 0){
        
            printf("%d is a even number.",num);
        }
        else {
            printf("%d is a odd number.",num);
        }
    }
    else {
        printf("%d is a negative number.",num);
    }
    return 0;
}