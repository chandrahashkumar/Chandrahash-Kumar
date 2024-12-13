#include<stdio.h>
int main(){
    float O,T;
    printf("Enter O : ");
    scanf("%f",&O);
    printf("Enter T : ");
    scanf("%d",&T);

    float PER = (O/T)*100>80;
    printf("%f",PER);

    return 0;

}