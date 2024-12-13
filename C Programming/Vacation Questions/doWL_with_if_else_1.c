/*11. Write a do-while loop that takes user input and checks if the entered 
number is even or odd using if-else. 
*/

#include<stdio.h>
int main(){
    int num;
    char choice;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        
        if( num<0){
            break;
        }else if (num%2 == 0){
            printf("%d is even\n",num);
        }
        else{
            printf("%d is odd\n",num);
        }
        printf("Do you want to enter another number?(y/n): ");
        scanf(" %c",&choice);
    }while(choice == 'y' || choice == 'Y');
    return 0;
}