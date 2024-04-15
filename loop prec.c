#include<stdio.h>

int main() {
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &i);

    for (int a = 1; a <= i; a++) {
        // Print spaces before numbers
        for (int s = i - a; s > 0; s--) {
            printf(" ");
        }
        // Print numbers in increasing order
        for (j = 1; j <= a; j++) {
            printf("%d", j);
        }
        // Print numbers in decreasing order
        for (j = a - 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
