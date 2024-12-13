#include<stdio.h>
int main() {
    int num,power;
    printf("Enter a number and power: ");
    scanf("%d %d", &num,&power);
    long int result = 1;
    int p = power;
    while(p-- >0){
        result *=num;
    }
     printf("%d power of %d is %ld",num,power,result);
    return 0;
}
