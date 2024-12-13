//7. Write a do-while loop that calculates the power of 2 (i.e., 2^n) up to n=10.
#include<stdio.h>
int main(){
    int num = 0;
    long long power = 1;
    do{
        printf("2^%d= %d\n",num,power);
        num++;
        power *=2;
    }while(num<=10);

    return 0;
}