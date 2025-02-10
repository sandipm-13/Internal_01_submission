//08. Palindrome Number Checker 

#include <stdio.h>

int main() {
    int num, rev_num = 0, rem, original;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num /= 10;
    }

    if (rev_num == original) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
