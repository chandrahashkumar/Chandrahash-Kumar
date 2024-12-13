/* 10. Write a program that uses a for loop to print the powers of 2 
from 1 to 16 (i.e., 2^1 to 2^16).
*/
#include<stdio.h>


int main(){
    for(int num = 1,i = 1;i<=16;i++){
        int power = num*num;
        printf("%d^2=%d\n",i,power);
        num++;
        
    }
    return 0;
}

// #include<math.h>

// int main(){
//     for(int num = 1,n =1;n<=16;n++){
//         int power = pow(num,2);
//         printf("%d^2=%d\n",num,power);
//         num++;
//     }
//     return 0;

// }