#include<stdio.h>

// The money manager ( pointers )

// function prototype
void deposite(int *b);

int main(){
    int balance = 500; 

    printf("Initial Balance: %d\n", balance);

    //pass the address of balance
    deposite(&balance);

    printf("Balance after deposite: %d\n", balance);
    return 0;
}

// function definition
void deposite(int *b){
    *b += 100;
}

