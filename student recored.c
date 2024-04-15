#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

// Function prototypes
void addStudent();
void deleteStudent(int roll);
void displayRecords();

int main() {
    int choice;
    
    do {
        printf("\n\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Display Records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2: {
                int roll;
                printf("Enter the roll number of student to delete: ");
                scanf("%d", &roll);
                deleteStudent(roll);
                break;
            }
            case 3:
                displayRecords();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while(choice != 4);

    return 0;
}

void addStudent() {
    struct Student newStudent;
    FILE *file;
    
    printf("Enter student name: ");
    scanf("%s", newStudent.name);
    printf("Enter roll number: ");
    scanf("%d", &newStudent.roll_number);
    printf("Enter marks: ");
    scanf("%f", &newStudent.marks);

    file = fopen("student_records.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(file, "%s %d %.2f\n", newStudent.name, newStudent.roll_number, newStudent.marks);
    fclose(file);

    printf("Student record added successfully!\n");
}

void deleteStudent(int roll) {
    FILE *temp, *file;
    struct Student student;
    int found = 0;

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error opening temporary file!\n");
        exit(1);
    }

    while (fscanf(file, "%s %d %f", student.name, &student.roll_number, &student.marks) != EOF) {
        if (student.roll_number != roll) {
            fprintf(temp, "%s %d %.2f\n", student.name, student.roll_number, student.marks);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);

    remove("student_records.txt");
    rename("temp.txt", "student_records.txt");

    if (found) {
        printf("Student record deleted successfully!\n");
    } else {
        printf("Student with roll number %d not found!\n", roll);
    }
}

void displayRecords() {
    FILE *file;
    struct Student student;

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");
    printf("--------------------------------\n");
    while (fscanf(file, "%s %d %f", student.name, &student.roll_number, &student.marks) != EOF) {
        printf("%s\t%d\t\t%.2f\n", student.name, student.roll_number, student.marks);
    }

    fclose(file);
}