// #include<stdio.h>
// int main(){
//     char str[] = "Hello";
//     int i = 0;
//     while(1){
//         if(str[i] == '\0'){
//             printf("0 is detected");
//             break;
//         }
//         else{
//             printf("%c\n",str[i]);
//         } 
//         i++;   
//     }
    
//     return 0;
// }

#include <stdio.h>

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

void addMatrices(int *matrixA, int *matrixB, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(matrixA + i * cols + j) + *(matrixB + i * cols + j);
        }
    }
}

int main() {
    int matrixA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];
    int rows = 3;
    int cols = 3;

    addMatrices((int *)matrixA, (int *)matrixB, (int *)result, rows, cols);

    printf("Result of matrix addition:\n");
    printMatrix((int *)result, rows, cols);

    return 0;
}


