// sum of two number

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    
    // display: asking about fisrt digit  
    printf("Enter first number : ");
    // take input for fisrt number  
    scanf("%f", &a);
    // display: asking about second digit  
    printf("Enter second number : ");
    // take input for fisrt number
    scanf("%f", &b);
    
    // for result display 
    printf("Sum of Given value : %f\n ", a+b);
    return 0;
}


/*
// Chat gpt Code for sum of two numbers
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
    
    // Calculate the sum
    float sum = a + b;
    
    // Display the result
    printf("Sum of the given values: %f\n", sum);
    
    return 0;
}
 
*/