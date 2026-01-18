#include<stdio.h>

// WORD COUNTER (String Manipulation)
// Take a sentence and count the number of words in it.

int main() {
    int i;
    int count =1;
    char str[200];

    printf("Enter a word: ");
    fgets(str, 200, stdin); // Read string with spaces

    for(i=0; str[i] != '\0'; i++) {

        if(str[i]==' '){
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    return 0;
}
