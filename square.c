/* Take a number (n) from user & output its square (n*n)  */

#include <stdio.h>

int main() {
    float n;

    // Prompt the user to enter a number
    printf("Enter a number to calculate its cube: ");
    scanf("%f", &n);

    // Calculate the squre of the input number
    float squre = n * n ;

    // Display the result
    printf("The squre of the given number is: %f\n", squre);

    return 0;
}

 /*
 // chat gpt code for square of any number

#include <stdio.h>

int main() {
    float n;

    // Prompt the user to enter a number
    printf("Enter a number to calculate its square: ");
    scanf("%f", &n);

    // Calculate the square of the input number
    float square = n * n;

    // Display the result
    printf("The square of the given number is: %f\n", square);

    return 0;
}

 */