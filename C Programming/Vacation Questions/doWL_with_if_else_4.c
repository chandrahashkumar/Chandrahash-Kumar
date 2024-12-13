/* 14. Use a do-while loop and if-else to print whether a number entered by 
the user is prime or not.
*/
#include<stdio.h>
int main(){
    int num, i = 1, fact = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Enter number greater than 1.");

    }else if(num == 1|| num ==0){
        printf("1 or 0 not prime and not composite number.");
    }else{
        do{
            if(num %i == 0){
                fact++;
            }i++;
        }while(i<=num);
        if(fact == 2){
            printf("%d is prime number.",num);

        }else{
            printf("%d is not prime number.",num);
        }
    }
    return 0;
}