// WAP to print all odd number bitween 0 to 100?

#include<stdio.h>
int main(){
    int num = 0;
    while(num<=100){
        if(num%2 != 0){
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}