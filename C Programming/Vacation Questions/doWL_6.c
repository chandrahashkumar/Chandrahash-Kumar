//6. Create a do-while loop to find the factorial of a number entered by the user.
#include<stdio.h>
int main(){
    int num;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i = 1;
    do{
        fact = fact*i;
        i++;
    }while(i<=num);
    printf("Factorial of %d is %lld",num,fact);
    return 0;
}