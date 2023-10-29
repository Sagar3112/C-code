#include <stdio.h>  // Include the standard input/output library, which provides functions like printf and scanf.

int main(int argc, char const *argv[])  // Define the main function with command line arguments.
{
    
          int day; // Declare an integer variable named 'day' to store the day of the week (1-7).
          printf("enter day(1-7): ");  // Display a prompt to enter a number representing a day.
          scanf("%d", &day);  // Read an integer input from the user and store it in the 'day' variable.

          switch (day)  // Start a switch statement based on the value of 'day'.
          {
            case 1 : printf("monday \n");  // If 'day' is 1, print "monday" and break out of the switch.
                 break;
            case 2 : printf("tuesday \n");  // If 'day' is 2, print "tuesday" and break out of the switch.
                 break;
            case 3 : printf("wednesday \n");  // If 'day' is 3, print "wednesday" and break out of the switch.
                 break;
            case 4 : printf("thursday \n");  // If 'day' is 4, print "thursday" and break out of the switch.
                 break;
            case 5 : printf("friday \n");  // If 'day' is 5, print "friday" and break out of the switch.
                 break;
            case 6 : printf("saturday \n");  // If 'day' is 6, print "saturday" and break out of the switch.
                 break;
            case 7 : printf("sunday \n");  // If 'day' is 7, print "sunday" and break out of the switch.
                 break;
          
          default:  // If 'day' doesn't match any of the cases, do nothing (default case).
            break;
          }
    return 0;  // Exit the program with a return value of 0, indicating successful execution.
}
