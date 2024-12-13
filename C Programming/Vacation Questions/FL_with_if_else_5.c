/* 15. Create a program that uses a for loop and if-else to check if a number 
entered by the user is a palindrome.
*/

#include<stdio.h>
int main(){
    int num,rem, rev = 0,orgNum;
    printf("Enter a number: ");
    scanf("%d",&num);
    orgNum = num;
    for(;num!=0;num/=10){
        rem = num%10;
        rev = rev*10+rem;

    }
    if(rev == orgNum){
        printf("%d is palindrome.",orgNum);
    }else{
        printf("%d is not palindrome.",orgNum);
    }
    return 0;
}