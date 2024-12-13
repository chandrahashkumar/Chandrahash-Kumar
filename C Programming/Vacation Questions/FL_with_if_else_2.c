/* 12. Create a program that uses a for loop and if-else to print the grades 
of students based on marks (e.g., A, B, C) for a list of 5 students. 
*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter student marks: ");
    scanf("%d",&marks);
    if(marks < 50){
        printf("C");
    }else if(marks < 80){
        printf("B");
    }else if(marks >= 80 && marks <=100){
        printf("A");
    }
    return 0;
}