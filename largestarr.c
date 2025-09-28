#include <stdio.h>
#include <stdlib.h> // Required for malloc, free, and exit

int main() {
    int n, i;
    int *arr; // Pointer to store the base address of the dynamically allocated array

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        exit(1); // Exit with an error code
    }

    // Input elements into the dynamically allocated array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Using array-like access for convenience
    }

    // Find the largest element
    int largest = arr[0]; // Assume the first element is the largest initially
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger element is found
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    // Free the dynamically allocated memory
    free(arr);

    return 0; // Indicate successful execution
}