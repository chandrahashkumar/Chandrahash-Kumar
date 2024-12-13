/*8. Write a program using a for loop to calculate the sum of digits of a 
number.
*/
#include<stdio.h>
int main(){
    int num,rem,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(num;num!=0;){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }printf("Digit sum is %d",sum);
    return 0;
}