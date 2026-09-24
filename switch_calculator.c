#include <stdio.h>
int main()
{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n\n");

    int choice;
    float a,b;
    printf("Enter Choice: ");
    scanf("%d",&choice);
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);

    switch(choice)
    {
        case 1:
        printf("Addition: %f",a+b);
        break;

        case 2:
        printf("Subtraction: %f",a-b);
        break;

        case 3:
        printf("Multiplication: %f",a*b);
        break;

        case 4:
        if(b==0){
            printf("Error");
        }
        else{
            printf("Division: %f",a/b);
        }
        break;

        case 5:
        if(b==0){
            printf("Error");
        }
        else{
            printf("Modulus: %d",(int)a%(int)b);
        }
        break;

        default:
        printf("Error");

    }
    return 0;
}