// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter obtained marks :");
//     scanf("%d",&a);
//     printf("Enter total marks : ");
//     scanf("%d",&b);

//     float per = ((float)a/(float)b)*100;
//     printf("%f\n",per);

//     printf("%d",(per>80));

//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     for(int num =1;num<=10;num++){
//         printf("%d**2 = %f\n",num,pow(num,2));
       
//     }
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int i = 4;
//     while (i>0)
//     {
//         int j = 3;
//         while(j>0){
//             printf("*\t");
//             j--;
//         }printf("\n");
//         i--;
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i = 4;
//     do{
//         int j =4;
//         do{
//             printf("*\t");
//             j--;
//         }while(j>i);
//         printf("\n");
//         i--;
//     }while (i>0);
//     return 0;
    
// }


// 

// #include<stdio.h>

// int main() {
//     int i = 4;
//     do {
//         int j = 4;
//         do {
//             printf("*\t");
//             j--;
//         } while(j >= i);
//         printf("\n");
//         i--;
//     } while(i > 0);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int i = 4;
//     do {
//         int j = 4;
//         do {
//             printf("*\t");
//             j--;
//         } while(j >= i);
//         printf("\n");
//         i--;
//     } while(i > 0);
//     return 0;
// }

//#include<stdio.h>
// int main(){
//     int a = 1;
//     for(int i = 1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             printf("%d\t",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 1;
//     for(int i = 1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             printf("%d\t",i);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 1;
//     for(int i = 1;i<=5;i++){
//         for(int j = 1;j<=i;j++){
//             printf("%d\t",j);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// #include <stdio.h>

// int square(int num); // Function declaration

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int result = square(number); // Function call
//     printf("The square of %d is %d\n", number, result);
//     return 0;
// }

// int square(int num) { // Function definition
//     return num * num;
// }

//2


// #include <stdio.h>

// int globalVar = 10; // Global variable

// void modifyValue(int x); // Function declaration
// void modifyReference(int *x);

// int main() {
//     int localVar = 20; // Local variable

//     printf("Initial values - Global: %d, Local: %d\n", globalVar, localVar);

//     modifyValue(localVar); // Pass by value
//     printf("After modifyValue - Global: %d, Local: %d\n", globalVar, localVar);

//     modifyReference(&localVar); // Pass by reference
//     printf("After modifyReference - Global: %d, Local: %d\n", globalVar, localVar);

//     return 0;
// }

// void modifyValue(int x) {
//     x = 100; // Does not affect localVar
// }

// void modifyReference(int *x) {
//     *x = 100; // Affects localVar
// }

// #include <stdio.h>

// int globalVar = 10; // Global variable

// void modifyValue(int x); // Function declaration
// void modifyReference(int *x);

// int main() {
//     int localVar = 20; // Local variable

//     printf("Initial values - Global: %d, Local: %d\n", globalVar, localVar);

//     modifyValue(localVar); // Pass by value
//     printf("After modifyValue - Global: %d, Local: %d\n", globalVar, localVar);

//     modifyReference(&localVar); // Pass by reference
//     printf("After modifyReference - Global: %d, Local: %d\n", globalVar, localVar);

//     return 0;
// }

// void modifyValue(int x) {
//     x = 100; // Does not affect localVar
// }

// void modifyReference(int *x) {
//     *x = 100; // Affects localVar
// }


// #include <stdio.h>

// // Global variable
// int globalVar = 10;

// void display() {
//     // Local variable
//     int localVar = 20;
//     printf("Local Variable: %d\n", localVar);
//     printf("Global Variable: %d\n", globalVar);
// }

// int main() {
//     display();
//     // Trying to access localVar here would cause an error
//     // printf("Local Variable: %d\n", localVar); // This would be an error
//     printf("Global Variable in main: %d\n", globalVar);
//     return 0;
// }


// #include <stdio.h>

// void printDetails(char name[], int age, float gpa); // Function declaration

// int main() {
//     char name[] = "12";
//     int age = 19;
//     float gpa = 3.0;

//     printDetails(name, age, gpa); // Passing arguments in order

//     return 0;
// }

// void printDetails(char name[], int age, float gpa) {
//     printf("Name: %s\n", name);
//     printf("Age: %d\n", age);
//     printf("GPA: %.2f\n", gpa);
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[50];
//     int age;
//     int length;

//     printf("Enter your name: ");
//     scanf(" %s", &name);
//     printf("Enter your age: ");
//     scanf("%d",&age);

//     length = strlen(name); // Using strlen to find string length

//     printf("Hello, %s. You are %d years old.\n", name, age);
//     printf("Your name has %d characters.\n", length);

//     return 0;
// }

#include <stdio.h>

// Function declarations
void callByValue(int a);
void callByReference(int *a);

int main() {
    int x = 20;

    printf("Original value of x: %d\n", x);

    // Call by Value
    callByValue(x);
    printf("Value of x after callByValue: %d\n", x);

    // Call by Reference
    callByReference(&x);
    printf("Value of x after callByReference: %d\n", x);

    return 0;
}

// Function definitions
void callByValue(int a) {
    a = 30; // This change does not affect the original value of x
}

void callByReference(int *a) {
    *a = 30; // This change affects the original value of x
}

