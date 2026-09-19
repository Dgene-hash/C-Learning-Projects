#include <stdio.h>
int main()
{
    float height;
    float weight;

    printf("Enter height(cm): ");
    scanf("%f",&height);
    printf("Enter weight(kg): ");
    scanf("%f",&weight);
    height = height/100;

    float bmi = weight/(height*height);
    printf("Your BMI is %.2f\n",bmi);

    if (bmi<18.5){
        printf("Underweight");
    }
    else if(bmi<=24.9){
        printf("Normal weight");
    }
    else if(bmi<=29.9){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }
    return 0;

}