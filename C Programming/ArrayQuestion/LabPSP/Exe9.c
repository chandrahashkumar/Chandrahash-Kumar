#include <stdio.h> 
// Define the structure for goods 
struct Goods { 
 int number; // Unique identifier for the good 
 float price; // Price of the good 
 char date[11]; // Date of purchase in "dd/mm/yyyy" format 
}; 
int main() { 
 int n, i; 
 // Input the number of goods 
 printf("Enter the number of goods: "); 
 scanf("%d", &n); 
 // Declare an array of structures 
 struct Goods items[n]; 
// Input details of each good 
 for (i = 0; i < n; i++) { 
 printf("\nEnter details for Good %d:\n", i + 1); 
 printf("Number: "); 
 scanf("%d", &items[i].number); 
 printf("Price: "); 
 scanf("%f", &items[i].price); 
 printf("Date of Purchase (dd/mm/yyyy): "); 
 scanf("%s", items[i].date); 
 } 
 // Display details of all goods 
 printf("\nDetails of Goods:\n"); 
 printf("-------------------------------------------------\n"); 
 printf("Number\t\tPrice\t\tDate of Purchase\n"); 
 printf("-------------------------------------------------\n"); 
 for (i = 0; i < n; i++) { 
 printf("%d\t\t%.2f\t\t%s\n", items[i].number, items[i].price, items[i].date); 
 } 
 return 0; 
} 