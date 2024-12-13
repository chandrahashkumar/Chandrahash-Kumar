// WAP to check whether input is divisible by 3 or not using ternary operator?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the positive number : ");
    scanf("%d",&num);

    (num%3 ==0) ? printf("%d is divisible by 3",num) : printf("%d is not divisible by 3",num);

    // char re = (num%3 ==0) ? 'Y':'N';
    // if(re == 'Y'){
    //     printf("%d is divisible by 3",num);
    // }
    // else {
    //     printf("%d is not divisible by 3",num);
    // }


    return 0;
}