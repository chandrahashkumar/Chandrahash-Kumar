//Arithmetic Operater

#include<stdio.h>

int main(){
    int num_1, num_2;

    printf("Enter the fast number: ");
    scanf("%d",&num_1);
    printf("Enter the second number: ");
    scanf("%d",&num_2);
    
    int sum, diff, mul, divi,mod;

    sum = num_1+num_2;
    printf("Sum %d and %d : %d\n",num_1,num_2,sum);
            
    diff = num_1-num_2;
    printf("Subtraction %d and %d : %d\n",num_1,num_2,diff);

    mul = num_1*num_2;
    printf("multiply %d and %d : %d\n",num_1,num_2,mul);

    divi = num_1/num_2;
    printf("Division %d and %d : %d\n",num_1,num_2,divi);

    mod = num_1%num_2;
    printf("Reminder %d and %d : %d\n",num_1,num_2,mod);

    num_1++; // num_1 =  num_1 + 1;
    printf("Fast number(num_1++): %d\n",num_1);

    num_2--; // num_2 = num_2 -1;
    printf("Second number(num_2--): %d",num_2);


    return 0;
}