// if a number is greater then 9 & less than 100 then print 1

//If a number is greater than 9 & less than 100 then print 1 or if its less than 9 and greater than 100 print 0

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a > 9 && a < 100) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

