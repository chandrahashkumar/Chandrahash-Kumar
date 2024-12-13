#include<stdio.h>
int sumdigit(){
    int num,sum = 0;
    int orginalNum = num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(num;num !=0;){
        int digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
    printf("%d of sum is %d",orginalNum,sum);
}

int main(){
    sumdigit();
    return 0;
}