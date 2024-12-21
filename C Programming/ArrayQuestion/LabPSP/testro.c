#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to store student information
struct Student {
    int roll_no;
    char name[50];
    char course[50];
    float marks;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count, int roll_no);
void editStudent(struct Student students[], int count, int roll_no);
void deleteStudent(struct Student students[], int *count, int roll_no);
void menu();

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0; // Track number of students

    int choice;
    while (1) {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3: {
                int roll_no;
                printf("\nEnter roll number to search: ");
                scanf("%d", &roll_no);
                searchStudent(students, count, roll_no);
                break;
            }
            case 4: {
                int roll_no;
                printf("\nEnter roll number to edit: ");
                scanf("%d", &roll_no);
                editStudent(students, count, roll_no);
                break;
            }
            case 5: {
                int roll_no;
                printf("\nEnter roll number to delete: ");
                scanf("%d", &roll_no);
                deleteStudent(students, &count, roll_no);
                break;
            }
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}

void menu() {
    printf("\nStudent Management System");
    printf("\n1. Add Student");
    printf("\n2. Display Students");
    printf("\n3. Search Student");
    printf("\n4. Edit Student");
    printf("\n5. Delete Student");
    printf("\n6. Exit");
}

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("\nCannot add more students. Max limit reached.\n");
        return;
    }

    struct Student newStudent;
    printf("\nEnter student roll number: ");
    scanf("%d", &newStudent.roll_no);
    getchar(); // Consume newline character left by scanf
    printf("Enter student name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; // Remove newline
    printf("Enter course name: ");
    fgets(newStudent.course, sizeof(newStudent.course), stdin);
    newStudent.course[strcspn(newStudent.course, "\n")] = '\0'; // Remove newline
    printf("Enter student marks: ");
    scanf("%f", &newStudent.marks);

    students[*count] = newStudent;
    (*count)++;
    printf("\nStudent added successfully.\n");
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students to display.\n");
        return;
    }
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("\nRoll No: %d\nName: %s\nCourse: %s\nMarks: %.2f\n", students[i].roll_no, students[i].name, students[i].course, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count, int roll_no) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll_no) {
            printf("\nStudent found:\n");
            printf("Roll No: %d\nName: %s\nCourse: %s\nMarks: %.2f\n", students[i].roll_no, students[i].name, students[i].course, students[i].marks);
            return;
        }
    }
    printf("\nStudent with roll number %d not found.\n", roll_no);
}

void editStudent(struct Student students[], int count, int roll_no) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll_no) {
            printf("\nEditing student %d\n", roll_no);
            printf("Enter new name: ");
            getchar(); // Consume newline character
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
            printf("Enter new course name: ");
            fgets(students[i].course, sizeof(students[i].course), stdin);
            students[i].course[strcspn(students[i].course, "\n")] = '\0'; // Remove newline
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("\nStudent record updated.\n");
            return;
        }
    }
    printf("\nStudent with roll number %d not found.\n", roll_no);
}

void deleteStudent(struct Student students[], int *count, int roll_no) {
    for (int i = 0; i < *count; i++) {
        if (students[i].roll_no == roll_no) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("\nStudent with roll number %d deleted.\n", roll_no);
            return;
        }
    }
    printf("\nStudent with roll number %d not found.\n", roll_no);
}
