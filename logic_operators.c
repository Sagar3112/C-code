// Logical Operators

#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d \n", 9>5 && 5>3); //&& its is a logical operators which is used for show and condition
    // output 1 to show that this is an true value
    printf("%d \n", 9>5 && 5>7); //&& its is a logical operators which is used for show and condition
    // output 0 to show that this is an false value
    
    
    printf("%d \n", 9||5 && 5||3); // || its is a logical operators which is used for show and condition
    // output 1 to show that this is an true value
    printf("%d \n", 9||5 && 5||7); // || its is a logical operators which is used for show and condition
    // output 0 to show that this is an false value
    
    printf("%d \n", !(9||5) && !(5||3)); // || its is a logical operators which is used for show and condition
    // output 1 to show that this is an true value
    printf("%d \n", !(9||5) && !(5||7)); // || its is a logical operators which is used for show and condition
    // output 0 to show that this is an false value
    return 0;
}
