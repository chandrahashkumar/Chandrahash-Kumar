#include<stdio.h>
int main(){
    int num = 1;
    while(num<=20){
        if(num %3 ==0){
            num++;
            continue;
        }
        if(num == 17){
            break;
        }printf("%d\n",num);
        num++;   
    }       
    return 0;
}