// #include<stdio.h>
// int main(){
//     for(int i = 1;i<=5; i++){
//         for(int x =1; x<=i;x++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*

*
* *
* * *
* * * *
* * * * *

*/


// #include<stdio.h>
// int main(){
//     for(int i = 5;i>=1; i--){
//         for(int x =1; x<=i;x++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*

* * * * *
* * * *
* * *
* *
*

*/


#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>0 && age<=100){
        if(age<=12){
            printf("Child\n");
        }
        else if (age<18){
            printf("teenager\n");
        }
        else if(age<=60){
            printf("adult\n");
        }
        else if(age>60){
            printf("senior citizen\n");
        }
    }
    else{
        printf("Invalid age\n");
    }
    return 0;
}