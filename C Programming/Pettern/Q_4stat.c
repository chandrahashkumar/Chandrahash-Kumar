#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for(int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int i = 4;
//     do {
//         int j =4;
//         do {
//             printf("* ");
//             j--;
//         } while (j >= i);
//         printf("\n");
//         i--;
//     } while (i > 0);
    
//     return 0;
// }
