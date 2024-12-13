#include<stdio.h>
int main(){
    int num_1,num_2;
    char operand;
    printf("Enter 1st number: ");
    scanf("%d",&num_1);
    printf("Enter 2nd number: ");
    scanf("%d",&num_2);
    printf("Enter operand: ");
    scanf(" %c",&operand);
    switch (operand)
    {
        case '+':
            printf("%d",(num_1+num_2));
            break;
        case '-':
            printf("%d",(num_1-num_2));
            break;
        case '*':
            printf("%d",(num_1*num_2));
            break;
        case '/':
            printf("%d",(num_1/num_2));
            break;
        default:
            printf("invalid number or operand");
            break;
    }
    return 0;
}