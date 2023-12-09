//student data recoder 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define a structure to represent a student
struct Student {
    char rollNo[10];
    char name[50];
    int age;
    float marks;
};

// Function prototypes
void addStudent();
void displayAllStudents();
void searchStudent();
void deleteStudent();
void saveToFile();
void loadFromFile();

// Global array to store student records
struct Student students[MAX_STUDENTS];
int studentCount = 0;

int main() {
    int choice;

    // Load existing student records from a file
    loadFromFile();

    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                saveToFile();
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void addStudent() {
    if (studentCount < MAX_STUDENTS) {
        struct Student newStudent;
        printf("Enter Roll Number: ");
        scanf("%s", newStudent.rollNo);
        printf("Enter Name: ");
        scanf("%s", newStudent.name);
        printf("Enter Age: ");
        scanf("%d", &newStudent.age);
        printf("Enter Marks: ");
        scanf("%f", &newStudent.marks);

        students[studentCount++] = newStudent;
        printf("Student added successfully.\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}

void displayAllStudents() {
    if (studentCount == 0) {
        printf("No students in the database.\n");
    } else {
        printf("Student Records:\n");
        for (int i = 0; i < studentCount; i++) {
            printf("Roll Number: %s\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %.2f\n", students[i].marks);
            printf("-------------------------------\n");
        }
    }
}

void searchStudent() {
    char rollNoToSearch[10];
    printf("Enter Roll Number to search: ");
    scanf("%s", rollNoToSearch);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(rollNoToSearch, students[i].rollNo) == 0) {
            printf("Student Found:\n");
            printf("Roll Number: %s\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }

    printf("Student with Roll Number %s not found.\n", rollNoToSearch);
}

void deleteStudent() {
    char rollNoToDelete[10];
    printf("Enter Roll Number to delete: ");
    scanf("%s", rollNoToDelete);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(rollNoToDelete, students[i].rollNo) == 0) {
            // Shift the elements to fill the gap
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student with Roll Number %s deleted.\n", rollNoToDelete);
            return;
        }
    }

    printf("Student with Roll Number %s not found.\n", rollNoToDelete);
}

void saveToFile() {
    FILE *file = fopen("student_records.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%s %s %d %.2f\n", students[i].rollNo, students[i].name, students[i].age, students[i].marks);
    }

    fclose(file);
    printf("Student records saved to file.\n");
}

void loadFromFile() {
    FILE *file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("No existing student records found.\n");
        return;
    }

    while (fscanf(file, "%s %s %d %f", students[studentCount].rollNo, students[studentCount].name, &students[studentCount].age, &students[studentCount].marks) != EOF) {
        studentCount++;
    }

    fclose(file);
    printf("Student records loaded from file.\n");
}
