// ChatGpt code for square root

#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root
    result = sqrt(number);

    // Display the result
    printf("The square root of %.2lf is %.2lf\n", number, result);

    return 0;
}
