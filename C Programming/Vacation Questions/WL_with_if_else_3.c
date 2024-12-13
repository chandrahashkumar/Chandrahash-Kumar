/* 13. Write a program using a while loop and if-else to count how many 
numbers between 1 and 100 are divisible by both 3 and 5.
*/

#include<stdio.h>

int main(){
    int num = 1,count = 0;
    while(num<= 100){
        if(num%3 == 0 && num%5 == 0){
            count++;
        }
        num++;
    }
    printf("There are %d numbers bitween 1 to 100 that are divisible both 3 and 5.",count);

    return 0;
}

