/*3. Write a program using a for loop to find the sum of all even 
numbers between 1 and 100.
*/
#include<stdio.h>
int main(){
    int num = 1,sum = 0;
    for(num;num<=100;num++){
        if(num%2==0){
            sum = sum+num;
            //printf("%d\n",num);
        }    
    }
    printf("The sum of even numbers 1 to 100 is %d",sum);

    return 0;
}