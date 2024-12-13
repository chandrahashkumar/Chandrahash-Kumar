#include<stdio.h>
int main(){
    int num;
    long long fect = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        fect = fect*i;
    }
    printf("Fectorial of %d is %lld",num,fect);
    return 0;
}