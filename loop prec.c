#include<stdio.h>

int main() {
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &i);

    for (int a = 1; a <= i; a++) {
        for (int s = i - a; s > 0; s--) {
            printf(" ");
        }
        for (j = 1; j <= a; j++) {
            printf("%d", j);
        }
        for (j = a - 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}