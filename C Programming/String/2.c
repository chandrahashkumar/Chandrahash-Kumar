// #include <stdio.h>

// int main() {
//     char greeting[] = "Hello, World!";
//     printf("%s\n", greeting);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[] = "Chandrahash";
//     size_t length = strlen(name);
//     printf("The length of the string is: %zu\n", length);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[] = "Chandrahash";
//     char copyname[50];  // Make sure the destination array is large enough to hold the copied string
    
//     strcpy(copyname, name);
    
//     printf("Source name: %s\n", name);
//     printf("Copied name: %s\n", copyname);
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// // Declare a structure called Student
// struct Student {
//     char name[50];
//     int rollNumber;
//     int age;
// };

// int main() {
//     // Declare a Student variable
//     struct Student student1;

//     // Assign values to the student1 fields
//     strcpy(student1.name, "John Doe");
//     student1.rollNumber = 101;
//     student1.age = 20;

//     // Print the student1 details
//     printf("Name: %s\n", student1.name);
//     printf("Roll Number: %d\n", student1.rollNumber);
//     printf("Age: %d\n", student1.age);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

struct book{
    char title[50];
    char authot[];
};

int main(){
    struct book b1;

    strcpy(b1.title, "Ramayan");
    strcpy(b1.authot, "Valmiki");
    printf("Titale: %s\n", b1.title);
    printf("Author: %s\n", b1.authot);
    return 0;

}