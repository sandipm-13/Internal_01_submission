/* 32. Print this pattern-
                A 
                A B 
                A B C 
                A B C D 
                A B C D E */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
