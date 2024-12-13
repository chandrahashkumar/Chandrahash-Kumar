// Using math function

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float num,root;
//     printf("Enter a number: ");
//     scanf("%f",&num);
//     if(num>0){
//     root = sqrt(num);
//     }
//     printf("%0.2f",root);

//     return 0;
// }

//Without using function

#include<stdio.h>
int main(){
    float num,i;
    printf("Enter a number: ");
    scanf("%f",&num);
    if(num>0){
        for(i = 0.001;i*i<num; i = i + 0.001);
        printf("Square root of %f is %0.2f",num,i);
    }
    
    return 0;
}