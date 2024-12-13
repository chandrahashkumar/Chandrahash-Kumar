#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    if(a == b){
        printf("Both number are same.");
    }
    else {
        printf("Both number are not same.");
    }


    return 0;
}