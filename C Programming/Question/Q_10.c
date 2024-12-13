// WAP to check a input number is divisible by both 2 and 3 and olny 2 or 3 and print appropriate message?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the positive number : ");
    scanf("%d",&num);

    if(num%2 == 0 && num%3 == 0){
        printf("%d is divisible by 2 and 3\n",num);
    }
    else if(num%2 == 0){
        printf("%d is divisible by only 2\n",num);
    }
    else if(num%3 == 0){
        printf("%d is divisible by only 3\n",num);
    }
    else {
        printf("You are enter invalide number\n");
    }
    printf("Thank you");

    return 0;
}