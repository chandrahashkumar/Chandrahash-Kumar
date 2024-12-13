/* 15. Create a while loop that takes a number input from the user and 
checks if it’s prime using if-else conditions.
*/

#include<stdio.h>
int main(){
    int num,fact = 0,i = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=num){
        if(num%i ==0){
            fact++;
        }
        i++;
    }
    if(fact == 2){
        printf("%d is prime number.",num);
    }else{
        printf("%d is not prime number.",num);
    }

    return 0;
}