//17. Series Expansion: x - x²/2 + x³/3 - x⁴/4 + ... + xⁿ/n

#include <stdio.h>

int main() {
    float x, result = 0;
    int n;
    printf("Enter value of x & n: ");
    scanf("%f %d", &x, &n);

    float term = x;
    for (int i = 1; i <= n; i++) {
        result += (i % 2 == 0 ? -1 : 1) * (term / i);
        term *= x;
    }

    printf("Result: %.4f\n", result);

    return 0;
}
