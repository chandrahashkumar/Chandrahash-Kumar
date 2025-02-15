// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num %2 ==0){
//         printf("%d is even",num);
//     }else{
//         printf("%d is odd",num);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>0){
        
        if(age <=12){
            printf("Child");
        }
        else if(age<=17){
            printf("Teenage");
        }
        else if(age <=60){
            printf("Adult");
        }
        else if(age >60){
            printf("Senior citizen");
        }    
    }
    else{
        printf("Invalid age!");
    }
    return 0;
}