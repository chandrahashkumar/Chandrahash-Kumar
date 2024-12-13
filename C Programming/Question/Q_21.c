// WAP to print all even number 0 to 100?

/*
The fact that zero is even, together with the fact that even and odd numbers alternate, 
is enough to determine the parity of every other natural number.This idea can be formalized
into a recursive definition of the set of even natural numbers:
0 is even.
*/

#include<stdio.h>
int main(){
    int num = 0;
    while(num<=100){
        if(num%2==0){
            printf("%d\n",num);
        } 
        num++;
    }  
    return 0;
}