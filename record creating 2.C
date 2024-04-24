#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANSI_COLOR_PURPLE "\x1b[35m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_CRESET "\x1b[0m"

struct Person {
    char name[50];
    int age;
    char address[100];
};

void addData(FILE *file) {
    struct Person person;

    printf(ANSI_COLOR_BLUE "Enter name: ");
    scanf("%s", person.name);

    printf(ANSI_COLOR_GREEN "Enter age: ");
    scanf("%d", &person.age);

    printf(ANSI_COLOR_YELLOW "Enter address: ");
    scanf("%s", person.address);

fwrite(&person, sizeof(struct Person), 1, file);

    printf("Data added successfully.\n");
}

void searchByName(FILE *file) {
    struct Person person;
    char searchName[50];

    printf(ANSI_COLOR_BLUE "Enter name to search: ");
    scanf("%s", searchName);

fseek(file, 0, SEEK_SET);

    while (fread(&person, sizeof(struct Person), 1, file) == 1) {
        if (strcmp(person.name, searchName) == 0) {
            printf(ANSI_COLOR_CYAN "Found entry:\n");
            printf(ANSI_COLOR_BLUE "Name: %s\n", person.name);
            printf(ANSI_COLOR_GREEN "Age: %d\n", person.age);
            printf(ANSI_COLOR_YELLOW "Address: %s\n", person.address);
            return;
        }
    }

    printf(ANSI_COLOR_RED "Name not found in the data.\n");
}

int main() {
    FILE *file = fopen("data.dat", "ab+");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int choice;

    do {
        printf(ANSI_COLOR_PURPLE "\n1. Add data\n");
        printf(ANSI_COLOR_BLUE "2. Search by name\n");
        printf(ANSI_COLOR_CYAN "3. Exit\n");
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addData(file);
                break;
            case 2:
                searchByName(file);
                break;
            case 3:
                printf(ANSI_COLOR_CRESET "Exiting the program.\n");
                break;
            default:
                printf(ANSI_COLOR_RED "Invalid choice. Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);

    fclose(file);

    return 0;
}