//16. Sum of Natural Numbers (1 + 2 + 3 + ... + n)

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
        if (i < n) printf("+ ");
    }

    printf("\nSum is: %d\n", sum);

    return 0;
}
