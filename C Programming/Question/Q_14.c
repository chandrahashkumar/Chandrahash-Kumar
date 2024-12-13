// WAP to determine whether a person is eligible for voteing or not using ternary operator?

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age in year : ");
    scanf("%d",&age);

    (age>= 18) ? printf("You are eligible for voteing"):printf("You are not eligible for voteing");


    // char Age = (age>= 18) ? 'Y':'N';
    // if(Age == 'Y'){
    //     printf("You are eligible for voteing");
    // }
    // else{
    //     printf("You are not eligible for voteing");
    // }

    return 0;
}