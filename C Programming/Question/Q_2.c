// WAP to check a input number is even number?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("You are enter an even number\n");
    }
    printf("Thank you!");

    return 0;
}