#include<stdio.h>
void prime();
int main(){
    prime();
    return 0;
}

void prime(){
    int num,a = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num ==1||num ==0){
        printf("Not prime number");
        //break;
    }
    for(int i = 2;i<num;i++){
        if(num%i == 0){
            a = 1;
            break;

        }

    }
    if(a == 1){
        printf("Not prime");
    }else{
        printf("Prime");
    }
}