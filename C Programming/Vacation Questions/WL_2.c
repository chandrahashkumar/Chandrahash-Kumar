 // 2. Create a while loop that prints the even numbers between 1 and 20. 

#include<stdio.h>
int main(){
    int i = 1;
    while(i<=20){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }
    

    return 0;
}