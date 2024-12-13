//2. Create a for loop that prints the multiplication table of a number entered by the user.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i = 1;i<=10;i++){
        int mul = num*i;
        printf("%d\n",mul);
    }
    
    return 0;
}