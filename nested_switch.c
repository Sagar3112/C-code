#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter a number : \n");
    scanf("%d", &number);

             if (number>=0)
             {
                printf("positive : \n ");
                if (number % 2 == 0) {
                    printf("even : \n");
                }
             } else {
                printf("negative : \n");
                printf("odd : \n");
             }
             
    return 0;
}
