//Passing an array elements to a function.

#include<stdio.h>
void array_element(int element){
    element = 50;
    printf("%d\n",element);
}
int main(){
    int arr[5] = {10,15,20,25,30,};
    array_element(arr[2]);
    printf("%d",arr[2]);
    return 0;
}