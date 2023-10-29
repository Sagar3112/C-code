#include<stdio.h>
int main(int argc, char const *argv[])
{ 
    float pi= 3.14;
    float radius;
    printf("Enter radius");
    scanf("%f", & radius);

    printf("Area of Circule  : %f", pi * radius * radius);
    return 0; 
}
