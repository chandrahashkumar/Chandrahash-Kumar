// 5. Using a while loop, find the factorial of a given number. 

#include<stdio.h>
int main(){
int num,fact = 1,i = 1;
printf("Enter the number : ");
scanf("%d",&num);
while(i<=num){
    fact= fact*i;
    i++ ;
}printf("%d",fact);
    return 0;
}