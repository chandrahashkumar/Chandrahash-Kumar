// 5. Write a for loop that calculates the factorial of a number.

#include<stdio.h>

int main(){
    int num; 
    int long long fact = 1;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        fact *=i; 
    }
    printf("Factorile of %d is %d",num,fact);
    return 0;
}