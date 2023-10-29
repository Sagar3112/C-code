// subtract of two number

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    
    // display: asking about first digit  
    printf("Enter first number : ");
    //Take input for the first number  
    scanf("%f", &a);
    // display: asking about second digit  
    printf("Enter second number : ");
    //Take input for the first number
    scanf("%f", &b);
    
    // for result display 
    printf("subtract of Given value : %f\n ", a-b);
    return 0;
} 

/* 
// subtract of two number
#include <stdio.h>

int main() {
    float a, b;

    // Prompt the user for the first number
    printf("Enter the first number: ");
    if (scanf("%f", &a) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit with an error code
    }

    // Prompt the user for the second number
    printf("Enter the second number: ");
    if (scanf("%f", &b) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit with an error code
    }

    // Calculate the subtraction
    float result = a - b;

    // Display the result
    printf("Result of subtracting the given values: %f\n", result);

    return 0;
}

*/