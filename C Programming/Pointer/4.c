#include<stdio.h>

void swap(int *x,int  *y);
int main(){
    int a , b;
    printf("Enter two numbers a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swap a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("After swap a = %d and b = %d\n", a,b);
    return 0;
}

void swap(int *x,int *y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}