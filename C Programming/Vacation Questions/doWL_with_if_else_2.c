/*12. Create a do-while loop that asks for a number and prints if it’s 
positive or negative using if-else conditions.
*/

#include<stdio.h>
int main(){
    int num;
    char choice;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        if( num>0){
            printf("%d is positive\n",num);
        }else if ( num<0){
            printf("%d is negative\n",num);
        }
        else if(num == 0){
            printf("Entered number is zero.");
            
        }else{
            printf("invalid number");
        }
        printf("Do you want to enter another number?(y/n): ");
        scanf(" %c",&choice);
    }while(choice == 'y' || choice == 'Y');
    return 0;
}