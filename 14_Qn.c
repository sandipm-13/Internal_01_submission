//13. Product of Two 3x3 Matrices

#include <stdio.h>

int main() {
    int M[3][3], Tr[3][3];

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Tr[j][i] = M[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Tr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
