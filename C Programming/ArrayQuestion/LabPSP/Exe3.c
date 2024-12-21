#include <stdio.h> 
int main() { 
 int rows, cols, i, j; 
 // Input matrix dimensions 
 printf("Enter the number of rows and columns: "); 
 scanf("%d %d", &rows, &cols); 
 int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], diff[rows][cols]; 
 // Input first matrix 
 printf("Enter elements of the first matrix:\n"); 
 for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) { 
 printf("matrix1[%d][%d]: ", i, j); 
 scanf("%d", &matrix1[i][j]); 
 } 
 } 
 // Input second matrix 
 printf("Enter elements of the second matrix:\n"); 
 for (i = 0; i < rows; i++) { 
 for (j = 0; j < cols; j++) { 
 printf("matrix2[%d][%d]: ", i, j); 
 scanf("%d", &matrix2[i][j]); 
 } 
 } 
 // Perform addition and subtraction 
 for (i = 0; i < rows; i++) { 
 for (j = 0; j < cols; j++) { 
 sum[i][j] = matrix1[i][j] + matrix2[i][j]; 
 diff[i][j] = matrix1[i][j] - matrix2[i][j]; 
 } 
 } 
 // Display results 
 printf("\nSum of the matrices:\n"); 
 for (i = 0; i < rows; i++) { 
 for (j = 0; j < cols; j++) { 
 printf("%d ", sum[i][j]); 
 } 
 printf("\n"); 
 } 
 printf("\nDifference of the matrices:\n"); 
 for (i = 0; i < rows; i++) { 
 for (j = 0; j < cols; j++) { 
 printf("%d ", diff[i][j]); 
 } 
 printf("\n"); 
 } 
 return 0; 
} 

/*
INPUT
   Enter the number of rows and columns: 2 2
   Enter elements of the first matrix:
   matrix1[0][0]: 1
   matrix1[0][1]: 3
   matrix1[1][0]: 4
   matrix1[1][1]: 5
   Enter elements of the second matrix:
   matrix2[0][0]: 1
   matrix2[0][1]: 2
   matrix2[1][0]: 3
   matrix2[1][1]: 4

OUTPUT 
   Sum of the matrices:
   2 5
   7 9

Difference of the matrices:
   0 1
   1 1
*/