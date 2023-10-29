// write a program to check if a number is divisible by 2 or not?

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter a number for checking divisible by 2 : ");
    scanf("%d",&a);

     printf("%d", a % 2 ==0); 
    return 0;
}
