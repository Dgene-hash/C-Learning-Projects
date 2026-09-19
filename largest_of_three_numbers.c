#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("Enter Third Number: ");
    scanf("%f",&c);

    if(a==b && b==c){
        printf("All numbers are equal");
    }
    else if(a==b && a>c){
        printf("First and Second are largest numbers");
    }
    else if(a==c && a>b){
        printf("First and Third are largest numbers");
    }
    else if(b==c && c>a){
        printf("Second and Third are largest numbers");
    }
    else if(a>b && a>c){
        printf("First number is the largest number");
    }
    else if(b>a && b>c){
        printf("Second number is the largest number");
    }
    else{
        printf("Third number is the largest number");
    }
    
    return 0;
}