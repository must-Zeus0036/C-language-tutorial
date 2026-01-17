#include<stdio.h>

int main(void){

    float c;
    float f;

    printf("Enter a Celsius temp: ");

    scanf("%f", &c);

    f = c * (9.0/5.0) + 32;

    printf("Fahrenheit temperature: %f\n", f);

    return 0;
}