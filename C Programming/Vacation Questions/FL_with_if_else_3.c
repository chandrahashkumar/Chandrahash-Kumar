/*13. Write a for loop and if-else to check and print if numbers between 1 
and 100 are divisible by both 4 and 6.
*/
#include<stdio.h>
int main(){
    for(int num = 1,i = 1;i<=100;i++){
        if(num%4 == 0 && num%6 ==0){
            printf("%d is divisible by both 4 and 6.\n",num);            
        }
        num++;
    }
}