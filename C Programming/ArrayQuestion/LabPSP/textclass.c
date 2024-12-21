// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a positive number: ");
//     scanf("%d",&n);
//     if(n &(n-1)==0){
//         printf("No. not in the 2^n");

//     }else{
//         printf("No. NOT IN THE FORM OF 2^N");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[2][3]= {{1,2,3},{4,5,6}};
    printf("Address of arr[0]= %p\n",arr[0]);
    printf("Address of arr = %p\n",arr);
    printf("Value at arr[0][1] = %d\n",*(*(arr+0)+1));
    printf("Value at arr[1][1] = %d",*(*(arr+1)+0));
    return 0;
}