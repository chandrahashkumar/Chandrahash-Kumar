// WAP to print reminder if the input number not divisible by 7?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%7 != 0){
        int divi = num%7;
        printf("%d / 7 is reminder is %d\n",num,divi);

    }
    printf("Thank you!");

    return 0;
}