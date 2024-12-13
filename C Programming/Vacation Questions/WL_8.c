// 8. Use a while loop to find the sum of digits of a given number.

#include<stdio.h>
int main(){
    int num,rem = 0,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0){
        int digit= num%10;
        rem = digit;
        sum =sum +rem;
        num/=10;
        
    }printf("Given number, digits sum is : %d",sum);

    return 0;
}