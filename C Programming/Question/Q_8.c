// WAP to take two input from user and print whih is grater?

#include<stdio.h>
int main(){
    int num1 ,num2 ;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d graten the %d\n",num1,num2);
    }
    else{
        printf("%d less than %d\n",num1,num2);
    }
    printf("Thank you!");

    return 0;
}