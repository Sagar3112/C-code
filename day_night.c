#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day;
    printf("Enter day : ");
    scanf("%d", &day);

    if (day > 0) //This will ensure that "Have a nice day" is only printed if the user enters a positive value.
{
  printf("Have a nice day\n");
}


    else 
{ 
        printf("Good Night\n"); 
}
    

    return 0;
}
 

/*
Enter day : >0
Have a nice day

Enter day : 0>
Good Night
*/