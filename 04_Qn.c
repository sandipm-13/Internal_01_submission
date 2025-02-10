//04. Prime Number Checker 

#include <stdio.h>

int main() {
    int N, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &N);

    if (N <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", N);
    } else {
        printf("%d is not a prime number.\n", N);
    }

    return 0;
}
