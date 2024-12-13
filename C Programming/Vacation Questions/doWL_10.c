/*10. Create a program using a do-while loop to count how many 
numbers between 1 and 100 are divisible by 5.
*/
#include<stdio.h>
int main(){
    int num= 1 , count = 0;
    do{
        if(num%5 == 0){
            count++;
        }
        num++;
    }while(num<=100);
    printf("%d numbers between 1 to 100 are divisible by 5.",count);
    return 0;
}