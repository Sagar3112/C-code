/* write a program to calculate perimeter of rectangle */

#include <stdio.h>

int main() {
    float length, width;

    // for taking value of length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    // for taking value width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // for  Calculate the perimeter
    float perimeter = 2 * (length + width);

    // for result
    printf("The perimeter of the rectangle is: %f\n", perimeter);

    return 0;
}
