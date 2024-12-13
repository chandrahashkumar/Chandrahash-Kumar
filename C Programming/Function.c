#include<stdio.h>

void sum(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    printf("Sum = %d",(num1+num2));

}

int main(){
    sum();
    return 0;
}