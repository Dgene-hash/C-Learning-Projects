#include <stdio.h>
int main()
{
    char grade;
    printf("Enter Grade: ");
    scanf(" %c",&grade);
    
    switch(grade)
    {
        case 'a':
        case 'A':
        printf("Excellent");
        break;

        case 'b':
        case 'B':
        printf("Good");
        break;

        case 'c':
        case 'C':
        printf("Average");
        break;

        case 'd':
        case 'D':
        printf("Pass");
        break;

        case 'f':
        case 'F':
        printf("Fail");
        break;

        default:
        printf("Invalid Grade");


    }
    return 0;
}