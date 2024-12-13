// Pass by Refrence

#include<stdio.h>
void change(int *ptr);
int main(){
    int num = 10;
    printf("Before calling function num = %d\n",num);
    change(&num);
    printf("After calling function num = %d\n",num);
    return 0;
}
void change(int *ptr){
    *ptr = 30;
}