//05. Prime Factors of a Number

#include <stdio.h>

int main() {
    int Num;

    printf("Enter an integer: ");
    scanf("%d", &Num);

    printf("Prime factors of %d are: ", Num);

    for (int i = 2; i <= Num; i++) {
        while (Num % i == 0) {
            printf("%d ", i);
            Num /= i;
        }
    }

    printf("\n");
    return 0;
}
