// WAP to check a input number is -ve or +ve?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num>0){
        printf("You are enter a positive number\n");
    }
    else {
        printf("You are enter a negative number\n");
    }
    printf("Thank you!");

    return 0;
}