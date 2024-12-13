#include<stdio.h>
int main(){
    int arr[5]= {10,20,30,40,50};
    printf("Total size = %d\n",sizeof(arr));
    printf("size of 1 element = %d\n",sizeof(arr[2]));
    printf("No of element = %d\n",sizeof(arr)/sizeof(arr[2]));
    

    return 0;
}

