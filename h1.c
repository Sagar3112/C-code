//Write a program to check if a given character is a digit or not.

#include <stdio.h>
#include <ctype.h>  // Include the ctype.h library for isdigit function

int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);  // Remove the '\n' inside scanf

    if (isdigit(a)) {
        printf("'%c' is a digit (0)\n", a); // If the character is a digit, print 1
    } else {
        printf("'%c' is not a digit (1)\n", a); // If the character is not a digit, print 0
    }

    return 0;
}

