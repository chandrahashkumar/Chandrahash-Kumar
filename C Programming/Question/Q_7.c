// WAP to check a citizen is eligible for voteing or not?

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>= 18){
        printf("You are eligible for voteing\n");
    }
    else {
        printf("You are not eligible for voteing\n");
    }
    printf("Thank you!");

    return 0;
}