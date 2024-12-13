// 3. Write a do-while loop that calculates the sum of the first 50 natural numbers. 

#include<stdio.h>
int main(){
    int num = 1,sum =0;
    do{
        sum +=num;
        num++;
    }while(num<=50);
    printf("The first 50 natural numbers sum is %d",sum);
    return 0;
}
