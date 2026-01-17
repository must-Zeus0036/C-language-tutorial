#include<stdio.h>

// calculator for add, sub, mul, div 

double add(double a, double b){
    return a + b;
}                   

double sub(double a, double b){
    return a - b;
}

double mul(double a, double b){
    return a * b;
}

double div(double a, double b){
    if (b != 0){
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0; // return 0 or handle error as needed
    }
}
int main (void){
    double num1;
    double num2;
    double result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator){

        case '+':
            result = add (num1, num2);
            break;

        case '-':
            result = sub (num1, num2);
            break;

        case '*':
            result = mul (num1, num2);
            break;

        case '/':
            result = div (num1, num2);
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    printf("Result: %lf\n", result);






    return 0;
}