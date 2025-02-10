//03. LCM of Two Numbers 

#include <stdio.h>

int main() {
    int N1, N2, LCM;

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &N1, &N2);

    LCM = (N1 > N2) ? N1 : N2;
    while (1) {
        if (LCM % N1 == 0 && LCM % N2 == 0) {
            break;
        }
        LCM++;
    }

    printf("LCM of %d and %d is: %d\n", N1, N2, LCM);

    return 0;
}
