/* 13. Write a program that uses a do-while loop and if-else to print "Pass" 
if the user enters a number greater than 50, and "Fail" otherwise. 
*/
#include<stdio.h>
int main(){
    float num;
    char choice;
    do{
        printf("Enter a number: ");
        scanf("%f",&num);
        if(num>50){
            printf("PASS\n");
        }else{
            printf("FAIL\n");
        }
        printf("Do you want to enter another number?(y/n): ");
        scanf(" %c",&choice);

    }while(choice == 'y' || choice == 'Y');
    return 0;
}