// 9. Write a while loop that continues until the user enters a negative number.

#include<stdio.h>
int main(){
    int num;
    // printf("Enter a number : ");
    // scanf("%d",&num);
    while(num>=0){
        printf("Enter a number : ");
        scanf("%d",&num);
        printf("Given number is %d\n",num);

    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number (negative to stop): ");
//     scanf("%d", &num);

//     while (num >= 0) {
//         printf("You entered: %d\n", num);
//         printf("Enter another number (negative to stop): ");
//         scanf("%d", &num);
//     }

//     printf("You entered a negative number. Exiting...\n");
//     return 0;
// }
