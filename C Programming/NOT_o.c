#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Bitwise NOT of %d is: %d",num,~num);

    return 0;

}