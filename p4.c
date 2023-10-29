// write a code to check even or odd number 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // even -> 1
    // odd -> 0

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);  // Removed the \n from the scanf format string

    printf("%d", a % 2 == 0);

    return 0;
}
