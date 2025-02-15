/*
a. Write a program in C to find the maximum number
between two numbers using a pointer.
*/


#include<stdio.h>
int main(){
    int num1 ,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    int *_num1 = &num1;
    int *_num2 = &num2
;    if(*_num1>*_num2){

        printf("%d",*_num1);
    }
    else{
        printf("%d",*_num2);
    }
    return 0;
}