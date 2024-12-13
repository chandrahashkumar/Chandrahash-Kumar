/* 6. Write a program using a for loop to print all numbers divisible by 3 
between 1 and 50. 
*/
#include<stdio.h>
int main(){
    int num = 50;
    for(int i = 1;i<=num;i++){
        if(i%3 == 0){
            printf("%d\n",i);
        }
    }
}