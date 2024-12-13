/* 15. Create a do-while loop and if-else to repeatedly ask the user for 
numbers and print "Even" if it’s even, and "Odd" if it’s odd until a 
negative number is entered.
*/
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        if( num<0){
            printf("Negative number entered. Exiting...\n");
            break;
        }else if (num%2 == 0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }while(num >= 0);
    return 0;
}