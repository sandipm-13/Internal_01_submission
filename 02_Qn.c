// )2. GCD of Two Numbers

#include <stdio.h>

int main() {
    int N1, N2, gcd;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &N1, &N2);

    int min = (N1 < N2) ? N1 : N2;

    for (int i = 1; i <= min; i++) {
        if (N1 % i == 0 && N2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of two numbers: %d\n", gcd);

    return 0;
}
