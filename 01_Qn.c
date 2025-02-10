//01. Swap Two Numbers Without Using a Third Variable
#include <stdio.h>

int main() {
    int N1, N2;

    printf("Two numbers are: ");
    scanf("%d", &N1);
    scanf("%d", &N2);

    printf("N1=%d, N2=%d\n", N1, N2);

    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;

    printf("On Swapping: N1=%d, N2=%d\n", N1, N2);

    return 0;
}
