/* 6. Write a program that uses a while loop and prints all numbers 
divisible by 5 between 1 and 50. 
*/

#include<stdio.h>
int main(){
    int num = 1;
    while(num<=50){
        if(num%5 ==0){
        printf("%d\n",num);
        }
        num++;
    }

    return 0;
}