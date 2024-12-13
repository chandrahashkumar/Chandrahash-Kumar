#include<stdio.h>
int main(){
    int time;
    printf("Enter time in 0 to 24 : ");
    scanf("%d",&time);

    if(time<12){
        printf("Good Morning");
    }
    else if(time == 12){
        printf("Good Noon");
    }
    else if(time<17){
        printf("Good Afternoon");
    }
    else if(time<21){
        printf("Good Evening");
    }
    else if(time<24){
        printf("Good Night");
    }
    else {
        printf("You are enter wrong time");
    }

    return 0;
}