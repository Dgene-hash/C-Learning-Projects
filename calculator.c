#include <stdio.h>
int main()
{
    float a,b;
    char op;

    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("Enter operation (+,-,/,%,*):");
    scanf(" %c",&op);

    if(b==0 && op=='/'){
        printf("Division by zero is not allowed");
    }
    else if(b==0 && op=='%'){
        printf("Modulus by zero is not allowed");
    }
    else if(op=='+'){
        printf("Result = %f",a+b);
    }
    else if(op=='-'){
        printf("Result = %f",a-b);
    }
    else if(op=='*'){
        printf("Result = %f",a*b);
    }
    else if(op=='/'){
        printf("Result = %f",a/b);
    }
    else if(op=='%'){
        printf("Result = %d",(int)a%(int)b);
    }
    else{
        printf("Invalid Operation");
    }

    return 0;
}