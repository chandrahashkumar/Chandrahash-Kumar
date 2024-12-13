// 4. Using a do-while loop, print all even numbers between 1 and 100.

#include<stdio.h>
int main(){
    int num = 1;
    do{
        if(num % 2 == 0){
            printf("%d\n",num);
        }
        num++;
    }while(num<=100);
    return 0;
}