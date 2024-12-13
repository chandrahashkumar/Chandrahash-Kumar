// WAP to check whether is input number is even or odd number using ternary operator?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    (num % 2 == 0) ? printf("%d number is even number.",num):printf("%d number is odd number.",num);

    return 0;
}