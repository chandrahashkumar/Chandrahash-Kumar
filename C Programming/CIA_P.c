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
    if (age>0 && age <12){
        printf("child");
    }
    else if(age<=18){
        printf("Teenager");
    }
    else if(age<=50){
        printf("adult");
    }
    else if (age <=80){
        printf("old");
    }
    else if(age>80){
    
         printf("budha");
    }
}