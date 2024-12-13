/* 11. Write a for loop that prints whether numbers from 1 to 20 are odd or 
even using if-else conditions. 
*/
#include<stdio.h>
int main(){
    for(int num = 1, i = 1;i<=20;i++){
        if(num%2!=0){
            printf("%d is odd number.\n",num);    
        }
        else{
            printf("%d is even number.\n",num);    
        }
        num++;
    }
    return 0;
}