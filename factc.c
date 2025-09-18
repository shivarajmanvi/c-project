#include <stdio.h>

void factorial() {
    int number;
    long long factorial = 1; // Use long long to handle larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Handle negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    // Handle factorial of 0
    else if (number == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld.\n", number, factorial);
    }

   // return 0;
}
