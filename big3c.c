#include <stdio.h>

void biggest3() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three integers: ");

    // Read the three integers from the keyboard
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use if-else if-else to find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

   // return 0; // Indicate successful execution
}

