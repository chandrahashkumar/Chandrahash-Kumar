#include<stdio.h>
int main(){
    int a,b,c,d;

    printf("Enter integer number: ");
    scanf("%d",&a);

    printf("Enter integer number: ");
    scanf("%d",&b);

    printf("Enter integer number: ");
    scanf("%d",&c);

    printf("Enter integer number: ");
    scanf("%d",&d);

    printf("(%d>%d && %d>%d) : %d\n",a,b,c,d,(a>b && c<d));
    printf("(%d>%d || %d <%d) : %d\n",a,b,c,d,(a>b || c<d));
    printf("!(%d<%d) : %d",c,d,!(c<d));
    
    return 0;
}