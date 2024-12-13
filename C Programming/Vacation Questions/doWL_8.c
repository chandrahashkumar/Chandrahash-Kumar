//8. Use a do-while loop to print the first 10 numbers in the Fibonacci sequence.
#include<stdio.h>
int main(){
    int num = 10,t1 = 0,t2 = 1,i = 1,nextTerm;
    printf("Fibonacci sequence\n");
    do{
        printf("%d\n",t1);
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }while(i<=10);
    return 0;
}