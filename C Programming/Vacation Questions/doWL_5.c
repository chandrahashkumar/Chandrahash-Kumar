// 5. Write a program using a do-while loop to reverse a given number. 

#include<stdio.h>
int main(){
    int num,rem,rev = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int cnum = num;
    do{
        rem = num%10;
        rev =rev *10 + rem;
        num/=10;
    }while(num!=0);
    printf("Reverse of %d is %d",cnum,rev);
    return 0;
}
