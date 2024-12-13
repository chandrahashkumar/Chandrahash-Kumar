// #include<stdio.h>
// //void sum(int num1,int num2){
// int sum(int num1,int num2){
//     //printf("%d",(num1+num2));
//     return num1 + num2;
// }

// int main(){
//     int num1 = 5, num2 = 6;
//     //sum(num1,num2);
//     int add = sum(num1,num2);
//     printf("%d",add);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a = 4;
//     for(int i = 1;i<=a;i++){
//         for(int j = 1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
    
//     }  
//     return 0;
// }

// #include<stdio.h>
// int sumdigit(){
//     int num,sum = 0;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     for(num;num !=0;){
//         int digit = num%10;
//         sum = sum+digit;
//         num = num/10;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    int a = 0,b = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(int i = 3; i<=n;i++){ 
        int update = a+b; 
        printf("%d\t",update);
        a =b;
        b = update;
    }
    return 0;

}