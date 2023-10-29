/* Take a number (n) from user & output its cude (n*n*n)*/

#include <stdio.h>

int main() {
    float n;

    // Prompt the user to enter a number
    printf("Enter a number to calculate its cube: ");
    scanf("%f", &n);

    // Calculate the cube of the input number
    float cube = n * n * n;

    // Display the result
    printf("The cube of the given number is: %f\n", cube);

    return 0;
}

 