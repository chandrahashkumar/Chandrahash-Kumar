// WAP to find input number is divisible by 2 and 7both or not?

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%2 == 0 && num%7 ==0){
        printf("%d is divisible by 2 and 7",num);
    }
    else {
        printf("%d is not divisible by 2 and 7",num);
    }
    return 0;
}