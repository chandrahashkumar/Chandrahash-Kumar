// 4. Write a program using a while loop to reverse a given number.

#include<stdio.h>
int main(){
    int num, rem, rev = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }printf("Reverse number is : %d",rev);

    return 0;
}