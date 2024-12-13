#include<stdio.h>
int main(){
    int x;
    printf("Enter a number(1=M,2=TU,3=WED,4=THU,5=FRI,6=SAT,7=SUN) : ");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("MONDAY");
            break;
        case 2:
            printf("TUESDAY");
            break;
        case 3:
            printf("WEDNESDAY");
            break;
        case 4:
            printf("THURSDAY");
            break;
        case 5:
            printf("FRIDAY");
            break;
        case 6:
            printf("SATURDAY");
            break;
        case 7:
            printf("SUNDAY");
            break;
        default:
            printf("Invalid Day");
    }
    return 0;
}

