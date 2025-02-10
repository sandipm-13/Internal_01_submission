/*23. find out largest and smallest number from an 1d array, then sort 
the array in ascending and descending order.*/

#include <stdio.h>

// Function to find the largest and smallest numbers in an array
void find_Lrgst_Smllst(int arr[], int n, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

// Function to sort array in ascending order 
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; // Swap arr[j] and arr[j+1]
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort array in descending order 
void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j]; // Swap arr[j] and arr[j+1]
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10], i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

   
    printf("Enter %d numbers into the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    // Finding largest and smallest
    find_Lrgst_Smllst(arr, n, &largest, &smallest);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Sorting in ascending order
    sortAscending(arr, n);
    printf("Array sorted in ascending order: ");
    printArray(arr, n);

    // Sorting in descending order
    sortDescending(arr, n);
    printf("Array sorted in descending order: ");
    printArray(arr, n);

    return 0;
}
