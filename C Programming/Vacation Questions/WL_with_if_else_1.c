/* 11. Write a program that uses a while loop and an if-else to print "Odd" 
or "Even" for numbers between 1 and 10.
*/

#include<stdio.h>

int main(){
    int num = 1;
    while(num<=10){
        if(num%2 ==0){
            printf("%d is Even Number.\n",num);
        }
        else{
            printf("%d is Odd Number.\n",num);
        }
        num++;
    }
    return 0;
}