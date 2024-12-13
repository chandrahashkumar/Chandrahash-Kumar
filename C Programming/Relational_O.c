// Relational Operater

#include<stdio.h>

int main(){
    int num_1, num_2;

    printf("Enter fast number: ");
    scanf("%d",&num_1);
    printf("Enter second number: ");
    scanf("%d",&num_2);

    printf("%d == %d: %d\n",num_1,num_2,num_1 == num_2);
    printf("%d != %d: %d\n",num_1,num_2,num_1 != num_2);
    printf("%d > %d: %d\n",num_1,num_2,num_1 > num_2);
    printf("%d < %d: %d\n",num_1,num_2,num_1 < num_2);
    printf("%d >= %d: %d\n",num_1,num_2,num_1 >= num_2);
    printf("%d <= %d: %d",num_1,num_2,num_1 <= num_2);
    
    return 0;
}