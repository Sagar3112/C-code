/*
// operator precedance 

*,/,%  >--------x=4+g*10
   |
   |
   |
+,-    >-------a=4-2+6

   |
   |
   |
   =   >------ X= 4*3/6*2

*/

/*a simple C program to evaluate expressions following the BODMAS
(Brackets, Orders, Division, Multiplication, Addition, Subtraction) rules
*/
#include <stdio.h>

int main() {
    float result;
    
    // Input the expression from the user
    printf("Enter an expression (e.g., 2 * (3 + 4) / 5): ");
    scanf("%f", &result);

    // Display the result
    printf("Result: %f\n", result);

    return 0;
}

