/* 14. Use a for loop and if-else to print "Prime" for prime numbers and 
"Composite" for composite numbers between 1 and 50.
*/

#include<stdio.h>
int main(){
    int num ,i,fact;
    for(num = 1;num<=50;num++){
        fact = 0;
        if(num == 1){
            printf("1 is not prime and not composite number.\n");
            continue;     
        }
        for(i = 1;i<=num;i++){
            if(num%i ==0){
                fact++;
            }            
        }
        if(fact == 2){
            printf("%d is prime number.\n",num);
        }else{
            printf("%d is composite number.\n",num);
         }            
    }
    return 0;
}


