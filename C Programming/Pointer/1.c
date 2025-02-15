#include<stdio.h>
int main(){
    int age = 18;
    int *ptr = &age;
    *ptr = 20;
    // print value
    printf("%d\n",age); //20
    printf("%d\n",*ptr);  //20
    printf("%d\n",*ptr);  //20
    printf("%d\n",*(&age)); //20
    
    printf("*********************\n");
    // print address
    printf("%p\n",&age); 
    printf("%p\n",ptr);
    printf("%p\n",*ptr); //random address
    printf("%p\n",&ptr);

    return 0;
}