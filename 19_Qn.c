//19. Series Expansion: 1/1! + 2/2! + 3/3! + ... + n/n!

#include <stdio.h>

int main() {
    int n;
    float result = 0, fact = 1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
        result += (float)i / fact;
    }

    printf("Result of series: %.4f\n", result);

    return 0;
}
