#include<stdio.h> // Line 1:This line tells the compiler to include the stdio.h header file, which contains declarations for functions such as printf() and scanf().

int main(int argc, char const *argv[]) //Line 3:This line declares the main() function, which is the entry point for all C programs. The argc and argv parameters are used to pass command-line arguments to the program.

{
    int age; // This line declares a variable named age of type int.
printf("enter age : "); // This line uses the printf() function to print the message "enter age : " to the console.
scanf("%d", &age); //This line uses the scanf() function to read an integer from the console and store it in the variable age.
age >= 18 ? printf("adult \n") : printf("not adult \n"); // This line is a ternary expression. It works as follows:
/*
The expression age >= 18 is evaluated.
If the expression is true, the code printf("adult \n"); is executed.
Otherwise, the code printf("not adult \n"); is executed.*/
    return 0; // This line returns the value 0 from the main() function. This is the standard way to indicate that the program has terminated successfully.

}

/*

When the program is executed, the following steps are performed:

1. The compiler includes the stdio.h header file.
2. The compiler compiles the program and generates an executable file.
3. The executable file is executed.
4. The main() function is called.
5. The printf() function is used to print the message "enter age : " to the console.
6. The scanf() function is used to read an integer from the console and store it in the variable age.
7. The ternary expression is evaluated to determine whether the user is an adult.
8. If the user is an adult, the code printf("adult \n"); is executed.
9. Otherwise, the code printf("not adult \n"); is executed.
10.The main() function returns the value 0.
Example output:
               enter age : 20
               adult

               enter age : 15
               not adult
*/