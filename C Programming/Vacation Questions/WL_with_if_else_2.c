/* 12. Create a program using a while loop that asks the user for numbers 
and prints if they are positive, negative, or zero.
*/

#include<stdio.h>

int main(){
    int num = 1;
    while(num != 0){
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num>0){
            printf("%d is posttive number.\n",num);
        }else if(num<0){
            printf("%d is netatige number.\n",num);
        }else if(num==0){
            printf("%d is zero.\n",num);
        }else{
            printf("NOT valid number.\n");
        }
    }
    return 0;
}
