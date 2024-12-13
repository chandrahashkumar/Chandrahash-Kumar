/*Write a do-while loop that asks the user to enter numbers and stops 
when the user enters zero.
*/
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter a number(if enter 0 stop): ");
        scanf("%d",&num);
        printf("%d\n",num);
        if(num ==0){
            break;
        }

    }while(num);
    return 0;
}