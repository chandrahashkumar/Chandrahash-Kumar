#include<stdio.h>
int main(){
    float P,R,T;
    printf("Enter Principal amount: ");
    scanf("%f",&P);
    printf("Enter Rate: ");
    scanf("%f",&R);
    printf("Enter Time in month/year: ");
    scanf("%f",&T);

    float SI = (P*R*T)/100;
    float Amount = SI + P;
    printf("Your total amount = %f",Amount);
    return 0;
}