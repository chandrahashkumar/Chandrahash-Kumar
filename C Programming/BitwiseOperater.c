#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Bitwise AND : %d\n",a&b);
    printf("Bitwise OR : %d\n",a|b);
    printf("Bitwise XOR : %d\n",a^b);
    printf("Left shift : %d\n",a<<1);
    printf("Right shift : %d",a>>1);

    return 0;
}