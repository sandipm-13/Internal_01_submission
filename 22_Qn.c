//22.Swap Odd and Even Elements in an Array

#include <stdio.h>
int main() {
    int n;
    printf("Number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}