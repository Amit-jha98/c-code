#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseComplement(char* sequence) {
    int length = strlen(sequence);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = sequence[i];
        switch (temp) {
            case 'A': sequence[i] = 'T'; break;
            case 'T': sequence[i] = 'A'; break;
            case 'C': sequence[i] = 'G'; break;
            case 'G': sequence[i] = 'C'; break;
        }

        temp = sequence[j];
        switch (temp) {
            case 'A': sequence[j] = 'T'; break;
            case 'T': sequence[j] = 'A'; break;
            case 'C': sequence[j] = 'G'; break;
            case 'G': sequence[j] = 'C'; break;
        }
    }
    if (length % 2 == 1) {
        switch (sequence[length / 2]) {
            case 'A': sequence[length / 2] = 'T'; break;
            case 'T': sequence[length / 2] = 'A'; break;
            case 'C': sequence[length / 2] = 'G'; break;
            case 'G': sequence[length / 2] = 'C'; break;
        }
    }
}

int createFolder(const char* folderName) {
    char command[100];
    sprintf(command, "mkdir -p %s", folderName);
    return system(command);
}

void saveToFile(const char* dnaSequence, const char* filePath) {
    FILE *outputFile = fopen(filePath, "w");
    if (outputFile != NULL) {
        fprintf(outputFile, "%s\n", dnaSequence);
        fclose(outputFile);
        printf("DNA Sequence saved to '%s'.\n", filePath);
    } else {
        perror("Error saving DNA sequence to file");
    }
}

void saveBothToFiles(const char* dnaSequence, const char* complementSequence, const char* filePath) {
    FILE *outputFile = fopen(filePath, "w");
    if (outputFile != NULL) {
        fprintf(outputFile, "Original DNA Sequence:\n%s\n\n", dnaSequence);
        fprintf(outputFile, "Reverse Complement:\n%s\n", complementSequence);
        fclose(outputFile);
        printf("Both DNA Sequence and Reverse Complement saved to '%s'.\n", filePath);
    } else {
        perror("Error saving DNA sequences to file");
    }
}

int main() {
    while (1) {
        char *dnaSequence = NULL;
        char *complementSequence = NULL;
        printf("Enter DNA Sequence (type 'N' to end): ");
        size_t bufferSize = 1024;  // Initial buffer size
        char *buffer = (char *)malloc(bufferSize);
        if (buffer == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            return EXIT_FAILURE;
        }
        if (fgets(buffer, bufferSize, stdin) == NULL) {
            fprintf(stderr, "Error reading input.\n");
            free(dnaSequence);
            free(complementSequence);
            free(buffer);
            return EXIT_FAILURE;
        }
        buffer[strcspn(buffer, "\n")] = '\0';
        if (strcmp(buffer, "N") == 0) {
            free(dnaSequence);
            free(complementSequence);
            free(buffer);
            break;
        }
        dnaSequence = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        complementSequence = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (dnaSequence == NULL || complementSequence == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            free(buffer);
            return EXIT_FAILURE;
        }
        strcpy(dnaSequence, buffer);
        strcpy(complementSequence, buffer);
        reverseComplement(complementSequence);
        reverseComplement(dnaSequence);
        printf("Reverse Complement of DNA Sequence:\n%s\n", complementSequence);
        printf("Enter Folder Name to Save File: ");
        if (fgets(buffer, bufferSize, stdin) == NULL) {
            fprintf(stderr, "Error reading input.\n");
            free(dnaSequence);
            free(complementSequence);
            free(buffer);
            return EXIT_FAILURE;
        }
        buffer[strcspn(buffer, "\n")] = '\0';  // Remove trailing newline
        char folderName[50];
        strcpy(folderName, buffer);
        if (createFolder(folderName) == -1) {
            fprintf(stderr, "Error creating folder '%s'.\n", folderName);
            free(dnaSequence);
            free(complementSequence);
            free(buffer);
            return EXIT_FAILURE;
        }
        printf("Enter File Name (without extension): ");
        if (fgets(buffer, bufferSize, stdin) == NULL) {
            fprintf(stderr, "Error reading input.\n");
            free(dnaSequence);
            free(complementSequence);
            free(buffer);
            return EXIT_FAILURE;
        }
        buffer[strcspn(buffer, "\n")] = '\0';  // Remove trailing newline
        char fileName[50];
        strcpy(fileName, buffer);
        char filePath[100];
        sprintf(filePath, "%s/%s.txt", folderName, fileName);
        saveBothToFiles(dnaSequence, complementSequence, filePath);
        free(dnaSequence);
        free(complementSequence);
        free(buffer);
    }

    return EXIT_SUCCESS;
}
