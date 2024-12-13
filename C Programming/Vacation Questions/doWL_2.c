// 2. Create a do-while loop that prints the square of numbers from 1 to 10.

#include<stdio.h>
#include<math.h>
int main(){
    int num = 1;
    do{
        int power = pow(2,num);
        printf("%d^2=%d\n",num,power);
        num++;
    }while(num<=10);
    return 0;
}