#include <stdio.h>
#define N 50

void multiplyMatrices(int m, int n, int p, int q, int a[][N], int b[][N], int c[][N]) {
    int i, j, k;

    if (n != p) {
        printf("Multiplication cannot be performed.\n");
        return;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[N][N], b[N][N], c[N][N], i, j, m, n, p, q;

    printf("Enter the row and column of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the row and column of the second matrix: ");
    scanf("%d %d", &p, &q);
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The first matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    multiplyMatrices(m, n, p, q, a, b, c);

    printf("The multiplication of the two matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}