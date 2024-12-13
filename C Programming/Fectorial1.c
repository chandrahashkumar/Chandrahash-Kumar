#include<stdio.h>
int facto(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int c = facto(n);
    printf("%d",c);
    return 0;
    
}
int facto(int a){
    int fact = 1;
    for(int i = 1;i<=a;a++){
        fact = fact*i;
    }return fact;
}