/*

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int isMonday= 1; int isRaining= 1;
    printf("%d \n", isMonday && isRaining);
     
    return 0;
}

#include<stdio.h> 

int main(int argc, char const *argv[])
{
    int isMonday= 0; int isRaining= 1;
    printf("%d \n", isMonday && isRaining); 
    return 0;
}


The code you provided has two separate main functions 
in different files. This is not allowed in C, as you 
can have only one main function in a C program. Having 
two main functions in a single program will lead to a 
compilation error.

If you want to have two different code sections, 
you should place them in separate C files and compile 
them separately as individual programs.

Here's a modified version of your code where the two 
code sections are in separate files:
*/

// Another way to write this code 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int isMonday = 1;
    int isRaining = 1;
    printf("%d \n", isMonday && isRaining);
    return 0;
}
