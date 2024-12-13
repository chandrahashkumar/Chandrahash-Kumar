// WAP to check a input number is +ve, -ve and 0?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0){
        printf("You are enter number is a positive number\n");
    }
    else if(num<0){
        printf("You are enter number is  a negative number\n");
    }
    else if(num == 0){
        printf("You are enter number is 0\n");
    }
    printf("Thank you!");

    return 0;
}