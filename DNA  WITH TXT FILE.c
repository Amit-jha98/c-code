#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESET_COLOR "\033[0m"
#define MAX_SEQ_LENGTH 100

void strrev(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }


void createFolder(const char* folderPath) {
    #ifdef _WIN32
    _mkdir(folderPath);
    #else
    mkdir(folderPath, 0755);
    #endif
}

void saveOutputToFile(char* seq1, char* seq2, char* aligned_seq1, char* alignment_symbols, char* aligned_seq2, int alignment_score, int match_score, int mismatch_score, int gap_penalty, const char* filePath) {
    FILE* file = fopen(filePath, "a");  
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Input Sequence 1: %s\n", seq1);
    fprintf(file, "Input Sequence 2: %s\n", seq2);
    fprintf(file, "Aligned Sequence 1: %s\n", aligned_seq1);
    fprintf(file, "Alignment Symbols:  %s\n", alignment_symbols);
    fprintf(file, "Aligned Sequence 2: %s\n", aligned_seq2);
    fprintf(file, "Alignment Score: %d\n", alignment_score);
    fprintf(file, "Score Calculation: match = %d, mismatch = %d, gap penalty = %d\n", match_score, mismatch_score, gap_penalty);

    fclose(file);

    printf("Output saved to %s.\n", filePath);
}

int max(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

void needleman_wunsch(char* seq1, char* seq2, int len1, int len2, int match_score, int mismatch_score, int gap_penalty, const char* folderPath, const char* fileName) {
    int i, j;
    int** dp = (int**)malloc((len1 + 1) * sizeof(int*));
    for (i = 0; i <= len1; i++) {
        dp[i] = (int*)malloc((len2 + 1) * sizeof(int));
    }
    for (i = 0; i <= len1; i++) {
        dp[i][0] = i * gap_penalty;
    }
    for (j = 0; j <= len2; j++) {
        dp[0][j] = j * gap_penalty;
    }
    for (i = 1; i <= len1; i++) {
        for (j = 1; j <= len2; j++) {
            int match = (seq1[i - 1] == seq2[j - 1]) ? match_score : mismatch_score;
            int score1 = dp[i - 1][j - 1] + match;
            int score2 = dp[i - 1][j] + gap_penalty;
            int score3 = dp[i][j - 1] + gap_penalty;
            dp[i][j] = max(score1, score2, score3);
        }
    }
    i = len1;
    j = len2;
    char aligned_seq1[MAX_SEQ_LENGTH * 2] = "";  
    char aligned_seq2[MAX_SEQ_LENGTH * 2] = "";  
    char alignment_symbols[MAX_SEQ_LENGTH * 2] = "";  
    while (i > 0 || j > 0) {
        if (i > 0 && dp[i][j] == dp[i - 1][j] + gap_penalty) {
            strncat(aligned_seq1, &seq1[i - 1], 1);
            strncat(aligned_seq2, "-", 1);
            strncat(alignment_symbols, " ", 1);
            i--;
        } else if (j > 0 && dp[i][j] == dp[i][j - 1] + gap_penalty) {
            strncat(aligned_seq1, "-", 1);
            strncat(aligned_seq2, &seq2[j - 1], 1);
            strncat(alignment_symbols, " ", 1);
            j--;
        } else {
            strncat(aligned_seq1, &seq1[i - 1], 1);
            strncat(aligned_seq2, &seq2[j - 1], 1);
            strncat(alignment_symbols, (seq1[i - 1] == seq2[j - 1]) ? "|" : " ", 1); 
            i--;
            j--;
        }
    }
    strrev(aligned_seq1);
    strrev(aligned_seq2);
    strrev(alignment_symbols);
    printf("Input Sequence 1: %s\n", seq1);
    printf("Input Sequence 2: %s\n", seq2);
    printf("Aligned Sequence 1: %s\n", aligned_seq1);
    printf("Alignment Symbols:  %s\n", alignment_symbols);
    printf("Aligned Sequence 2: %s\n", aligned_seq2);
    printf("Alignment Score: ");
    if (dp[len1][len2] > 0) {
        printf(GREEN_COLOR "%d" RESET_COLOR "\n", dp[len1][len2]);
    } else {
        printf(RED_COLOR "%d" RESET_COLOR "\n", dp[len1][len2]);
    }
    printf("Score Calculation: match = %d, mismatch = %d, gap penalty = %d\n", match_score, mismatch_score, gap_penalty);

    char filePath[MAX_SEQ_LENGTH + 100];
    sprintf(filePath, "%s/%s.txt", folderPath, fileName);
    saveOutputToFile(seq1, seq2, aligned_seq1, alignment_symbols, aligned_seq2, dp[len1][len2], match_score, mismatch_score, gap_penalty, filePath);

    for (i = 0; i <= len1; i++) {
        free(dp[i]);
    }
    free(dp);
}

int main() {
    char seq1[MAX_SEQ_LENGTH], seq2[MAX_SEQ_LENGTH];
    int match_score, mismatch_score, gap_penalty;
    char folderPath[MAX_SEQ_LENGTH];
    char fileName[MAX_SEQ_LENGTH];
    char choice='N';
    do {
        printf("Enter Sequence 1: ");
        scanf("%s", seq1);
        printf("Enter Sequence 2: ");
        scanf("%s", seq2);
        printf("Enter Match Score: ");
        scanf("%d", &match_score);
        printf("Enter Mismatch Score: ");
        scanf("%d", &mismatch_score);
        printf("Enter Gap Penalty: ");
        scanf("%d", &gap_penalty);

        int len1 = strlen(seq1);
        int len2 = strlen(seq2);
        if (choice == 'n' || choice == 'N') {
            printf("Enter folder path for saving output: ");
            scanf("%s", folderPath);
            printf("Enter the name of the file to save: ");
            scanf("%s", fileName);
        }
        needleman_wunsch(seq1, seq2, len1, len2, match_score, mismatch_score, gap_penalty, folderPath, fileName);

        printf("Do you want to perform another alignment? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}