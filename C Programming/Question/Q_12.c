// WAP to assign different ticket prices base on age?

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age in year : ");
    scanf("%d",&age);
    if(age<=13){
        printf("Your ticket price is free\n");
    }
    else if(age<=25){
        printf("Your ticket price is $ 2\n");
    }
    else if(age<60){
        printf("Your ticket price is $ 4\n");
    }
    else if(age>=60){
        printf("Your ticket price is $ 1.50\n");
    }
    else {
        printf("Your are enter invalide age\n");
    }
    printf("Thank You!");

    return 0;
}