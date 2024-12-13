/* 7. Create a for loop to find the reverse of a number entered by the 
user. 
*/

#include<stdio.h>

int main(){
    int num, rem,rev = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(num;num!=0;){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    printf("Reverse is %d",rev);
    return 0;
}