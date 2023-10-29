#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age >18) 
    {
        printf("Adult \n");
         printf("They can vote \n");
          printf("They can Drive \n"); 
    }

    else 
    { 
        printf("Not-Adult \n"); 
    }
    
    printf("Thanks for service");
   
    return 0;
}
