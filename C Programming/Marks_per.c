#include<stdio.h>
int main(){
    int TotalM,YouM;
    printf("Enter you get marks: ");
    scanf("%d",&YouM);
    printf("Enter total marks: ");
    scanf("%d",&TotalM);

    float Percent = (float)YouM / (float)TotalM * 100;
    
    printf("Your total marks in percent: %f",Percent);


    return 0;

}