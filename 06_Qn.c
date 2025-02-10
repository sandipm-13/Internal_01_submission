//06. Armstrong Number Checker 

#include <stdio.h>

int main() {
    int n = 153, k = 0, org, d;
    
    org = n;  
    
    while (n != 0) {
        d = n % 10;  // Extract last digit
        k += d * d * d;  // Cube the digit and sum it
        n = n / 10;  // Remove last digit
    }

    if (org == k) {
        printf("It's an Armstrong number.\n");
    } else {
        printf("%d is not an Armstrong number.\n", org);
    }

    return 0;
}
