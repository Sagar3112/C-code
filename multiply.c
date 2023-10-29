// multiply of two number

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
    printf("subtract of Given value : %f\n ", a*b);
    return 0;
} 


/*
// chatgpt code for multiply two numbers 

#include <stdio.h>

int main() {
    float a, b;
    
    // Display: ask for the first number  
    printf("Enter the first number: ");
    // Take input for the first number  
    scanf("%f", &a);
    
    // Display: ask for the second number  
    printf("Enter the second number: ");
    // Take input for the second number
    scanf("%f", &b);
    
    // Calculate the product
    float product = a * b;
    
    // Display the result
    printf("Product of the given values: %f\n", product);
    
    return 0;
}

*/