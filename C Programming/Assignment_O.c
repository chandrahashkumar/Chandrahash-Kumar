// Assignment Operater

#include<stdio.h>
int main(){
    int num;
    
    printf("Enter the number: ");
    scanf("%d",&num);


    num = num;
    printf("nun = nun = %d\n",num);

    num +=num;
    printf("nun += nun = %d\n",num);
    
    num *= num;
    printf("nun *= nun =  %d\n",num);

    num /= num;
    printf("nun /= nun = %d\n",num);

    num %= num;
    printf("nun %%= nun = %d\n",num);
    
    num -= num;
    printf("nun -= nun = %d\n",num);

    return 0;
}


