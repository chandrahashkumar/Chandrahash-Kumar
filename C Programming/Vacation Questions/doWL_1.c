// 1. Write a program using a do-while loop to print numbers from 1 to 10.

#include<stdio.h>
int main(){
    int num=1 ;
    do{
        printf("%d\n",num);
        num++;
    }while(num<=10);
    return 0;
}