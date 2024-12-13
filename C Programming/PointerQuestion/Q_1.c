// Pass by value

#include<stdio.h>

void change(int);
int main(){
    int a = 30;
    printf("Value before %d\n",a);
    change(a);
    printf("Value after %d\n",a);

    return 0;
}

void change(int a){
    a = 50;
    printf("Value inside function = %d\n",a);
}