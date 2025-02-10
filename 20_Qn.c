//20.Search Element in Array and Print Frequency

#include <stdio.h>
int main() {
    int n, key, count = 0;
    printf("Number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Element to search: ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count)
        printf("Element %d is present with frequency %d\n", key, count);
    else
        printf("Element %d is not present\n", key);
    
    return 0;
}