/* Write a program using a while loop that keeps asking the user to input a number.
 If the user inputs the number 0, the program should exit?
*/

#include<stdio.h>
int main(){
    int num;
    while(num){
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num == 0){
            printf("EXIT");
        }
        fflush(stdin); // In loop break to infinit loop
    }
    
    return 0;
}