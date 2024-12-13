// 3. Use a while loop to find the sum of the first 100 natural numbers.

#include<stdio.h>
int main(){
    int num = 1, sum = 0;
    while(num<= 100){
        sum +=num;
        num++;
    }
    printf("The sum of the first 100 natural number is : %d",sum);

    return 0;
}
