// WAP to the input number if it is not divigble by 7, So that print 7?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if((num%7 != 0)){
        printf("7\n");

    }
    printf("Thank you!");

    return 0;
}