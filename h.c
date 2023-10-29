// write a program to print the average of 3 number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    printf("Enter three numbers that you want to average : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int x = a + b + c;
    float average = (float)x / 3; // Calculate the average as a float

    printf("The average of the given numbers: %.2f\n", average); // Use %f to print the float, %.2f to display two decimal places

    return 0;
}
