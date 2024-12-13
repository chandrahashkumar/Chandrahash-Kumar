// WAP to find a citizen is eligible to voteing?

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age in year : ");
    scanf("%d",&age);
    if(age >= 18){
        printf("You are eligible to voteing.\n");
    }
    printf("Thank you!");

    return 0;
}