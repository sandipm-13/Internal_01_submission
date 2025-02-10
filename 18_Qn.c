//18. Series Expansion: x - 2x² + 3x³ - 4x⁴ + ... - nxⁿ

#include <stdio.h>

int main() {
    float x, result = 0, term = 1;

    printf("Enter value of x & n: ");
    scanf("%f %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        term *= x;
        result += (i % 2 == 0 ? -1 : 1) * i * term;
    }

    printf("Result: %.4f\n", result);

    return 0;
}
