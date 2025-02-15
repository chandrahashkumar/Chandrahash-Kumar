#include<stdio.h>
// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if(age>0 && age<=150){
//         if(age<=12){
//             printf("You are a child\n");
//         }
//         else if(age<=18){
//             printf("You are teenager");
//         }
//         else if (age<50){
//             printf("Your are adult");
//         }
//         else if(age<=150){
//             printf("Your age senior");
//         }
//     }
//     else{
//         printf("Invalid age");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i = 0; i<5; i++){
//         for(int j = 0; j<=i; j++){
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     char name[] = "Chandrahash";
//     for(int i = 0; i<3; i++){
//         printf("Hello %s\n", name);
//     }
//     return 0;
// }


// int main(){
//     int i = 1;
//     while(i<10){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int i = 0;
//     for (i;i<3;i++){
//         if(i == 2){
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }


// int main(){
//     int day ;
//     printf("Enter a number[1 to 7]: ");
//     scanf("%d", &day);
//     switch(day){
//         case 1:
//         printf("Sunday");
//         break;
//         case 2:
//         printf("Monday");
//         break;
//         default:
//         printf("Invalid day");
//         break;
//     }
//     return 0;
// }

// int main(){
//     int day;
//     printf("Enter a number[1 to 3]: ");
//     scanf("%d",&day);
//     if(day >0 && day<= 2){
//         if(day == 1){
//             printf("Sunday");
//         }
//     }
//     else{
//         printf("Invalid day");
//     }
//     return 0;
// }

// int main(){
//     int age = 20;
//     age>18 ? printf("adult") : printf("teenager");
//     return 0;
// }


// int main(){
//     int i = 0;
//     for(i ; i<=3; i++){
//         if(i == 2){
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// int main(){
//     int i = 0;
//     do{
//         printf("%d\n", i);
//         i++;
//     }while(i<0);
//     return 0;
// }

// int main(){
//     int num = 1;
//     while(num<0){
//         printf("%d", num);
//     }
//     return 0;
// }

// int sum(int a, int b);

// int main(){
//     int a = 5, b = 6;
//     printf("%d\n", sum(a, b));
//     return 0;
// }


// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int x = 20;
//     int *ptr;
//     ptr = &x;
//     printf("%d\n", ptr);
//     return 0;
// }

// int main(){
//     char name[15]= "Chandrahash";
//     printf("%s\n", name);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     struct student{
//         char name[25];
//         double PRN;
//         char Branch[50];
//     };

//     struct student s1 ={ "Chandrahash", 240205241027, "B.Tech CSE with AI & ML"};
//     printf("Name: %s\n", s1.name);
//     printf("PRN: %.0lf\n", s1.PRN);
//     printf("Branch: %s\n", s1.Branch);
  
//     return 0;
// }


// int main(){
//     struct studentinfo{
//         char name[50];
//         int age;
//         char Branch[50];
//     };

//     struct studentinfo s1 = {"Priyanshu Kumar", 19, "B.Tech CSE with AI & ML"};
//     printf("Name: %s\n", s1.name);
//     printf("Age: %d\n", s1.age);
//     printf("Branch: %s\n", s1.Branch);
//     return 0;
// }

// int main(){
//     char name[2][50] = {"Chandrahash", 
//                         "Priyanshu"};
//     for(int i = 0; i<2; i++){
//         printf("%s\n", name[i]);
//     }
//     return 0;
// }

// #include<string.h>
// int main(){
//     char name[]= "Rohit";
//     char copyname[50];

//     strcpy(copyname, name);
//     printf("Name: %s\n", name);
//     printf("Name of Copy: %s\n", copyname);
//     return 0;
// }

// #include<string.h>
// int main(){
//     char name[] = "Rohti";

//     int length = strlen(name);
//     printf("The length of name: %d\n", length); // 5

//     return 0;
// }

// #include<string.h>
// int main(){
//     char words[50]= "Hello, World!";
//     printf("%s\n", words);
//     printf("The length of words: %d\n", strlen(words));
//     return 0;
// }

// int main(){
//     int arr[2] = {5, 6};
//     for(int i = 0; i<2; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// int main(){
//     int arr[2][2]= {{1, 2},
//                     {3, 4}};

//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<2; j++){
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int arr[2][3] = {{1, 2, 3},
//                     {4, 5, 6}};

//     for(int i = 0; i<2 ; i++){
//         for(int j = 0; j<3; j++){
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
Output:- 
    1   2   3
    4   5   6

*/


// int main(){
//     int arr[5]= {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     printf("%d\n", *ptr); // access first element of the array
//     printf("%d\n", *(ptr + 1)); // access second element of the array
//     return 0;
// }


// void printelement(int x);

// int main(){
//     int arr[3] = {1, 2, 3};
//     printelement(arr[0]);

//     return 0;
// }
// void printelement( int x){
//     printf("print first element of array: %d\n", x);
// }

// int main(){
//     int arr[5]= {1, 2, 3, 4, 5};
//     printf("%d\n", arr[4]); // 5
//     printf("%d\n", arr[5]); // print random value like random memory location
//     return 0;
// }

/*
syntax array
        type array_name[size];
*/

// int main(){
//     int arr[3] = {1, 2, 3};
//     printf("%d", arr[2]);
//     return 0;
// }

// int sum(int a, int b);

// int main(){
//     int a = 20, b = 10;
//     printf("%d\n", sum(a,b));
//     return 0;
// }
// int sum(int a, int b){
//     return a +b;
// }

// int sum(int a);

// int main(){
//     int a = 5;
//     printf("Org: %d\n", a);
//     sum(a);
//     printf("after call: %d\n", a);
//     return 0;
// }

// int sum(int a){
//     a = 50;
// }


// int sum(int *a);

// int main(){
//     int a = 5;
//     printf("Before call: %d\n", a);
//     sum(&a);
//     printf("after call: %d\n", a);
//     return 0;
// }

// int sum(int *a){
//     *a = 50;
// }


// #include <stdio.h>

// int* getPointer(int *num) {
//     return num;  // Returning a pointer
// }

// int main() {
//     int a = 10;
//     int *ptr = getPointer(&a);
//     printf("Value: %d\n", *ptr);
//     return 0;
// }

// #include <stdio.h>

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int numbers[5] = {1, 2, 3, 4, 5};
//     int size = 5;
    
//     printArray(numbers, size);  // Passing array
//     return 0;
// }

#include<string.h>

// int main(){
//     char name[] = "Chandrahash";
//     char copyname[50];
//     strcpy(copyname, name);
//     printf("Name: %s\n", copyname);
//     return 0;
// }

// #include<string.h>
// int main(){
//     char str1[]= "Ram";
//     char str2[]= "Ram";
//     char str3[]= "Sita";
//     printf("%d\n", strcmp(str1, str2));
//     printf("%d\n", strcmp(str1, str3));

//     return 0;
// }


// #include<string.h>
// struct student{
//     char name[50];
//     int Rollno;
// };

// int main(){
//     struct student students[2] = {{"Ram", 20},
//                                 {"Rohit", 13}
//                                 };
//     for(int i = 0; i<2; i++){
//         printf("Name: %s , Rollno: %d\n", students[i].name, students[i].Rollno);
//     }
//     return 0;
// }

// #include<string.h>
// int main(){
//     int arr[2]= {1, 2};
//     int *ptr = arr;
//     printf("%d\n", ptr);
//     return 0;
// }


// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(int i = 1; i<=10;i++){
//         printf("%d\n",num*i);
//     }
//     return 0;
// }

// int main(){
//     int term;
//     int t1= 0,t2 =1, nextterm;
//     printf("Enter how much term: ");
//     scanf("%d", &term);
//     for(int i = 1;i<=term;i++){
//         printf("%d ", t1);
//         nextterm = t1+t2;
//         t1 = t2;
//         t2 = nextterm;
//     }
//     return 0;

// }


// int main(){
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     long fact =1;
//     for(int i = 1; i<=num; i++){
//         fact *=i;
//     }
//     printf("%d fact is %d",num,fact);
//     return 0;
// }

// int main(){
//     int num, rem, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for(num;num!=0;){
//         rem = num%10;
//         sum = sum +rem;
//         num = num/10;
//     }
//     printf("sum is %d" , sum);
//     return 0;
// }

int main(){
    int num;
    printf("eNTE: ");
    scanf("%d", &num);
    for(int i = 1; i<=num;i++){
        int 
    }
    return 0;
}