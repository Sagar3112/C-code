/*
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a = 1.99999; 
    printf("%d \n",&a);

    return 0;
}

*/

/*
// i gated 6422300 as output why? 

1. You declare an integer variable a and initialize it with 
the value 1.99999. Since a is declared as an integer, it will 
only store the integer part of the value, which is 1. The 
fractional part (0.99999) will be truncated.

2. In the printf statement, you use the format specifier %d to
 print the value of a. However, you mistakenly use &a instead 
 of just a. Using &a is trying to print the address of the 
 integer a, not its value.

3. When you use &a in the printf statement, you're printing 
 the memory address of the integer variable a. The value 6422300 
 that you're getting as output is the address of the variable a in memory.

 Note :- To fix the code and print the value of a, you should use the following printf statement:
 
    // printf("%d\n", a);

This will print the value 1 to the console.

Here's the corrected code:

*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 1.99999; 
    printf("%d\n", a);

    return 0;
}

//With this change, your code will correctly output 1 as the value of a.


